#pragma once

#include "./common.h"

#include <map>
#include <MinHook.h>

START_ATF_NAMESPACE
	template<typename T>
	LPVOID cast_pointer_function(T function)
	{
		union
		{
			T val0;
			LPVOID val1;
		} rec;
		rec.val0 = function;

		return rec.val1;
	}

	class CATFCore
	{
	public:
		CATFCore() {
			MH_Initialize();
		}

		CATFCore(const CATFCore&)
		{
		}

	public:
		~CATFCore() {
			MH_Uninitialize();
		}

		static CATFCore& get_instance() {
			static CATFCore instance;
			return instance;
		}

	public:
		void cleanup() {
			for (auto& r : _mapper_function)
				MH_DisableHook(r.second.pTrgAppOrig);
		}

		void reg_wrapper(LPVOID fnTarget, _hook_record& rec)
		{
			_mapper_function[fnTarget] = rec;
		}

		void unreg_wrapper(
			LPVOID fnTarget)
		{
			if (_mapper_function.find(fnTarget) == _mapper_function.end())
				return;

			_mapper_function.erase(fnTarget);
		}

		template <typename T1, typename T2>
		bool set_hook(T1 pTarget, T2 pDetour)
		{
			bool result = false;
			MH_STATUS status = MH_UNKNOWN;
			do
			{
				LPVOID key = cast_pointer_function(pTarget);
				*_mapper_function[key].ppOrig =
					cast_pointer_function(pDetour);

				status =
					MH_CreateHook(
						_mapper_function[key].pTrgAppOrig,
						reinterpret_cast<LPVOID>(_mapper_function[key].pWrapper),
						reinterpret_cast<LPVOID*>(_mapper_function[key].ppTramp));

				if (status != MH_OK)
					break;

				status =
					MH_EnableHook(
						_mapper_function[key].pTrgAppOrig);

				if (status != MH_OK)
					break;

				result = true;
			} while (false);

			return result;
		}

	private:
		_STD map<LPVOID, _hook_record> _mapper_function;
	};
END_ATF_NAMESPACE