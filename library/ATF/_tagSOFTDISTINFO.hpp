// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "wchar_t.hpp"


START_ATF_NAMESPACE
    #pragma pack(push, 8)
    struct _tagSOFTDISTINFO
    {
        unsigned int cbSize;
        unsigned int dwFlags;
        unsigned int dwAdState;
        wchar_t *szTitle;
        wchar_t *szAbstract;
        wchar_t *szHREF;
        unsigned int dwInstalledVersionMS;
        unsigned int dwInstalledVersionLS;
        unsigned int dwUpdateVersionMS;
        unsigned int dwUpdateVersionLS;
        unsigned int dwAdvertisedVersionMS;
        unsigned int dwAdvertisedVersionLS;
        unsigned int dwReserved;
    };
    #pragma pack(pop)
END_ATF_NAMESPACE
