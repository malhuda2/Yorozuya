// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "_notify_local_time_result_zocl_info.hpp"


START_ATF_NAMESPACE
    namespace detail
    {
        info::_notify_local_time_result_zoclsize2_ptr _notify_local_time_result_zoclsize2_next(nullptr);
        info::_notify_local_time_result_zoclsize2_clbk _notify_local_time_result_zoclsize2_user(nullptr);
        
        int _notify_local_time_result_zoclsize2_wrapper(struct _notify_local_time_result_zocl* _this)
        {
           return _notify_local_time_result_zoclsize2_user(_this, _notify_local_time_result_zoclsize2_next);
        };
        
        hook_record _notify_local_time_result_zocl_functions[] = {
        {   (LPVOID)0x1401d24b0L,
            (LPVOID *)&_notify_local_time_result_zoclsize2_user,
            (LPVOID *)&_notify_local_time_result_zoclsize2_next,
            (LPVOID)cast_pointer_function(_notify_local_time_result_zoclsize2_wrapper),
            (LPVOID)cast_pointer_function((int(_notify_local_time_result_zocl::*)())&_notify_local_time_result_zocl::size) },
        
        };
        
    }; // end namespace detail
END_ATF_NAMESPACE
