// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "BossSchedule_TBL_info.hpp"


START_ATF_NAMESPACE
    namespace detail
    {
        info::BossSchedule_TBLctor_BossSchedule_TBL2_ptr BossSchedule_TBLctor_BossSchedule_TBL2_next(nullptr);
        info::BossSchedule_TBLctor_BossSchedule_TBL2_clbk BossSchedule_TBLctor_BossSchedule_TBL2_user(nullptr);
        info::BossSchedule_TBLdtor_BossSchedule_TBL6_ptr BossSchedule_TBLdtor_BossSchedule_TBL6_next(nullptr);
        info::BossSchedule_TBLdtor_BossSchedule_TBL6_clbk BossSchedule_TBLdtor_BossSchedule_TBL6_user(nullptr);
        
        void BossSchedule_TBLctor_BossSchedule_TBL2_wrapper(struct BossSchedule_TBL* _this)
        {
           BossSchedule_TBLctor_BossSchedule_TBL2_user(_this, BossSchedule_TBLctor_BossSchedule_TBL2_next);
        };
        void BossSchedule_TBLdtor_BossSchedule_TBL6_wrapper(struct BossSchedule_TBL* _this)
        {
           BossSchedule_TBLdtor_BossSchedule_TBL6_user(_this, BossSchedule_TBLdtor_BossSchedule_TBL6_next);
        };
        
        hook_record BossSchedule_TBL_functions[] = {
        {   (LPVOID)0x14041b790L,
            (LPVOID *)&BossSchedule_TBLctor_BossSchedule_TBL2_user,
            (LPVOID *)&BossSchedule_TBLctor_BossSchedule_TBL2_next,
            (LPVOID)cast_pointer_function(BossSchedule_TBLctor_BossSchedule_TBL2_wrapper),
            (LPVOID)cast_pointer_function((void(BossSchedule_TBL::*)())&BossSchedule_TBL::ctor_BossSchedule_TBL) },
        {   (LPVOID)0x14041b2b0L,
            (LPVOID *)&BossSchedule_TBLdtor_BossSchedule_TBL6_user,
            (LPVOID *)&BossSchedule_TBLdtor_BossSchedule_TBL6_next,
            (LPVOID)cast_pointer_function(BossSchedule_TBLdtor_BossSchedule_TBL6_wrapper),
            (LPVOID)cast_pointer_function((void(BossSchedule_TBL::*)())&BossSchedule_TBL::dtor_BossSchedule_TBL) },
        
        };
        
    }; // end namespace detail
END_ATF_NAMESPACE
