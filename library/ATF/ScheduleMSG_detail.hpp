// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "ScheduleMSG_info.hpp"


START_ATF_NAMESPACE
    namespace detail
    {
        info::ScheduleMSGInit2_ptr ScheduleMSGInit2_next(nullptr);
        info::ScheduleMSGInit2_clbk ScheduleMSGInit2_user(nullptr);
        info::ScheduleMSGctor_ScheduleMSG4_ptr ScheduleMSGctor_ScheduleMSG4_next(nullptr);
        info::ScheduleMSGctor_ScheduleMSG4_clbk ScheduleMSGctor_ScheduleMSG4_user(nullptr);
        
        void ScheduleMSGInit2_wrapper(struct ScheduleMSG* _this)
        {
           ScheduleMSGInit2_user(_this, ScheduleMSGInit2_next);
        };
        void ScheduleMSGctor_ScheduleMSG4_wrapper(struct ScheduleMSG* _this)
        {
           ScheduleMSGctor_ScheduleMSG4_user(_this, ScheduleMSGctor_ScheduleMSG4_next);
        };
        
        hook_record ScheduleMSG_functions[] = {
        {   (LPVOID)0x14041b8b0L,
            (LPVOID *)&ScheduleMSGInit2_user,
            (LPVOID *)&ScheduleMSGInit2_next,
            (LPVOID)cast_pointer_function(ScheduleMSGInit2_wrapper),
            (LPVOID)cast_pointer_function((void(ScheduleMSG::*)())&ScheduleMSG::Init) },
        {   (LPVOID)0x14041ec70L,
            (LPVOID *)&ScheduleMSGctor_ScheduleMSG4_user,
            (LPVOID *)&ScheduleMSGctor_ScheduleMSG4_next,
            (LPVOID)cast_pointer_function(ScheduleMSGctor_ScheduleMSG4_wrapper),
            (LPVOID)cast_pointer_function((void(ScheduleMSG::*)())&ScheduleMSG::ctor_ScheduleMSG) },
        
        };
        
    }; // end namespace detail
END_ATF_NAMESPACE
