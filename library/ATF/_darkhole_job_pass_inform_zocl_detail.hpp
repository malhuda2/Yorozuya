// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "_darkhole_job_pass_inform_zocl_info.hpp"


START_ATF_NAMESPACE
    namespace detail
    {
        info::_darkhole_job_pass_inform_zoclsize2_ptr _darkhole_job_pass_inform_zoclsize2_next(nullptr);
        info::_darkhole_job_pass_inform_zoclsize2_clbk _darkhole_job_pass_inform_zoclsize2_user(nullptr);
        
        int _darkhole_job_pass_inform_zoclsize2_wrapper(struct _darkhole_job_pass_inform_zocl* _this)
        {
           return _darkhole_job_pass_inform_zoclsize2_user(_this, _darkhole_job_pass_inform_zoclsize2_next);
        };
        
        hook_record _darkhole_job_pass_inform_zocl_functions[] = {
        {   (LPVOID)0x14026f840L,
            (LPVOID *)&_darkhole_job_pass_inform_zoclsize2_user,
            (LPVOID *)&_darkhole_job_pass_inform_zoclsize2_next,
            (LPVOID)cast_pointer_function(_darkhole_job_pass_inform_zoclsize2_wrapper),
            (LPVOID)cast_pointer_function((int(_darkhole_job_pass_inform_zocl::*)())&_darkhole_job_pass_inform_zocl::size) },
        
        };
        
    }; // end namespace detail
END_ATF_NAMESPACE
