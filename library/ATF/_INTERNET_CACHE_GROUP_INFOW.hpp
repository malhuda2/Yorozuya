// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "wchar_t.hpp"


START_ATF_NAMESPACE
    struct _INTERNET_CACHE_GROUP_INFOW
    {
        unsigned int dwGroupSize;
        unsigned int dwGroupFlags;
        unsigned int dwGroupType;
        unsigned int dwDiskUsage;
        unsigned int dwDiskQuota;
        unsigned int dwOwnerStorage[4];
        wchar_t szGroupName[120];
    };
END_ATF_NAMESPACE
