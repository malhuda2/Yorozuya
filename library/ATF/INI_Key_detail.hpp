// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "INI_Key_info.hpp"


START_ATF_NAMESPACE
    namespace detail
    {
        info::INI_Keyctor_INI_Key2_ptr INI_Keyctor_INI_Key2_next(nullptr);
        info::INI_Keyctor_INI_Key2_clbk INI_Keyctor_INI_Key2_user(nullptr);
        
        void INI_Keyctor_INI_Key2_wrapper(struct INI_Key* _this)
        {
           INI_Keyctor_INI_Key2_user(_this, INI_Keyctor_INI_Key2_next);
        };
        
        hook_record INI_Key_functions[] = {
        {   (LPVOID)0x1404700b0L,
            (LPVOID *)&INI_Keyctor_INI_Key2_user,
            (LPVOID *)&INI_Keyctor_INI_Key2_next,
            (LPVOID)cast_pointer_function(INI_Keyctor_INI_Key2_wrapper),
            (LPVOID)cast_pointer_function((void(INI_Key::*)())&INI_Key::ctor_INI_Key) },
        
        };
        
    }; // end namespace detail
END_ATF_NAMESPACE
