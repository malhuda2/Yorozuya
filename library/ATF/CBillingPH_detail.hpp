// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "CBillingPH_info.hpp"


START_ATF_NAMESPACE
    namespace detail
    {
        info::CBillingPHctor_CBillingPH2_ptr CBillingPHctor_CBillingPH2_next(nullptr);
        info::CBillingPHctor_CBillingPH2_clbk CBillingPHctor_CBillingPH2_user(nullptr);
        info::CBillingPHdtor_CBillingPH7_ptr CBillingPHdtor_CBillingPH7_next(nullptr);
        info::CBillingPHdtor_CBillingPH7_clbk CBillingPHdtor_CBillingPH7_user(nullptr);
        
        void CBillingPHctor_CBillingPH2_wrapper(struct CBillingPH* _this)
        {
           CBillingPHctor_CBillingPH2_user(_this, CBillingPHctor_CBillingPH2_next);
        };
        void CBillingPHdtor_CBillingPH7_wrapper(struct CBillingPH* _this)
        {
           CBillingPHdtor_CBillingPH7_user(_this, CBillingPHdtor_CBillingPH7_next);
        };
        
        hook_record CBillingPH_functions[] = {
        {   (LPVOID)0x14022e260L,
            (LPVOID *)&CBillingPHctor_CBillingPH2_user,
            (LPVOID *)&CBillingPHctor_CBillingPH2_next,
            (LPVOID)cast_pointer_function(CBillingPHctor_CBillingPH2_wrapper),
            (LPVOID)cast_pointer_function((void(CBillingPH::*)())&CBillingPH::ctor_CBillingPH) },
        {   (LPVOID)0x14022e330L,
            (LPVOID *)&CBillingPHdtor_CBillingPH7_user,
            (LPVOID *)&CBillingPHdtor_CBillingPH7_next,
            (LPVOID)cast_pointer_function(CBillingPHdtor_CBillingPH7_wrapper),
            (LPVOID)cast_pointer_function((void(CBillingPH::*)())&CBillingPH::dtor_CBillingPH) },
        
        };
        
    }; // end namespace detail
END_ATF_NAMESPACE
