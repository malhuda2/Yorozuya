// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "HINSTANCE__.hpp"
#include "tagPOINT.hpp"
#include "tagRECT.hpp"


START_ATF_NAMESPACE
    struct tagHH_POPUP
    {
        int cbStruct;
        HINSTANCE__ *hinst;
        unsigned int idString;
        const char *pszText;
        tagPOINT pt;
        unsigned int clrForeground;
        unsigned int clrBackground;
        tagRECT rcMargins;
        const char *pszFont;
    };
END_ATF_NAMESPACE
