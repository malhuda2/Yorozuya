// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "HBITMAP__.hpp"
#include "tagPOINT.hpp"
#include "tagSIZE.hpp"


START_ATF_NAMESPACE
    #pragma pack(push, 8)
    struct SHDRAGIMAGE
    {
        tagSIZE sizeDragImage;
        tagPOINT ptOffset;
        HBITMAP__ *hbmpDragImage;
        unsigned int crColorKey;
    };
    #pragma pack(pop)
END_ATF_NAMESPACE
