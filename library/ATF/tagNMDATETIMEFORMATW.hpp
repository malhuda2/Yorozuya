// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>
#include <_SYSTEMTIME.hpp>
#include <tagNMHDR.hpp>



START_ATF_NAMESPACE
    struct tagNMDATETIMEFORMATW
    {
        tagNMHDR nmhdr;
        const wchar_t *pszFormat;
        _SYSTEMTIME st;
        const wchar_t *pszDisplay;
        wchar_t szDisplay[64];
    };
END_ATF_NAMESPACE
