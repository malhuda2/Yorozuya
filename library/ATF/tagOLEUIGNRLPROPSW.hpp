// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "tagOLEUIOBJECTPROPSW.hpp"


START_ATF_NAMESPACE
    struct tagOLEUIGNRLPROPSW
    {
        unsigned int cbStruct;
        unsigned int dwFlags;
        unsigned int dwReserved1[2];
        unsigned int (WINAPIV *lpfnHook)(HWND__ *, unsigned int, unsigned __int64, __int64);
        __int64 lCustData;
        unsigned int dwReserved2[3];
        tagOLEUIOBJECTPROPSW *lpOP;
    };
END_ATF_NAMESPACE
