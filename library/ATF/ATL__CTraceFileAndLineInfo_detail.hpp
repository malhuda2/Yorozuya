// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "ATL__CTraceFileAndLineInfo_info.hpp"


START_ATF_NAMESPACE
    namespace ATL
    {
        namespace detail
        {
            info::ATL__CTraceFileAndLineInfoctor_CTraceFileAndLineInfo2_ptr ATL__CTraceFileAndLineInfoctor_CTraceFileAndLineInfo2_next(nullptr);
            info::ATL__CTraceFileAndLineInfoctor_CTraceFileAndLineInfo2_clbk ATL__CTraceFileAndLineInfoctor_CTraceFileAndLineInfo2_user(nullptr);
            
            void ATL__CTraceFileAndLineInfoctor_CTraceFileAndLineInfo2_wrapper(struct ATL::CTraceFileAndLineInfo* _this, char* pszFileName, int nLineNo)
            {
               ATL__CTraceFileAndLineInfoctor_CTraceFileAndLineInfo2_user(_this, pszFileName, nLineNo, ATL__CTraceFileAndLineInfoctor_CTraceFileAndLineInfo2_next);
            };
            
            hook_record CTraceFileAndLineInfo_functions[] = {
            {   (LPVOID)0x140024ff0L,
                (LPVOID *)&ATL__CTraceFileAndLineInfoctor_CTraceFileAndLineInfo2_user,
                (LPVOID *)&ATL__CTraceFileAndLineInfoctor_CTraceFileAndLineInfo2_next,
                (LPVOID)cast_pointer_function(ATL__CTraceFileAndLineInfoctor_CTraceFileAndLineInfo2_wrapper),
                (LPVOID)cast_pointer_function((void(ATL::CTraceFileAndLineInfo::*)(char*, int))&ATL::CTraceFileAndLineInfo::ctor_CTraceFileAndLineInfo) },
            
            };
            
        }; // end namespace detail
    }; // end namespace ATL
END_ATF_NAMESPACE
