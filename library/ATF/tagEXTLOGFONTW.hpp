// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "tagLOGFONTW.hpp"
#include "tagPANOSE.hpp"
#include "wchar_t.hpp"


START_ATF_NAMESPACE
    #pragma pack(push, 4)
    struct tagEXTLOGFONTW
    {
        tagLOGFONTW elfLogFont;
        wchar_t elfFullName[64];
        wchar_t elfStyle[32];
        unsigned int elfVersion;
        unsigned int elfStyleSize;
        unsigned int elfMatch;
        unsigned int elfReserved;
        char elfVendorId[4];
        unsigned int elfCulture;
        tagPANOSE elfPanose;
    };
    #pragma pack(pop)
END_ATF_NAMESPACE
