// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "$00F4D6FA838FAD5B65924731E0E9CCBC.hpp"
#include "$EF599A003DBF63C31A82D22AC5A5ECD5.hpp"
#include "_DDCOLORKEY.hpp"
#include "_DDPIXELFORMAT.hpp"
#include "_DDSCAPS.hpp"


START_ATF_NAMESPACE
    #pragma pack(push, 8)
    struct _DDSURFACEDESC
    {
        unsigned int dwSize;
        unsigned int dwFlags;
        unsigned int dwHeight;
        unsigned int dwWidth;
        $00F4D6FA838FAD5B65924731E0E9CCBC ___u4;
        unsigned int dwBackBufferCount;
        $EF599A003DBF63C31A82D22AC5A5ECD5 ___u6;
        unsigned int dwAlphaBitDepth;
        unsigned int dwReserved;
        void *lpSurface;
        _DDCOLORKEY ddckCKDestOverlay;
        _DDCOLORKEY ddckCKDestBlt;
        _DDCOLORKEY ddckCKSrcOverlay;
        _DDCOLORKEY ddckCKSrcBlt;
        _DDPIXELFORMAT ddpfPixelFormat;
        _DDSCAPS ddsCaps;
    };
    #pragma pack(pop)
END_ATF_NAMESPACE
