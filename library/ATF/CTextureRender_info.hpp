// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "CTextureRender.hpp"


START_ATF_NAMESPACE
    namespace info
    {
        using CTextureRenderBeginScene1_ptr = int64_t (WINAPIV*)(struct CTextureRender*, uint32_t);
        using CTextureRenderBeginScene1_clbk = int64_t (WINAPIV*)(struct CTextureRender*, uint32_t, CTextureRenderBeginScene1_ptr);
        using CTextureRenderClearFrameBuffer2_ptr = void (WINAPIV*)(struct CTextureRender*, uint32_t);
        using CTextureRenderClearFrameBuffer2_clbk = void (WINAPIV*)(struct CTextureRender*, uint32_t, CTextureRenderClearFrameBuffer2_ptr);
        using CTextureRenderCreateTexture3_ptr = int64_t (WINAPIV*)(struct CTextureRender*, struct IDirect3DDevice8*, uint32_t, uint32_t, int);
        using CTextureRenderCreateTexture3_clbk = int64_t (WINAPIV*)(struct CTextureRender*, struct IDirect3DDevice8*, uint32_t, uint32_t, int, CTextureRenderCreateTexture3_ptr);
        using CTextureRenderEndScene4_ptr = void (WINAPIV*)(struct CTextureRender*);
        using CTextureRenderEndScene4_clbk = void (WINAPIV*)(struct CTextureRender*, CTextureRenderEndScene4_ptr);
        using CTextureRenderGetD3DTexture5_ptr = struct IDirect3DTexture8* (WINAPIV*)(struct CTextureRender*);
        using CTextureRenderGetD3DTexture5_clbk = struct IDirect3DTexture8* (WINAPIV*)(struct CTextureRender*, CTextureRenderGetD3DTexture5_ptr);
        using CTextureRenderGetXSize6_ptr = uint32_t (WINAPIV*)(struct CTextureRender*);
        using CTextureRenderGetXSize6_clbk = uint32_t (WINAPIV*)(struct CTextureRender*, CTextureRenderGetXSize6_ptr);
        using CTextureRenderGetYSize7_ptr = uint32_t (WINAPIV*)(struct CTextureRender*);
        using CTextureRenderGetYSize7_clbk = uint32_t (WINAPIV*)(struct CTextureRender*, CTextureRenderGetYSize7_ptr);
        using CTextureRenderIsLoaded8_ptr = int64_t (WINAPIV*)(struct CTextureRender*);
        using CTextureRenderIsLoaded8_clbk = int64_t (WINAPIV*)(struct CTextureRender*, CTextureRenderIsLoaded8_ptr);
        using CTextureRenderReleaseTexture9_ptr = void (WINAPIV*)(struct CTextureRender*);
        using CTextureRenderReleaseTexture9_clbk = void (WINAPIV*)(struct CTextureRender*, CTextureRenderReleaseTexture9_ptr);
        using CTextureRenderSetClearAtOnce10_ptr = void (WINAPIV*)(struct CTextureRender*, int);
        using CTextureRenderSetClearAtOnce10_clbk = void (WINAPIV*)(struct CTextureRender*, int, CTextureRenderSetClearAtOnce10_ptr);
        using CTextureRenderdtor_CTextureRender11_ptr = int64_t (WINAPIV*)(struct CTextureRender*);
        using CTextureRenderdtor_CTextureRender11_clbk = int64_t (WINAPIV*)(struct CTextureRender*, CTextureRenderdtor_CTextureRender11_ptr);
        
    }; // end namespace info
END_ATF_NAMESPACE
