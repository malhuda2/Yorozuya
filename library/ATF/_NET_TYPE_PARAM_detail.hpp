// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "_NET_TYPE_PARAM_info.hpp"


START_ATF_NAMESPACE
    namespace detail
    {
        info::_NET_TYPE_PARAMctor__NET_TYPE_PARAM2_ptr _NET_TYPE_PARAMctor__NET_TYPE_PARAM2_next(nullptr);
        info::_NET_TYPE_PARAMctor__NET_TYPE_PARAM2_clbk _NET_TYPE_PARAMctor__NET_TYPE_PARAM2_user(nullptr);
        
        void _NET_TYPE_PARAMctor__NET_TYPE_PARAM2_wrapper(struct _NET_TYPE_PARAM* _this)
        {
           _NET_TYPE_PARAMctor__NET_TYPE_PARAM2_user(_this, _NET_TYPE_PARAMctor__NET_TYPE_PARAM2_next);
        };
        
        hook_record _NET_TYPE_PARAM_functions[] = {
        {   (LPVOID)0x140204be0L,
            (LPVOID *)&_NET_TYPE_PARAMctor__NET_TYPE_PARAM2_user,
            (LPVOID *)&_NET_TYPE_PARAMctor__NET_TYPE_PARAM2_next,
            (LPVOID)cast_pointer_function(_NET_TYPE_PARAMctor__NET_TYPE_PARAM2_wrapper),
            (LPVOID)cast_pointer_function((void(_NET_TYPE_PARAM::*)())&_NET_TYPE_PARAM::ctor__NET_TYPE_PARAM) },
        
        };
        
    }; // end namespace detail
END_ATF_NAMESPACE
