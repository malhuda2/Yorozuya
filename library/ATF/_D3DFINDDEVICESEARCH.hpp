// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "_D3DPrimCaps.hpp"
#include "_GUID.hpp"


START_ATF_NAMESPACE
    struct _D3DFINDDEVICESEARCH
    {
        unsigned int dwSize;
        unsigned int dwFlags;
        int bHardware;
        unsigned int dcmColorModel;
        _GUID guid;
        unsigned int dwCaps;
        _D3DPrimCaps dpcPrimCaps;
    };
END_ATF_NAMESPACE
