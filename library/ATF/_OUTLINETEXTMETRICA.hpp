// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "tagPANOSE.hpp"
#include "tagPOINT.hpp"
#include "tagRECT.hpp"
#include "tagTEXTMETRICA.hpp"


START_ATF_NAMESPACE
    struct _OUTLINETEXTMETRICA
    {
        unsigned int otmSize;
        tagTEXTMETRICA otmTextMetrics;
        char otmFiller;
        tagPANOSE otmPanoseNumber;
        unsigned int otmfsSelection;
        unsigned int otmfsType;
        int otmsCharSlopeRise;
        int otmsCharSlopeRun;
        int otmItalicAngle;
        unsigned int otmEMSquare;
        int otmAscent;
        int otmDescent;
        unsigned int otmLineGap;
        unsigned int otmsCapEmHeight;
        unsigned int otmsXHeight;
        tagRECT otmrcFontBox;
        int otmMacAscent;
        int otmMacDescent;
        unsigned int otmMacLineGap;
        unsigned int otmusMinimumPPEM;
        tagPOINT otmptSubscriptSize;
        tagPOINT otmptSubscriptOffset;
        tagPOINT otmptSuperscriptSize;
        tagPOINT otmptSuperscriptOffset;
        unsigned int otmsStrikeoutSize;
        int otmsStrikeoutPosition;
        int otmsUnderscoreSize;
        int otmsUnderscorePosition;
        char *otmpFamilyName;
        char *otmpFaceName;
        char *otmpStyleName;
        char *otmpFullName;
    };
END_ATF_NAMESPACE
