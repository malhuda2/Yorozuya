// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "_bag_db_load_info.hpp"


START_ATF_NAMESPACE
    namespace detail
    {
        info::_bag_db_loadctor__bag_db_load2_ptr _bag_db_loadctor__bag_db_load2_next(nullptr);
        info::_bag_db_loadctor__bag_db_load2_clbk _bag_db_loadctor__bag_db_load2_user(nullptr);
        
        void _bag_db_loadctor__bag_db_load2_wrapper(struct _bag_db_load* _this)
        {
           _bag_db_loadctor__bag_db_load2_user(_this, _bag_db_loadctor__bag_db_load2_next);
        };
        
        hook_record _bag_db_load_functions[] = {
        {   (LPVOID)0x14010da90L,
            (LPVOID *)&_bag_db_loadctor__bag_db_load2_user,
            (LPVOID *)&_bag_db_loadctor__bag_db_load2_next,
            (LPVOID)cast_pointer_function(_bag_db_loadctor__bag_db_load2_wrapper),
            (LPVOID)cast_pointer_function((void(_bag_db_load::*)())&_bag_db_load::ctor__bag_db_load) },
        
        };
        
    }; // end namespace detail
END_ATF_NAMESPACE
