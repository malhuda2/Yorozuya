// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "wchar_t.hpp"


START_ATF_NAMESPACE
    struct tagMDAXISINFO
    {
        unsigned __int64 cbSize;
        unsigned __int64 iAxis;
        unsigned __int64 cDimensions;
        unsigned __int64 cCoordinates;
        unsigned __int64 *rgcColumns;
        wchar_t **rgpwszDimensionNames;
    };
END_ATF_NAMESPACE
