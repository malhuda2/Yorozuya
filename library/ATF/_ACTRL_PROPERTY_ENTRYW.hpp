// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "_ACTRL_ACCESS_ENTRY_LISTW.hpp"
#include "wchar_t.hpp"


START_ATF_NAMESPACE
    #pragma pack(push, 8)
    struct _ACTRL_PROPERTY_ENTRYW
    {
        wchar_t *lpProperty;
        _ACTRL_ACCESS_ENTRY_LISTW *pAccessEntryList;
        unsigned int fListFlags;
    };
    #pragma pack(pop)
END_ATF_NAMESPACE
