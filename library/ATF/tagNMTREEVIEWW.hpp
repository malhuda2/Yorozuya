// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "tagNMHDR.hpp"
#include "tagPOINT.hpp"
#include "tagTVITEMW.hpp"


START_ATF_NAMESPACE
    struct tagNMTREEVIEWW
    {
        tagNMHDR hdr;
        unsigned int action;
        tagTVITEMW itemOld;
        tagTVITEMW itemNew;
        tagPOINT ptDrag;
    };
END_ATF_NAMESPACE
