// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "_FILETIME.hpp"
#include "wchar_t.hpp"


START_ATF_NAMESPACE
    struct _WIN32_FIND_DATAW
    {
        unsigned int dwFileAttributes;
        _FILETIME ftCreationTime;
        _FILETIME ftLastAccessTime;
        _FILETIME ftLastWriteTime;
        unsigned int nFileSizeHigh;
        unsigned int nFileSizeLow;
        unsigned int dwReserved0;
        unsigned int dwReserved1;
        wchar_t cFileName[260];
        wchar_t cAlternateFileName[14];
    };
END_ATF_NAMESPACE
