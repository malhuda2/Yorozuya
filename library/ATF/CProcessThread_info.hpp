// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "CProcessThread.hpp"


START_ATF_NAMESPACE
    namespace info
    {
        using CProcessThreadctor_CProcessThread2_ptr = void (WINAPIV*)(struct CProcessThread*);
        using CProcessThreadctor_CProcessThread2_clbk = void (WINAPIV*)(struct CProcessThread*, CProcessThreadctor_CProcessThread2_ptr);
        using CProcessThreadCompleteOnLoop4_ptr = void (WINAPIV*)(struct CProcessThread*);
        using CProcessThreadCompleteOnLoop4_clbk = void (WINAPIV*)(struct CProcessThread*, CProcessThreadCompleteOnLoop4_ptr);
        using CProcessThreadCompleteProcess6_ptr = void (WINAPIV*)(struct CProcessThread*, struct _SYN_DATA*);
        using CProcessThreadCompleteProcess6_clbk = void (WINAPIV*)(struct CProcessThread*, struct _SYN_DATA*, CProcessThreadCompleteProcess6_ptr);
        using CProcessThreadCrashThread8_ptr = void (WINAPIV*)(struct CProcessThread*);
        using CProcessThreadCrashThread8_clbk = void (WINAPIV*)(struct CProcessThread*, CProcessThreadCrashThread8_ptr);
        using CProcessThreadProcessOnThread10_ptr = void (WINAPIV*)(struct CProcessThread*);
        using CProcessThreadProcessOnThread10_clbk = void (WINAPIV*)(struct CProcessThread*, CProcessThreadProcessOnThread10_ptr);
        using CProcessThreadPushData12_ptr = struct _SYN_DATA* (WINAPIV*)(struct CProcessThread*, struct _SYN_HEADER*, char*, int);
        using CProcessThreadPushData12_clbk = struct _SYN_DATA* (WINAPIV*)(struct CProcessThread*, struct _SYN_HEADER*, char*, int, CProcessThreadPushData12_ptr);
        using CProcessThreadRegisterSyncData14_ptr = bool (WINAPIV*)(struct CProcessThread*, int, unsigned int);
        using CProcessThreadRegisterSyncData14_clbk = bool (WINAPIV*)(struct CProcessThread*, int, unsigned int, CProcessThreadRegisterSyncData14_ptr);
        using CProcessThreadRunOnLoop16_ptr = void (WINAPIV*)(struct CProcessThread*);
        using CProcessThreadRunOnLoop16_clbk = void (WINAPIV*)(struct CProcessThread*, CProcessThreadRunOnLoop16_ptr);
        using CProcessThreadRunOnThread18_ptr = void (WINAPIV*)(struct CProcessThread*);
        using CProcessThreadRunOnThread18_clbk = void (WINAPIV*)(struct CProcessThread*, CProcessThreadRunOnThread18_ptr);
        using CProcessThreadStartThread20_ptr = bool (WINAPIV*)(struct CProcessThread*, struct _THREAD_CONFIG*, unsigned int);
        using CProcessThreadStartThread20_clbk = bool (WINAPIV*)(struct CProcessThread*, struct _THREAD_CONFIG*, unsigned int, CProcessThreadStartThread20_ptr);
        using CProcessThreadctor_Thread22_ptr = void (WINAPIV*)(void*);
        using CProcessThreadctor_Thread22_clbk = void (WINAPIV*)(void*, CProcessThreadctor_Thread22_ptr);
        using CProcessThreadWorkProcess24_ptr = char (WINAPIV*)(struct CProcessThread*, struct _SYN_DATA*);
        using CProcessThreadWorkProcess24_clbk = char (WINAPIV*)(struct CProcessThread*, struct _SYN_DATA*, CProcessThreadWorkProcess24_ptr);
        using CProcessThreaddtor_CProcessThread29_ptr = void (WINAPIV*)(struct CProcessThread*);
        using CProcessThreaddtor_CProcessThread29_clbk = void (WINAPIV*)(struct CProcessThread*, CProcessThreaddtor_CProcessThread29_ptr);
        
    }; // end namespace info
END_ATF_NAMESPACE
