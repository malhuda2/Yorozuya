// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "_attack_keeper_inform_zocl_info.hpp"


START_ATF_NAMESPACE
    namespace detail
    {
        info::_attack_keeper_inform_zoclctor__attack_keeper_inform_zocl2_ptr _attack_keeper_inform_zoclctor__attack_keeper_inform_zocl2_next(nullptr);
        info::_attack_keeper_inform_zoclctor__attack_keeper_inform_zocl2_clbk _attack_keeper_inform_zoclctor__attack_keeper_inform_zocl2_user(nullptr);
        info::_attack_keeper_inform_zoclsize4_ptr _attack_keeper_inform_zoclsize4_next(nullptr);
        info::_attack_keeper_inform_zoclsize4_clbk _attack_keeper_inform_zoclsize4_user(nullptr);
        
        void _attack_keeper_inform_zoclctor__attack_keeper_inform_zocl2_wrapper(struct _attack_keeper_inform_zocl* _this)
        {
           _attack_keeper_inform_zoclctor__attack_keeper_inform_zocl2_user(_this, _attack_keeper_inform_zoclctor__attack_keeper_inform_zocl2_next);
        };
        int _attack_keeper_inform_zoclsize4_wrapper(struct _attack_keeper_inform_zocl* _this)
        {
           return _attack_keeper_inform_zoclsize4_user(_this, _attack_keeper_inform_zoclsize4_next);
        };
        
        hook_record _attack_keeper_inform_zocl_functions[] = {
        {   (LPVOID)0x140136c00L,
            (LPVOID *)&_attack_keeper_inform_zoclctor__attack_keeper_inform_zocl2_user,
            (LPVOID *)&_attack_keeper_inform_zoclctor__attack_keeper_inform_zocl2_next,
            (LPVOID)cast_pointer_function(_attack_keeper_inform_zoclctor__attack_keeper_inform_zocl2_wrapper),
            (LPVOID)cast_pointer_function((void(_attack_keeper_inform_zocl::*)())&_attack_keeper_inform_zocl::ctor__attack_keeper_inform_zocl) },
        {   (LPVOID)0x140136c20L,
            (LPVOID *)&_attack_keeper_inform_zoclsize4_user,
            (LPVOID *)&_attack_keeper_inform_zoclsize4_next,
            (LPVOID)cast_pointer_function(_attack_keeper_inform_zoclsize4_wrapper),
            (LPVOID)cast_pointer_function((int(_attack_keeper_inform_zocl::*)())&_attack_keeper_inform_zocl::size) },
        
        };
        
    }; // end namespace detail
END_ATF_NAMESPACE
