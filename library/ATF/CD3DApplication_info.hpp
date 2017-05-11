// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "CD3DApplication.hpp"


START_ATF_NAMESPACE
    namespace info
    {
        using CD3DApplicationAdjustWindowForChange1_ptr = int32_t (WINAPIV*)(struct CD3DApplication*);
        using CD3DApplicationAdjustWindowForChange1_clbk = int32_t (WINAPIV*)(struct CD3DApplication*, CD3DApplicationAdjustWindowForChange1_ptr);
        using CD3DApplicationBuildDeviceList2_ptr = int32_t (WINAPIV*)(struct CD3DApplication*);
        using CD3DApplicationBuildDeviceList2_clbk = int32_t (WINAPIV*)(struct CD3DApplication*, CD3DApplicationBuildDeviceList2_ptr);
        using CD3DApplicationctor_CD3DApplication3_ptr = int64_t (WINAPIV*)(struct CD3DApplication*);
        using CD3DApplicationctor_CD3DApplication3_clbk = int64_t (WINAPIV*)(struct CD3DApplication*, CD3DApplicationctor_CD3DApplication3_ptr);
        using CD3DApplicationCleanup3DEnvironment4_ptr = void (WINAPIV*)(struct CD3DApplication*);
        using CD3DApplicationCleanup3DEnvironment4_clbk = void (WINAPIV*)(struct CD3DApplication*, CD3DApplicationCleanup3DEnvironment4_ptr);
        using CD3DApplicationConfirmDevice5_ptr = int32_t (WINAPIV*)(struct CD3DApplication*, struct _D3DCAPS8*, uint32_t, _D3DFORMAT);
        using CD3DApplicationConfirmDevice5_clbk = int32_t (WINAPIV*)(struct CD3DApplication*, struct _D3DCAPS8*, uint32_t, _D3DFORMAT, CD3DApplicationConfirmDevice5_ptr);
        using CD3DApplicationCreate6_ptr = int32_t (WINAPIV*)(struct CD3DApplication*, HINSTANCE);
        using CD3DApplicationCreate6_clbk = int32_t (WINAPIV*)(struct CD3DApplication*, HINSTANCE, CD3DApplicationCreate6_ptr);
        using CD3DApplicationCreateDirect3D7_ptr = int32_t (WINAPIV*)(struct CD3DApplication*);
        using CD3DApplicationCreateDirect3D7_clbk = int32_t (WINAPIV*)(struct CD3DApplication*, CD3DApplicationCreateDirect3D7_ptr);
        using CD3DApplicationDeleteDeviceObjects8_ptr = int32_t (WINAPIV*)(struct CD3DApplication*);
        using CD3DApplicationDeleteDeviceObjects8_clbk = int32_t (WINAPIV*)(struct CD3DApplication*, CD3DApplicationDeleteDeviceObjects8_ptr);
        using CD3DApplicationDisplayErrorMsg9_ptr = int32_t (WINAPIV*)(struct CD3DApplication*, int32_t, uint32_t);
        using CD3DApplicationDisplayErrorMsg9_clbk = int32_t (WINAPIV*)(struct CD3DApplication*, int32_t, uint32_t, CD3DApplicationDisplayErrorMsg9_ptr);
        using CD3DApplicationEndLoop10_ptr = int32_t (WINAPIV*)(struct CD3DApplication*);
        using CD3DApplicationEndLoop10_clbk = int32_t (WINAPIV*)(struct CD3DApplication*, CD3DApplicationEndLoop10_ptr);
        using CD3DApplicationFinalCleanup11_ptr = int32_t (WINAPIV*)(struct CD3DApplication*);
        using CD3DApplicationFinalCleanup11_clbk = int32_t (WINAPIV*)(struct CD3DApplication*, CD3DApplicationFinalCleanup11_ptr);
        using CD3DApplicationFindDepthStencilFormat12_ptr = int64_t (WINAPIV*)(struct CD3DApplication*, unsigned int, CD3DApplication::_D3DDEVTYPE, _D3DFORMAT, _D3DFORMAT*);
        using CD3DApplicationFindDepthStencilFormat12_clbk = int64_t (WINAPIV*)(struct CD3DApplication*, unsigned int, CD3DApplication::_D3DDEVTYPE, _D3DFORMAT, _D3DFORMAT*, CD3DApplicationFindDepthStencilFormat12_ptr);
        using CD3DApplicationForceWindowed13_ptr = int32_t (WINAPIV*)(struct CD3DApplication*);
        using CD3DApplicationForceWindowed13_clbk = int32_t (WINAPIV*)(struct CD3DApplication*, CD3DApplicationForceWindowed13_ptr);
        using CD3DApplicationFrameMove14_ptr = int32_t (WINAPIV*)(struct CD3DApplication*);
        using CD3DApplicationFrameMove14_clbk = int32_t (WINAPIV*)(struct CD3DApplication*, CD3DApplicationFrameMove14_ptr);
        using CD3DApplicationInitDeviceObjects15_ptr = int32_t (WINAPIV*)(struct CD3DApplication*);
        using CD3DApplicationInitDeviceObjects15_clbk = int32_t (WINAPIV*)(struct CD3DApplication*, CD3DApplicationInitDeviceObjects15_ptr);
        using CD3DApplicationInitialize3DEnvironment16_ptr = int32_t (WINAPIV*)(struct CD3DApplication*);
        using CD3DApplicationInitialize3DEnvironment16_clbk = int32_t (WINAPIV*)(struct CD3DApplication*, CD3DApplicationInitialize3DEnvironment16_ptr);
        using CD3DApplicationInvalidateDeviceObjects17_ptr = int32_t (WINAPIV*)(struct CD3DApplication*);
        using CD3DApplicationInvalidateDeviceObjects17_clbk = int32_t (WINAPIV*)(struct CD3DApplication*, CD3DApplicationInvalidateDeviceObjects17_ptr);
        using CD3DApplicationMsgProc18_ptr = int64_t (WINAPIV*)(struct CD3DApplication*, HWND, UINT, WPARAM, LPARAM);
        using CD3DApplicationMsgProc18_clbk = int64_t (WINAPIV*)(struct CD3DApplication*, HWND, UINT, WPARAM, LPARAM, CD3DApplicationMsgProc18_ptr);
        using CD3DApplicationOneTimeSceneInit19_ptr = int32_t (WINAPIV*)(struct CD3DApplication*);
        using CD3DApplicationOneTimeSceneInit19_clbk = int32_t (WINAPIV*)(struct CD3DApplication*, CD3DApplicationOneTimeSceneInit19_ptr);
        using CD3DApplicationPause20_ptr = void (WINAPIV*)(struct CD3DApplication*, int);
        using CD3DApplicationPause20_clbk = void (WINAPIV*)(struct CD3DApplication*, int, CD3DApplicationPause20_ptr);
        using CD3DApplicationPrepareLoop21_ptr = int32_t (WINAPIV*)(struct CD3DApplication*);
        using CD3DApplicationPrepareLoop21_clbk = int32_t (WINAPIV*)(struct CD3DApplication*, CD3DApplicationPrepareLoop21_ptr);
        using CD3DApplicationRelease22_ptr = int32_t (WINAPIV*)(struct CD3DApplication*);
        using CD3DApplicationRelease22_clbk = int32_t (WINAPIV*)(struct CD3DApplication*, CD3DApplicationRelease22_ptr);
        using CD3DApplicationRender23_ptr = int32_t (WINAPIV*)(struct CD3DApplication*);
        using CD3DApplicationRender23_clbk = int32_t (WINAPIV*)(struct CD3DApplication*, CD3DApplicationRender23_ptr);
        using CD3DApplicationRender3DEnvironment24_ptr = int32_t (WINAPIV*)(struct CD3DApplication*);
        using CD3DApplicationRender3DEnvironment24_clbk = int32_t (WINAPIV*)(struct CD3DApplication*, CD3DApplicationRender3DEnvironment24_ptr);
        using CD3DApplicationResize3DEnvironment25_ptr = int32_t (WINAPIV*)(struct CD3DApplication*);
        using CD3DApplicationResize3DEnvironment25_clbk = int32_t (WINAPIV*)(struct CD3DApplication*, CD3DApplicationResize3DEnvironment25_ptr);
        using CD3DApplicationRestoreDeviceObjects26_ptr = int32_t (WINAPIV*)(struct CD3DApplication*);
        using CD3DApplicationRestoreDeviceObjects26_clbk = int32_t (WINAPIV*)(struct CD3DApplication*, CD3DApplicationRestoreDeviceObjects26_ptr);
        using CD3DApplicationRun27_ptr = int64_t (WINAPIV*)(struct CD3DApplication*);
        using CD3DApplicationRun27_clbk = int64_t (WINAPIV*)(struct CD3DApplication*, CD3DApplicationRun27_ptr);
        using CD3DApplicationSelectDeviceProc28_ptr = int64_t (WINAPIV*)(HWND__*, unsigned int, uint64_t, int64_t);
        using CD3DApplicationSelectDeviceProc28_clbk = int64_t (WINAPIV*)(HWND__*, unsigned int, uint64_t, int64_t, CD3DApplicationSelectDeviceProc28_ptr);
        using CD3DApplicationToggleFullscreen29_ptr = int32_t (WINAPIV*)(struct CD3DApplication*);
        using CD3DApplicationToggleFullscreen29_clbk = int32_t (WINAPIV*)(struct CD3DApplication*, CD3DApplicationToggleFullscreen29_ptr);
        using CD3DApplicationUserSelectNewDevice30_ptr = int32_t (WINAPIV*)(struct CD3DApplication*);
        using CD3DApplicationUserSelectNewDevice30_clbk = int32_t (WINAPIV*)(struct CD3DApplication*, CD3DApplicationUserSelectNewDevice30_ptr);
        
    }; // end namespace info
END_ATF_NAMESPACE
