// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "HWND__.hpp"
#include "tagPOINT.hpp"


START_ATF_NAMESPACE
    #pragma pack(push, 8)
    struct tagDROPSTRUCT
    {
        HWND__ *hwndSource;
        HWND__ *hwndSink;
        unsigned int wFmt;
        unsigned __int64 dwData;
        tagPOINT ptDrop;
        unsigned int dwControlData;
    };
    #pragma pack(pop)
END_ATF_NAMESPACE
