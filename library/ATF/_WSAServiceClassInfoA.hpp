// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "_GUID.hpp"
#include "_WSANSClassInfoA.hpp"


START_ATF_NAMESPACE
    struct _WSAServiceClassInfoA
    {
        _GUID *lpServiceClassId;
        char *lpszServiceClassName;
        unsigned int dwCount;
        _WSANSClassInfoA *lpClassInfos;
    };
END_ATF_NAMESPACE
