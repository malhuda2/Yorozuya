// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "_devicemodeW.hpp"
#include "wchar_t.hpp"


START_ATF_NAMESPACE
    #pragma pack(push, 8)
    struct _PRINTER_DEFAULTSW
    {
        wchar_t *pDatatype;
        _devicemodeW *pDevMode;
        unsigned int DesiredAccess;
    };
    #pragma pack(pop)
END_ATF_NAMESPACE
