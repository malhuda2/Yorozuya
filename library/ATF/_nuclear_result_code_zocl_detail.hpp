// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "_nuclear_result_code_zocl_info.hpp"


START_ATF_NAMESPACE
    namespace detail
    {
        info::_nuclear_result_code_zoclctor__nuclear_result_code_zocl2_ptr _nuclear_result_code_zoclctor__nuclear_result_code_zocl2_next(nullptr);
        info::_nuclear_result_code_zoclctor__nuclear_result_code_zocl2_clbk _nuclear_result_code_zoclctor__nuclear_result_code_zocl2_user(nullptr);
        info::_nuclear_result_code_zoclsize4_ptr _nuclear_result_code_zoclsize4_next(nullptr);
        info::_nuclear_result_code_zoclsize4_clbk _nuclear_result_code_zoclsize4_user(nullptr);
        
        void _nuclear_result_code_zoclctor__nuclear_result_code_zocl2_wrapper(struct _nuclear_result_code_zocl* _this)
        {
           _nuclear_result_code_zoclctor__nuclear_result_code_zocl2_user(_this, _nuclear_result_code_zoclctor__nuclear_result_code_zocl2_next);
        };
        int _nuclear_result_code_zoclsize4_wrapper(struct _nuclear_result_code_zocl* _this)
        {
           return _nuclear_result_code_zoclsize4_user(_this, _nuclear_result_code_zoclsize4_next);
        };
        
        hook_record _nuclear_result_code_zocl_functions[] = {
        {   (LPVOID)0x14013e340L,
            (LPVOID *)&_nuclear_result_code_zoclctor__nuclear_result_code_zocl2_user,
            (LPVOID *)&_nuclear_result_code_zoclctor__nuclear_result_code_zocl2_next,
            (LPVOID)cast_pointer_function(_nuclear_result_code_zoclctor__nuclear_result_code_zocl2_wrapper),
            (LPVOID)cast_pointer_function((void(_nuclear_result_code_zocl::*)())&_nuclear_result_code_zocl::ctor__nuclear_result_code_zocl) },
        {   (LPVOID)0x14013e390L,
            (LPVOID *)&_nuclear_result_code_zoclsize4_user,
            (LPVOID *)&_nuclear_result_code_zoclsize4_next,
            (LPVOID)cast_pointer_function(_nuclear_result_code_zoclsize4_wrapper),
            (LPVOID)cast_pointer_function((int(_nuclear_result_code_zocl::*)())&_nuclear_result_code_zocl::size) },
        
        };
        
    }; // end namespace detail
END_ATF_NAMESPACE
