// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "wchar_t.hpp"


START_ATF_NAMESPACE
    #pragma pack(push, 8)
    struct tagEXCEPINFO
    {
        unsigned __int16 wCode;
        unsigned __int16 wReserved;
        wchar_t *bstrSource;
        wchar_t *bstrDescription;
        wchar_t *bstrHelpFile;
        unsigned int dwHelpContext;
        void *pvReserved;
        HRESULT (WINAPIV *pfnDeferredFillIn)(tagEXCEPINFO *);
        int scode;
    };
    #pragma pack(pop)
END_ATF_NAMESPACE
