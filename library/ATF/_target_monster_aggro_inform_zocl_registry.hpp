// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "./common/ATFCore.hpp"
#include "_target_monster_aggro_inform_zocl_detail.hpp"


START_ATF_NAMESPACE
    namespace registry
    {
        class _target_monster_aggro_inform_zocl_registry : public IRegistry
        {
            public: virtual void registry() {
                auto& hook_core = CATFCore::get_instance();
                for (auto& r : detail::_target_monster_aggro_inform_zocl_functions)
                    hook_core.reg_wrapper(r.pBind, r);
            }
        };
        
    }; // end namespace registry
END_ATF_NAMESPACE
