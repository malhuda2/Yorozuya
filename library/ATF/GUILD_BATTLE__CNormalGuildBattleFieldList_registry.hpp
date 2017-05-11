// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "./common/ATFCore.hpp"
#include "GUILD_BATTLE__CNormalGuildBattleFieldList_detail.hpp"


START_ATF_NAMESPACE
namespace GUILD_BATTLE
{
	namespace registry
	{
		class CNormalGuildBattleFieldList_registry : public IRegistry
		{
			public: virtual void registry() {
				auto& hook_core = CATFCore::get_instance();
				for (auto& r : GUILD_BATTLE::detail::CNormalGuildBattleFieldList_functions)
					hook_core.reg_wrapper(r.pBind, r);
			}
		};

	}; // end namespace registry
};
END_ATF_NAMESPACE
