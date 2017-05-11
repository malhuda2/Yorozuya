// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "_D3DPrimCaps.hpp"
#include "_GUID.hpp"


START_ATF_NAMESPACE
    struct _D3DDeviceDesc7
    {
        unsigned int dwDevCaps;
        _D3DPrimCaps dpcLineCaps;
        _D3DPrimCaps dpcTriCaps;
        unsigned int dwDeviceRenderBitDepth;
        unsigned int dwDeviceZBufferBitDepth;
        unsigned int dwMinTextureWidth;
        unsigned int dwMinTextureHeight;
        unsigned int dwMaxTextureWidth;
        unsigned int dwMaxTextureHeight;
        unsigned int dwMaxTextureRepeat;
        unsigned int dwMaxTextureAspectRatio;
        unsigned int dwMaxAnisotropy;
        float dvGuardBandLeft;
        float dvGuardBandTop;
        float dvGuardBandRight;
        float dvGuardBandBottom;
        float dvExtentsAdjust;
        unsigned int dwStencilCaps;
        unsigned int dwFVFCaps;
        unsigned int dwTextureOpCaps;
        unsigned __int16 wMaxTextureBlendStages;
        unsigned __int16 wMaxSimultaneousTextures;
        unsigned int dwMaxActiveLights;
        float dvMaxVertexW;
        _GUID deviceGUID;
        unsigned __int16 wMaxUserClipPlanes;
        unsigned __int16 wMaxVertexBlendMatrices;
        unsigned int dwVertexProcessingCaps;
        unsigned int dwReserved1;
        unsigned int dwReserved2;
        unsigned int dwReserved3;
        unsigned int dwReserved4;
    };
END_ATF_NAMESPACE
