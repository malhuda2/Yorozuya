// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "__add_time_info.hpp"


START_ATF_NAMESPACE
    namespace detail
    {
        info::__add_timector___add_time2_ptr __add_timector___add_time2_next(nullptr);
        info::__add_timector___add_time2_clbk __add_timector___add_time2_user(nullptr);
        
        void __add_timector___add_time2_wrapper(struct __add_time* _this)
        {
           __add_timector___add_time2_user(_this, __add_timector___add_time2_next);
        };
        
        hook_record __add_time_functions[] = {
        {   (LPVOID)0x14027a620L,
            (LPVOID *)&__add_timector___add_time2_user,
            (LPVOID *)&__add_timector___add_time2_next,
            (LPVOID)cast_pointer_function(__add_timector___add_time2_wrapper),
            (LPVOID)cast_pointer_function((void(__add_time::*)())&__add_time::ctor___add_time) },
        
        };
        
    }; // end namespace detail
END_ATF_NAMESPACE
