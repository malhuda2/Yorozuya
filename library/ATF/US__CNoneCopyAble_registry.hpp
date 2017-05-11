// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "./common/ATFCore.hpp"
#include "US__CNoneCopyAble_detail.hpp"


START_ATF_NAMESPACE
namespace US
{
    namespace registry
    {
        class CNoneCopyAble_registry : public IRegistry
        {
            public: virtual void registry() {
                auto& hook_core = CATFCore::get_instance();
                for (auto& r : US::detail::CNoneCopyAble_functions)
                    hook_core.reg_wrapper(r.pBind, r);
            }
        };
        
    }; // end namespace registry
};
END_ATF_NAMESPACE
