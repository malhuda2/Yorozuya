// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "_attack_siege_result_zocl_info.hpp"


START_ATF_NAMESPACE
    namespace detail
    {
        info::_attack_siege_result_zoclctor__attack_siege_result_zocl2_ptr _attack_siege_result_zoclctor__attack_siege_result_zocl2_next(nullptr);
        info::_attack_siege_result_zoclctor__attack_siege_result_zocl2_clbk _attack_siege_result_zoclctor__attack_siege_result_zocl2_user(nullptr);
        info::_attack_siege_result_zoclsize4_ptr _attack_siege_result_zoclsize4_next(nullptr);
        info::_attack_siege_result_zoclsize4_clbk _attack_siege_result_zoclsize4_user(nullptr);
        
        void _attack_siege_result_zoclctor__attack_siege_result_zocl2_wrapper(struct _attack_siege_result_zocl* _this)
        {
           _attack_siege_result_zoclctor__attack_siege_result_zocl2_user(_this, _attack_siege_result_zoclctor__attack_siege_result_zocl2_next);
        };
        int _attack_siege_result_zoclsize4_wrapper(struct _attack_siege_result_zocl* _this)
        {
           return _attack_siege_result_zoclsize4_user(_this, _attack_siege_result_zoclsize4_next);
        };
        
        hook_record _attack_siege_result_zocl_functions[] = {
        {   (LPVOID)0x1400eefd0L,
            (LPVOID *)&_attack_siege_result_zoclctor__attack_siege_result_zocl2_user,
            (LPVOID *)&_attack_siege_result_zoclctor__attack_siege_result_zocl2_next,
            (LPVOID)cast_pointer_function(_attack_siege_result_zoclctor__attack_siege_result_zocl2_wrapper),
            (LPVOID)cast_pointer_function((void(_attack_siege_result_zocl::*)())&_attack_siege_result_zocl::ctor__attack_siege_result_zocl) },
        {   (LPVOID)0x1400eeff0L,
            (LPVOID *)&_attack_siege_result_zoclsize4_user,
            (LPVOID *)&_attack_siege_result_zoclsize4_next,
            (LPVOID)cast_pointer_function(_attack_siege_result_zoclsize4_wrapper),
            (LPVOID)cast_pointer_function((int(_attack_siege_result_zocl::*)())&_attack_siege_result_zocl::size) },
        
        };
        
    }; // end namespace detail
END_ATF_NAMESPACE
