// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "_cash_discount_ini__info.hpp"


START_ATF_NAMESPACE
    namespace detail
    {
        info::_cash_discount_ini_ctor__cash_discount_ini_2_ptr _cash_discount_ini_ctor__cash_discount_ini_2_next(nullptr);
        info::_cash_discount_ini_ctor__cash_discount_ini_2_clbk _cash_discount_ini_ctor__cash_discount_ini_2_user(nullptr);
        
        void _cash_discount_ini_ctor__cash_discount_ini_2_wrapper(struct _cash_discount_ini_* _this)
        {
           _cash_discount_ini_ctor__cash_discount_ini_2_user(_this, _cash_discount_ini_ctor__cash_discount_ini_2_next);
        };
        
        hook_record _cash_discount_ini__functions[] = {
        {   (LPVOID)0x1403044f0L,
            (LPVOID *)&_cash_discount_ini_ctor__cash_discount_ini_2_user,
            (LPVOID *)&_cash_discount_ini_ctor__cash_discount_ini_2_next,
            (LPVOID)cast_pointer_function(_cash_discount_ini_ctor__cash_discount_ini_2_wrapper),
            (LPVOID)cast_pointer_function((void(_cash_discount_ini_::*)())&_cash_discount_ini_::ctor__cash_discount_ini_) },
        
        };
        
    }; // end namespace detail
END_ATF_NAMESPACE
