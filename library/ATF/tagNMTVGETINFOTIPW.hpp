// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "tagNMHDR.hpp"
#include "wchar_t.hpp"


START_ATF_NAMESPACE
    struct tagNMTVGETINFOTIPW
    {
        tagNMHDR hdr;
        wchar_t *pszText;
        int cchTextMax;
        struct _TREEITEM *hItem;
        __int64 lParam;
    };
END_ATF_NAMESPACE
