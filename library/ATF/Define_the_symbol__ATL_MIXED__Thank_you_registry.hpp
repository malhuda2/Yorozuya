// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "./common/ATFCore.hpp"
#include "Define_the_symbol__ATL_MIXED__Thank_you_detail.hpp"


START_ATF_NAMESPACE
	namespace Define_the_symbol__ATL_MIXED
	{
		namespace registry
		{
			class Thank_you_registry : public IRegistry
			{
				public: virtual void registry() {
					auto& hook_core = CATFCore::get_instance();
					for (auto& r : Define_the_symbol__ATL_MIXED::detail::Thank_you_functions)
						hook_core.reg_wrapper(r.pBind, r);
				}
			};

		}; // end namespace registry
	}; // end namespace Define_the_symbol__ATL_MIXED
END_ATF_NAMESPACE
