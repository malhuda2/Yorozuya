// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "$381360F90D54CFC6495AFF241C0D4B8E.hpp"
#include "_FILETIME.hpp"


START_ATF_NAMESPACE
    #pragma pack(push, 8)
    struct _INTERNET_CACHE_ENTRY_INFOA
    {
        unsigned int dwStructSize;
        char *lpszSourceUrlName;
        char *lpszLocalFileName;
        unsigned int CacheEntryType;
        unsigned int dwUseCount;
        unsigned int dwHitRate;
        unsigned int dwSizeLow;
        unsigned int dwSizeHigh;
        _FILETIME LastModifiedTime;
        _FILETIME ExpireTime;
        _FILETIME LastAccessTime;
        _FILETIME LastSyncTime;
        char *lpHeaderInfo;
        unsigned int dwHeaderInfoSize;
        char *lpszFileExtension;
        $381360F90D54CFC6495AFF241C0D4B8E ___u15;
    };
    #pragma pack(pop)
END_ATF_NAMESPACE
