// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "_check_query_info.hpp"


START_ATF_NAMESPACE
    namespace detail
    {
        info::_check_querysize2_ptr _check_querysize2_next(nullptr);
        info::_check_querysize2_clbk _check_querysize2_user(nullptr);
        
        int _check_querysize2_wrapper(struct _check_query* _this)
        {
           return _check_querysize2_user(_this, _check_querysize2_next);
        };
        
        hook_record _check_query_functions[] = {
        {   (LPVOID)0x14047db10L,
            (LPVOID *)&_check_querysize2_user,
            (LPVOID *)&_check_querysize2_next,
            (LPVOID)cast_pointer_function(_check_querysize2_wrapper),
            (LPVOID)cast_pointer_function((int(_check_query::*)())&_check_query::size) },
        
        };
        
    }; // end namespace detail
END_ATF_NAMESPACE
