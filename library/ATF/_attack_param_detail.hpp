// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "_attack_param_info.hpp"


START_ATF_NAMESPACE
    namespace detail
    {
        info::_attack_paramctor__attack_param2_ptr _attack_paramctor__attack_param2_next(nullptr);
        info::_attack_paramctor__attack_param2_clbk _attack_paramctor__attack_param2_user(nullptr);
        
        void _attack_paramctor__attack_param2_wrapper(struct _attack_param* _this)
        {
           _attack_paramctor__attack_param2_user(_this, _attack_paramctor__attack_param2_next);
        };
        
        hook_record _attack_param_functions[] = {
        {   (LPVOID)0x14008e4a0L,
            (LPVOID *)&_attack_paramctor__attack_param2_user,
            (LPVOID *)&_attack_paramctor__attack_param2_next,
            (LPVOID)cast_pointer_function(_attack_paramctor__attack_param2_wrapper),
            (LPVOID)cast_pointer_function((void(_attack_param::*)())&_attack_param::ctor__attack_param) },
        
        };
        
    }; // end namespace detail
END_ATF_NAMESPACE
