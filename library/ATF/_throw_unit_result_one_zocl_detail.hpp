// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "_throw_unit_result_one_zocl_info.hpp"


START_ATF_NAMESPACE
    namespace detail
    {
        info::_throw_unit_result_one_zoclctor__throw_unit_result_one_zocl2_ptr _throw_unit_result_one_zoclctor__throw_unit_result_one_zocl2_next(nullptr);
        info::_throw_unit_result_one_zoclctor__throw_unit_result_one_zocl2_clbk _throw_unit_result_one_zoclctor__throw_unit_result_one_zocl2_user(nullptr);
        
        void _throw_unit_result_one_zoclctor__throw_unit_result_one_zocl2_wrapper(struct _throw_unit_result_one_zocl* _this)
        {
           _throw_unit_result_one_zoclctor__throw_unit_result_one_zocl2_user(_this, _throw_unit_result_one_zoclctor__throw_unit_result_one_zocl2_next);
        };
        
        hook_record _throw_unit_result_one_zocl_functions[] = {
        {   (LPVOID)0x1400efdb0L,
            (LPVOID *)&_throw_unit_result_one_zoclctor__throw_unit_result_one_zocl2_user,
            (LPVOID *)&_throw_unit_result_one_zoclctor__throw_unit_result_one_zocl2_next,
            (LPVOID)cast_pointer_function(_throw_unit_result_one_zoclctor__throw_unit_result_one_zocl2_wrapper),
            (LPVOID)cast_pointer_function((void(_throw_unit_result_one_zocl::*)())&_throw_unit_result_one_zocl::ctor__throw_unit_result_one_zocl) },
        
        };
        
    }; // end namespace detail
END_ATF_NAMESPACE
