// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "CAniCamera.hpp"


START_ATF_NAMESPACE
    namespace info
    {
        using CAniCameraGetCameraIndex1_ptr = uint32_t (WINAPIV*)(struct CAniCamera*, char*);
        using CAniCameraGetCameraIndex1_clbk = uint32_t (WINAPIV*)(struct CAniCamera*, char*, CAniCameraGetCameraIndex1_ptr);
        using CAniCameraGetCameraName2_ptr = char* (WINAPIV*)(struct CAniCamera*, uint32_t);
        using CAniCameraGetCameraName2_clbk = char* (WINAPIV*)(struct CAniCamera*, uint32_t, CAniCameraGetCameraName2_ptr);
        using CAniCameraGetDummyID3_ptr = uint32_t (WINAPIV*)(struct CAniCamera*, char*, int);
        using CAniCameraGetDummyID3_clbk = uint32_t (WINAPIV*)(struct CAniCamera*, char*, int, CAniCameraGetDummyID3_ptr);
        using CAniCameraGetDummyMatrix4_ptr = void (WINAPIV*)(struct CAniCamera*, float**, uint32_t, float);
        using CAniCameraGetDummyMatrix4_clbk = void (WINAPIV*)(struct CAniCamera*, float**, uint32_t, float, CAniCameraGetDummyMatrix4_ptr);
        using CAniCameraGetDummyMatrixSub5_ptr = void (WINAPIV*)(struct CAniCamera*, float**, uint32_t, float);
        using CAniCameraGetDummyMatrixSub5_clbk = void (WINAPIV*)(struct CAniCamera*, float**, uint32_t, float, CAniCameraGetDummyMatrixSub5_ptr);
        using CAniCameraGetDummyParentID6_ptr = char* (WINAPIV*)(struct CAniCamera*, uint32_t);
        using CAniCameraGetDummyParentID6_clbk = char* (WINAPIV*)(struct CAniCamera*, uint32_t, CAniCameraGetDummyParentID6_ptr);
        using CAniCameraGetMatrixAniCamera7_ptr = float* (WINAPIV*)(struct CAniCamera*, float);
        using CAniCameraGetMatrixAniCamera7_clbk = float* (WINAPIV*)(struct CAniCamera*, float, CAniCameraGetMatrixAniCamera7_ptr);
        using CAniCameraIsLoadedAniCamera8_ptr = int64_t (WINAPIV*)(struct CAniCamera*);
        using CAniCameraIsLoadedAniCamera8_clbk = int64_t (WINAPIV*)(struct CAniCamera*, CAniCameraIsLoadedAniCamera8_ptr);
        using CAniCameraLoadAniCamera9_ptr = void (WINAPIV*)(struct CAniCamera*, char*);
        using CAniCameraLoadAniCamera9_clbk = void (WINAPIV*)(struct CAniCamera*, char*, CAniCameraLoadAniCamera9_ptr);
        using CAniCameraPlayAniCamera10_ptr = int64_t (WINAPIV*)(struct CAniCamera*, float**, float, int);
        using CAniCameraPlayAniCamera10_clbk = int64_t (WINAPIV*)(struct CAniCamera*, float**, float, int, CAniCameraPlayAniCamera10_ptr);
        using CAniCameraReleaseAniCamera11_ptr = void (WINAPIV*)(struct CAniCamera*);
        using CAniCameraReleaseAniCamera11_clbk = void (WINAPIV*)(struct CAniCamera*, CAniCameraReleaseAniCamera11_ptr);
        using CAniCameraSetExtCamAni12_ptr = int64_t (WINAPIV*)(struct CAniCamera*);
        using CAniCameraSetExtCamAni12_clbk = int64_t (WINAPIV*)(struct CAniCamera*, CAniCameraSetExtCamAni12_ptr);
        using CAniCameraSetNowFrame13_ptr = void (WINAPIV*)(struct CAniCamera*, float);
        using CAniCameraSetNowFrame13_clbk = void (WINAPIV*)(struct CAniCamera*, float, CAniCameraSetNowFrame13_ptr);
        using CAniCameraSetPrePlayCamera14_ptr = void (WINAPIV*)(struct CAniCamera*, uint32_t, uint32_t, uint32_t, uint32_t);
        using CAniCameraSetPrePlayCamera14_clbk = void (WINAPIV*)(struct CAniCamera*, uint32_t, uint32_t, uint32_t, uint32_t, CAniCameraSetPrePlayCamera14_ptr);
        using CAniCameradtor_CAniCamera15_ptr = int64_t (WINAPIV*)(struct CAniCamera*);
        using CAniCameradtor_CAniCamera15_clbk = int64_t (WINAPIV*)(struct CAniCamera*, CAniCameradtor_CAniCamera15_ptr);
        
    }; // end namespace info
END_ATF_NAMESPACE
