// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "_MINIDUMP_LOCATION_DESCRIPTOR.hpp"
#include "_MINIDUMP_MEMORY_DESCRIPTOR.hpp"


START_ATF_NAMESPACE
    struct _MINIDUMP_THREAD_EX
    {
        unsigned int ThreadId;
        unsigned int SuspendCount;
        unsigned int PriorityClass;
        unsigned int Priority;
        unsigned __int64 Teb;
        _MINIDUMP_MEMORY_DESCRIPTOR Stack;
        _MINIDUMP_LOCATION_DESCRIPTOR ThreadContext;
        _MINIDUMP_MEMORY_DESCRIPTOR BackingStore;
    };
END_ATF_NAMESPACE
