// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"


START_ATF_NAMESPACE
    struct _THREAD_CONFIG
    {
        char szThreadID[128];
        bool bProgramExitWhenLackData;
        char szLogFileName[128];
        int nSleepCount;
    public:
        _THREAD_CONFIG()
        {
            using org_ptr = void (WINAPIV*)(struct _THREAD_CONFIG*);
            (org_ptr(0x14043ea90L))(this);
        };
        void ctor__THREAD_CONFIG()
        {
            using org_ptr = void (WINAPIV*)(struct _THREAD_CONFIG*);
            (org_ptr(0x14043ea90L))(this);
        };
    };
END_ATF_NAMESPACE
