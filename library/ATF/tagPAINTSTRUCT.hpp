// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "HDC__.hpp"
#include "tagRECT.hpp"


START_ATF_NAMESPACE
    #pragma pack(push, 8)
    struct tagPAINTSTRUCT
    {
        HDC__ *hdc;
        int fErase;
        tagRECT rcPaint;
        int fRestore;
        int fIncUpdate;
        char rgbReserved[32];
    };
    #pragma pack(pop)
END_ATF_NAMESPACE
