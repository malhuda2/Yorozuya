// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "_character_db_load_info.hpp"


START_ATF_NAMESPACE
    namespace detail
    {
        info::_character_db_loadctor__character_db_load2_ptr _character_db_loadctor__character_db_load2_next(nullptr);
        info::_character_db_loadctor__character_db_load2_clbk _character_db_loadctor__character_db_load2_user(nullptr);
        
        void _character_db_loadctor__character_db_load2_wrapper(struct _character_db_load* _this)
        {
           _character_db_loadctor__character_db_load2_user(_this, _character_db_loadctor__character_db_load2_next);
        };
        
        hook_record _character_db_load_functions[] = {
        {   (LPVOID)0x14010e010L,
            (LPVOID *)&_character_db_loadctor__character_db_load2_user,
            (LPVOID *)&_character_db_loadctor__character_db_load2_next,
            (LPVOID)cast_pointer_function(_character_db_loadctor__character_db_load2_wrapper),
            (LPVOID)cast_pointer_function((void(_character_db_load::*)())&_character_db_load::ctor__character_db_load) },
        
        };
        
    }; // end namespace detail
END_ATF_NAMESPACE
