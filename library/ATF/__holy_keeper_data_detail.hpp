// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "__holy_keeper_data_info.hpp"


START_ATF_NAMESPACE
    namespace detail
    {
        info::__holy_keeper_datactor___holy_keeper_data2_ptr __holy_keeper_datactor___holy_keeper_data2_next(nullptr);
        info::__holy_keeper_datactor___holy_keeper_data2_clbk __holy_keeper_datactor___holy_keeper_data2_user(nullptr);
        
        void __holy_keeper_datactor___holy_keeper_data2_wrapper(struct __holy_keeper_data* _this)
        {
           __holy_keeper_datactor___holy_keeper_data2_user(_this, __holy_keeper_datactor___holy_keeper_data2_next);
        };
        
        hook_record __holy_keeper_data_functions[] = {
        {   (LPVOID)0x140284010L,
            (LPVOID *)&__holy_keeper_datactor___holy_keeper_data2_user,
            (LPVOID *)&__holy_keeper_datactor___holy_keeper_data2_next,
            (LPVOID)cast_pointer_function(__holy_keeper_datactor___holy_keeper_data2_wrapper),
            (LPVOID)cast_pointer_function((void(__holy_keeper_data::*)())&__holy_keeper_data::ctor___holy_keeper_data) },
        
        };
        
    }; // end namespace detail
END_ATF_NAMESPACE
