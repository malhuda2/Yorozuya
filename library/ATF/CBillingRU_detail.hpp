// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "CBillingRU_info.hpp"


START_ATF_NAMESPACE
    namespace detail
    {
        info::CBillingRUctor_CBillingRU2_ptr CBillingRUctor_CBillingRU2_next(nullptr);
        info::CBillingRUctor_CBillingRU2_clbk CBillingRUctor_CBillingRU2_user(nullptr);
        info::CBillingRUdtor_CBillingRU7_ptr CBillingRUdtor_CBillingRU7_next(nullptr);
        info::CBillingRUdtor_CBillingRU7_clbk CBillingRUdtor_CBillingRU7_user(nullptr);
        
        void CBillingRUctor_CBillingRU2_wrapper(struct CBillingRU* _this)
        {
           CBillingRUctor_CBillingRU2_user(_this, CBillingRUctor_CBillingRU2_next);
        };
        void CBillingRUdtor_CBillingRU7_wrapper(struct CBillingRU* _this)
        {
           CBillingRUdtor_CBillingRU7_user(_this, CBillingRUdtor_CBillingRU7_next);
        };
        
        hook_record CBillingRU_functions[] = {
        {   (LPVOID)0x14022eba0L,
            (LPVOID *)&CBillingRUctor_CBillingRU2_user,
            (LPVOID *)&CBillingRUctor_CBillingRU2_next,
            (LPVOID)cast_pointer_function(CBillingRUctor_CBillingRU2_wrapper),
            (LPVOID)cast_pointer_function((void(CBillingRU::*)())&CBillingRU::ctor_CBillingRU) },
        {   (LPVOID)0x14022ec70L,
            (LPVOID *)&CBillingRUdtor_CBillingRU7_user,
            (LPVOID *)&CBillingRUdtor_CBillingRU7_next,
            (LPVOID)cast_pointer_function(CBillingRUdtor_CBillingRU7_wrapper),
            (LPVOID)cast_pointer_function((void(CBillingRU::*)())&CBillingRU::dtor_CBillingRU) },
        
        };
        
    }; // end namespace detail
END_ATF_NAMESPACE
