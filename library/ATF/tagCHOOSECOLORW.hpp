// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "HWND__.hpp"


START_ATF_NAMESPACE
    struct tagCHOOSECOLORW
    {
        unsigned int lStructSize;
        HWND__ *hwndOwner;
        HWND__ *hInstance;
        unsigned int rgbResult;
        unsigned int *lpCustColors;
        unsigned int Flags;
        __int64 lCustData;
        unsigned __int64 (WINAPIV *lpfnHook)(HWND__ *, unsigned int, unsigned __int64, __int64);
        const wchar_t *lpTemplateName;
    };
END_ATF_NAMESPACE
