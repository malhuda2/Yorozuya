// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "HDC__.hpp"
#include "_BLENDFUNCTION.hpp"
#include "tagPOINT.hpp"
#include "tagRECT.hpp"
#include "tagSIZE.hpp"


START_ATF_NAMESPACE
    struct tagUPDATELAYEREDWINDOWINFO
    {
        unsigned int cbSize;
        HDC__ *hdcDst;
        tagPOINT *pptDst;
        tagSIZE *psize;
        HDC__ *hdcSrc;
        tagPOINT *pptSrc;
        unsigned int crKey;
        _BLENDFUNCTION *pblend;
        unsigned int dwFlags;
        tagRECT *prcDirty;
    };
END_ATF_NAMESPACE
