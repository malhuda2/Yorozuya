// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "_RECTL.hpp"
#include "tagEMR.hpp"
#include "tagPOINTS.hpp"


START_ATF_NAMESPACE
    struct tagEMRPOLYPOLYLINE16
    {
        tagEMR emr;
        _RECTL rclBounds;
        unsigned int nPolys;
        unsigned int cpts;
        unsigned int aPolyCounts[1];
        tagPOINTS apts[1];
    };
END_ATF_NAMESPACE
