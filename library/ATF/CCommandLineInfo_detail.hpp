// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "CCommandLineInfo_info.hpp"


START_ATF_NAMESPACE
    namespace detail
    {
        info::CCommandLineInfodtor_CCommandLineInfo1_ptr CCommandLineInfodtor_CCommandLineInfo1_next(nullptr);
        info::CCommandLineInfodtor_CCommandLineInfo1_clbk CCommandLineInfodtor_CCommandLineInfo1_user(nullptr);
        
        int64_t CCommandLineInfodtor_CCommandLineInfo1_wrapper(struct CCommandLineInfo* _this)
        {
           return CCommandLineInfodtor_CCommandLineInfo1_user(_this, CCommandLineInfodtor_CCommandLineInfo1_next);
        };
        
        hook_record CCommandLineInfo_functions[] = {
        {   (LPVOID)0x1404dbffaL,
            (LPVOID *)&CCommandLineInfodtor_CCommandLineInfo1_user,
            (LPVOID *)&CCommandLineInfodtor_CCommandLineInfo1_next,
            (LPVOID)cast_pointer_function(CCommandLineInfodtor_CCommandLineInfo1_wrapper),
            (LPVOID)cast_pointer_function((int64_t(CCommandLineInfo::*)())&CCommandLineInfo::dtor_CCommandLineInfo) },
        
        };
        
    }; // end namespace detail
END_ATF_NAMESPACE
