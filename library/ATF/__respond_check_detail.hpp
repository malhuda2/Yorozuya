// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "__respond_check_info.hpp"


START_ATF_NAMESPACE
    namespace detail
    {
        info::__respond_checkctor___respond_check2_ptr __respond_checkctor___respond_check2_next(nullptr);
        info::__respond_checkctor___respond_check2_clbk __respond_checkctor___respond_check2_user(nullptr);
        info::__respond_checkdtor___respond_check6_ptr __respond_checkdtor___respond_check6_next(nullptr);
        info::__respond_checkdtor___respond_check6_clbk __respond_checkdtor___respond_check6_user(nullptr);
        
        void __respond_checkctor___respond_check2_wrapper(struct __respond_check* _this)
        {
           __respond_checkctor___respond_check2_user(_this, __respond_checkctor___respond_check2_next);
        };
        void __respond_checkdtor___respond_check6_wrapper(struct __respond_check* _this)
        {
           __respond_checkdtor___respond_check6_user(_this, __respond_checkdtor___respond_check6_next);
        };
        
        hook_record __respond_check_functions[] = {
        {   (LPVOID)0x14027a5a0L,
            (LPVOID *)&__respond_checkctor___respond_check2_user,
            (LPVOID *)&__respond_checkctor___respond_check2_next,
            (LPVOID)cast_pointer_function(__respond_checkctor___respond_check2_wrapper),
            (LPVOID)cast_pointer_function((void(__respond_check::*)())&__respond_check::ctor___respond_check) },
        {   (LPVOID)0x140273060L,
            (LPVOID *)&__respond_checkdtor___respond_check6_user,
            (LPVOID *)&__respond_checkdtor___respond_check6_next,
            (LPVOID)cast_pointer_function(__respond_checkdtor___respond_check6_wrapper),
            (LPVOID)cast_pointer_function((void(__respond_check::*)())&__respond_check::dtor___respond_check) },
        
        };
        
    }; // end namespace detail
END_ATF_NAMESPACE
