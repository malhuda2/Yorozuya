// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "HBITMAP__.hpp"
#include "HBRUSH__.hpp"
#include "HFONT__.hpp"
#include "HICON__.hpp"


START_ATF_NAMESPACE
    #pragma pack(push, 8)
    struct AUX_DATA
    {
        int cxVScroll;
        int cyHScroll;
        int cxIcon;
        int cyIcon;
        int cxBorder2;
        int cyBorder2;
        int cxPixelsPerInch;
        int cyPixelsPerInch;
        HBRUSH__ *hbrWindowFrame;
        HBRUSH__ *hbrBtnFace;
        unsigned int clrBtnFace;
        unsigned int clrBtnShadow;
        unsigned int clrBtnHilite;
        unsigned int clrBtnText;
        unsigned int clrWindowFrame;
        HICON__ *hcurWait;
        HICON__ *hcurArrow;
        HICON__ *hcurHelp;
        HFONT__ *hStatusFont;
        HFONT__ *hToolTipsFont;
        HBITMAP__ *hbmMenuDot;
        int bWin95;
    };
    #pragma pack(pop)
END_ATF_NAMESPACE
