// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "CExtDummy_info.hpp"


START_ATF_NAMESPACE
    namespace detail
    {
        info::CExtDummyDrawAllDummyBBox1_ptr CExtDummyDrawAllDummyBBox1_next(nullptr);
        info::CExtDummyDrawAllDummyBBox1_clbk CExtDummyDrawAllDummyBBox1_user(nullptr);
        info::CExtDummyDrawDummyBBox2_ptr CExtDummyDrawDummyBBox2_next(nullptr);
        info::CExtDummyDrawDummyBBox2_clbk CExtDummyDrawDummyBBox2_user(nullptr);
        info::CExtDummyGetDummy3_ptr CExtDummyGetDummy3_next(nullptr);
        info::CExtDummyGetDummy3_clbk CExtDummyGetDummy3_user(nullptr);
        info::CExtDummyGetDummyList4_ptr CExtDummyGetDummyList4_next(nullptr);
        info::CExtDummyGetDummyList4_clbk CExtDummyGetDummyList4_user(nullptr);
        info::CExtDummyGetLocalFromWorld5_ptr CExtDummyGetLocalFromWorld5_next(nullptr);
        info::CExtDummyGetLocalFromWorld5_clbk CExtDummyGetLocalFromWorld5_user(nullptr);
        info::CExtDummyGetTotalNum7_ptr CExtDummyGetTotalNum7_next(nullptr);
        info::CExtDummyGetTotalNum7_clbk CExtDummyGetTotalNum7_user(nullptr);
        info::CExtDummyGetWorldFromLocal8_ptr CExtDummyGetWorldFromLocal8_next(nullptr);
        info::CExtDummyGetWorldFromLocal8_clbk CExtDummyGetWorldFromLocal8_user(nullptr);
        info::CExtDummyIsInBBox9_ptr CExtDummyIsInBBox9_next(nullptr);
        info::CExtDummyIsInBBox9_clbk CExtDummyIsInBBox9_user(nullptr);
        info::CExtDummyLoadExtDummy10_ptr CExtDummyLoadExtDummy10_next(nullptr);
        info::CExtDummyLoadExtDummy10_clbk CExtDummyLoadExtDummy10_user(nullptr);
        info::CExtDummyReleaseExtDummy11_ptr CExtDummyReleaseExtDummy11_next(nullptr);
        info::CExtDummyReleaseExtDummy11_clbk CExtDummyReleaseExtDummy11_user(nullptr);
        info::CExtDummydtor_CExtDummy14_ptr CExtDummydtor_CExtDummy14_next(nullptr);
        info::CExtDummydtor_CExtDummy14_clbk CExtDummydtor_CExtDummy14_user(nullptr);
        
        void CExtDummyDrawAllDummyBBox1_wrapper(struct CExtDummy* _this)
        {
           CExtDummyDrawAllDummyBBox1_user(_this, CExtDummyDrawAllDummyBBox1_next);
        };
        void CExtDummyDrawDummyBBox2_wrapper(struct CExtDummy* _this, uint32_t arg_0)
        {
           CExtDummyDrawDummyBBox2_user(_this, arg_0, CExtDummyDrawDummyBBox2_next);
        };
        struct _EXT_DUMMY* CExtDummyGetDummy3_wrapper(struct CExtDummy* _this, uint32_t arg_0)
        {
           return CExtDummyGetDummy3_user(_this, arg_0, CExtDummyGetDummy3_next);
        };
        void CExtDummyGetDummyList4_wrapper(struct CExtDummy* _this, uint32_t arg_0, uint32_t* arg_1, uint32_t* arg_2)
        {
           CExtDummyGetDummyList4_user(_this, arg_0, arg_1, arg_2, CExtDummyGetDummyList4_next);
        };
        int CExtDummyGetLocalFromWorld5_wrapper(struct CExtDummy* _this, float** arg_0, uint32_t arg_1, float* arg_2)
        {
           return CExtDummyGetLocalFromWorld5_user(_this, arg_0, arg_1, arg_2, CExtDummyGetLocalFromWorld5_next);
        };
        unsigned int CExtDummyGetTotalNum7_wrapper(struct CExtDummy* _this)
        {
           return CExtDummyGetTotalNum7_user(_this, CExtDummyGetTotalNum7_next);
        };
        int CExtDummyGetWorldFromLocal8_wrapper(struct CExtDummy* _this, float** arg_0, uint32_t arg_1, float* arg_2)
        {
           return CExtDummyGetWorldFromLocal8_user(_this, arg_0, arg_1, arg_2, CExtDummyGetWorldFromLocal8_next);
        };
        int CExtDummyIsInBBox9_wrapper(struct CExtDummy* _this, uint32_t arg_0, float* arg_1)
        {
           return CExtDummyIsInBBox9_user(_this, arg_0, arg_1, CExtDummyIsInBBox9_next);
        };
        int CExtDummyLoadExtDummy10_wrapper(struct CExtDummy* _this, char* arg_0)
        {
           return CExtDummyLoadExtDummy10_user(_this, arg_0, CExtDummyLoadExtDummy10_next);
        };
        void CExtDummyReleaseExtDummy11_wrapper(struct CExtDummy* _this)
        {
           CExtDummyReleaseExtDummy11_user(_this, CExtDummyReleaseExtDummy11_next);
        };
        int64_t CExtDummydtor_CExtDummy14_wrapper(struct CExtDummy* _this)
        {
           return CExtDummydtor_CExtDummy14_user(_this, CExtDummydtor_CExtDummy14_next);
        };
        
        hook_record CExtDummy_functions[] = {
        {   (LPVOID)0x1404dfb10L,
            (LPVOID *)&CExtDummyDrawAllDummyBBox1_user,
            (LPVOID *)&CExtDummyDrawAllDummyBBox1_next,
            (LPVOID)cast_pointer_function(CExtDummyDrawAllDummyBBox1_wrapper),
            (LPVOID)cast_pointer_function((void(CExtDummy::*)())&CExtDummy::DrawAllDummyBBox) },
        {   (LPVOID)0x1404df820L,
            (LPVOID *)&CExtDummyDrawDummyBBox2_user,
            (LPVOID *)&CExtDummyDrawDummyBBox2_next,
            (LPVOID)cast_pointer_function(CExtDummyDrawDummyBBox2_wrapper),
            (LPVOID)cast_pointer_function((void(CExtDummy::*)(uint32_t))&CExtDummy::DrawDummyBBox) },
        {   (LPVOID)0x1404df080L,
            (LPVOID *)&CExtDummyGetDummy3_user,
            (LPVOID *)&CExtDummyGetDummy3_next,
            (LPVOID)cast_pointer_function(CExtDummyGetDummy3_wrapper),
            (LPVOID)cast_pointer_function((struct _EXT_DUMMY*(CExtDummy::*)(uint32_t))&CExtDummy::GetDummy) },
        {   (LPVOID)0x1404df1d0L,
            (LPVOID *)&CExtDummyGetDummyList4_user,
            (LPVOID *)&CExtDummyGetDummyList4_next,
            (LPVOID)cast_pointer_function(CExtDummyGetDummyList4_wrapper),
            (LPVOID)cast_pointer_function((void(CExtDummy::*)(uint32_t, uint32_t*, uint32_t*))&CExtDummy::GetDummyList) },
        {   (LPVOID)0x1404df180L,
            (LPVOID *)&CExtDummyGetLocalFromWorld5_user,
            (LPVOID *)&CExtDummyGetLocalFromWorld5_next,
            (LPVOID)cast_pointer_function(CExtDummyGetLocalFromWorld5_wrapper),
            (LPVOID)cast_pointer_function((int(CExtDummy::*)(float**, uint32_t, float*))&CExtDummy::GetLocalFromWorld) },
        {   (LPVOID)0x140189e40L,
            (LPVOID *)&CExtDummyGetTotalNum7_user,
            (LPVOID *)&CExtDummyGetTotalNum7_next,
            (LPVOID)cast_pointer_function(CExtDummyGetTotalNum7_wrapper),
            (LPVOID)cast_pointer_function((unsigned int(CExtDummy::*)())&CExtDummy::GetTotalNum) },
        {   (LPVOID)0x1404df130L,
            (LPVOID *)&CExtDummyGetWorldFromLocal8_user,
            (LPVOID *)&CExtDummyGetWorldFromLocal8_next,
            (LPVOID)cast_pointer_function(CExtDummyGetWorldFromLocal8_wrapper),
            (LPVOID)cast_pointer_function((int(CExtDummy::*)(float**, uint32_t, float*))&CExtDummy::GetWorldFromLocal) },
        {   (LPVOID)0x1404df0b0L,
            (LPVOID *)&CExtDummyIsInBBox9_user,
            (LPVOID *)&CExtDummyIsInBBox9_next,
            (LPVOID)cast_pointer_function(CExtDummyIsInBBox9_wrapper),
            (LPVOID)cast_pointer_function((int(CExtDummy::*)(uint32_t, float*))&CExtDummy::IsInBBox) },
        {   (LPVOID)0x1404df220L,
            (LPVOID *)&CExtDummyLoadExtDummy10_user,
            (LPVOID *)&CExtDummyLoadExtDummy10_next,
            (LPVOID)cast_pointer_function(CExtDummyLoadExtDummy10_wrapper),
            (LPVOID)cast_pointer_function((int(CExtDummy::*)(char*))&CExtDummy::LoadExtDummy) },
        {   (LPVOID)0x1404df7f0L,
            (LPVOID *)&CExtDummyReleaseExtDummy11_user,
            (LPVOID *)&CExtDummyReleaseExtDummy11_next,
            (LPVOID)cast_pointer_function(CExtDummyReleaseExtDummy11_wrapper),
            (LPVOID)cast_pointer_function((void(CExtDummy::*)())&CExtDummy::ReleaseExtDummy) },
        {   (LPVOID)0x1404df070L,
            (LPVOID *)&CExtDummydtor_CExtDummy14_user,
            (LPVOID *)&CExtDummydtor_CExtDummy14_next,
            (LPVOID)cast_pointer_function(CExtDummydtor_CExtDummy14_wrapper),
            (LPVOID)cast_pointer_function((int64_t(CExtDummy::*)())&CExtDummy::dtor_CExtDummy) },
        
        };
        
    }; // end namespace detail
END_ATF_NAMESPACE
