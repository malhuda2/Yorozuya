// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"


START_ATF_NAMESPACE
    #pragma pack(push, 8)
    struct tagTVITEMEXA
    {
        unsigned int mask;
        struct _TREEITEM *hItem;
        unsigned int state;
        unsigned int stateMask;
        char *pszText;
        int cchTextMax;
        int iImage;
        int iSelectedImage;
        int cChildren;
        __int64 lParam;
        int iIntegral;
    };
    #pragma pack(pop)
END_ATF_NAMESPACE
