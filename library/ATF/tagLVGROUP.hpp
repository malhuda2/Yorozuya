// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>



START_ATF_NAMESPACE
    #pragma pack(push, 8)
    struct tagLVGROUP
    {
        unsigned int cbSize;
        unsigned int mask;
        wchar_t *pszHeader;
        int cchHeader;
        wchar_t *pszFooter;
        int cchFooter;
        int iGroupId;
        unsigned int stateMask;
        unsigned int state;
        unsigned int uAlign;
    };
    #pragma pack(pop)
END_ATF_NAMESPACE
