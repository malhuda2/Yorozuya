// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "CAtlTraceModule_info.hpp"


START_ATF_NAMESPACE
    namespace detail
    {
        info::CAtlTraceModulector_CAtlTraceModule1_ptr CAtlTraceModulector_CAtlTraceModule1_next(nullptr);
        info::CAtlTraceModulector_CAtlTraceModule1_clbk CAtlTraceModulector_CAtlTraceModule1_user(nullptr);
        info::CAtlTraceModuleCrtDbgReport2_ptr CAtlTraceModuleCrtDbgReport2_next(nullptr);
        info::CAtlTraceModuleCrtDbgReport2_clbk CAtlTraceModuleCrtDbgReport2_user(nullptr);
        info::CAtlTraceModuleCrtDbgReport3_ptr CAtlTraceModuleCrtDbgReport3_next(nullptr);
        info::CAtlTraceModuleCrtDbgReport3_clbk CAtlTraceModuleCrtDbgReport3_user(nullptr);
        
        void CAtlTraceModulector_CAtlTraceModule1_wrapper(struct CAtlTraceModule* _this)
        {
           CAtlTraceModulector_CAtlTraceModule1_user(_this, CAtlTraceModulector_CAtlTraceModule1_next);
        };
        void CAtlTraceModuleCrtDbgReport2_wrapper(struct CAtlTraceModule* _this, int (WINAPIV* pfnCrtDbgReport)(int, char*, int, char*, char*))
        {
           CAtlTraceModuleCrtDbgReport2_user(_this, pfnCrtDbgReport, CAtlTraceModuleCrtDbgReport2_next);
        };
		info::CAtlTraceModuleCrtDbgReport3_ret CAtlTraceModuleCrtDbgReport3_wrapper(struct CAtlTraceModule* _this)
        {
           return CAtlTraceModuleCrtDbgReport3_user(_this, CAtlTraceModuleCrtDbgReport3_next);
        };
        
        hook_record CAtlTraceModule_functions[] = {
        {   (LPVOID)0x140676080L,
            (LPVOID *)&CAtlTraceModulector_CAtlTraceModule1_user,
            (LPVOID *)&CAtlTraceModulector_CAtlTraceModule1_next,
            (LPVOID)cast_pointer_function(CAtlTraceModulector_CAtlTraceModule1_wrapper),
            (LPVOID)cast_pointer_function((void(CAtlTraceModule::*)())&CAtlTraceModule::ctor_CAtlTraceModule) },
        {   (LPVOID)0x1406760d0L,
            (LPVOID *)&CAtlTraceModuleCrtDbgReport2_user,
            (LPVOID *)&CAtlTraceModuleCrtDbgReport2_next,
            (LPVOID)cast_pointer_function(CAtlTraceModuleCrtDbgReport2_wrapper),
            (LPVOID)cast_pointer_function((void(CAtlTraceModule::*)(int (WINAPIV*)(int, char*, int, char*, char*)))&CAtlTraceModule::CrtDbgReport) },
        {   (LPVOID)0x140670050L,
            (LPVOID *)&CAtlTraceModuleCrtDbgReport3_user,
            (LPVOID *)&CAtlTraceModuleCrtDbgReport3_next,
            (LPVOID)cast_pointer_function(CAtlTraceModuleCrtDbgReport3_wrapper),
            (LPVOID)cast_pointer_function((info::CAtlTraceModuleCrtDbgReport3_ret(CAtlTraceModule::*)())&CAtlTraceModule::CrtDbgReport) },
        
        };
        
    }; // end namespace detail
END_ATF_NAMESPACE
