// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "CAniCamera_info.hpp"


START_ATF_NAMESPACE
    namespace detail
    {
        info::CAniCameraGetCameraIndex1_ptr CAniCameraGetCameraIndex1_next(nullptr);
        info::CAniCameraGetCameraIndex1_clbk CAniCameraGetCameraIndex1_user(nullptr);
        info::CAniCameraGetCameraName2_ptr CAniCameraGetCameraName2_next(nullptr);
        info::CAniCameraGetCameraName2_clbk CAniCameraGetCameraName2_user(nullptr);
        info::CAniCameraGetDummyID3_ptr CAniCameraGetDummyID3_next(nullptr);
        info::CAniCameraGetDummyID3_clbk CAniCameraGetDummyID3_user(nullptr);
        info::CAniCameraGetDummyMatrix4_ptr CAniCameraGetDummyMatrix4_next(nullptr);
        info::CAniCameraGetDummyMatrix4_clbk CAniCameraGetDummyMatrix4_user(nullptr);
        info::CAniCameraGetDummyMatrixSub5_ptr CAniCameraGetDummyMatrixSub5_next(nullptr);
        info::CAniCameraGetDummyMatrixSub5_clbk CAniCameraGetDummyMatrixSub5_user(nullptr);
        info::CAniCameraGetDummyParentID6_ptr CAniCameraGetDummyParentID6_next(nullptr);
        info::CAniCameraGetDummyParentID6_clbk CAniCameraGetDummyParentID6_user(nullptr);
        info::CAniCameraGetMatrixAniCamera7_ptr CAniCameraGetMatrixAniCamera7_next(nullptr);
        info::CAniCameraGetMatrixAniCamera7_clbk CAniCameraGetMatrixAniCamera7_user(nullptr);
        info::CAniCameraIsLoadedAniCamera8_ptr CAniCameraIsLoadedAniCamera8_next(nullptr);
        info::CAniCameraIsLoadedAniCamera8_clbk CAniCameraIsLoadedAniCamera8_user(nullptr);
        info::CAniCameraLoadAniCamera9_ptr CAniCameraLoadAniCamera9_next(nullptr);
        info::CAniCameraLoadAniCamera9_clbk CAniCameraLoadAniCamera9_user(nullptr);
        info::CAniCameraPlayAniCamera10_ptr CAniCameraPlayAniCamera10_next(nullptr);
        info::CAniCameraPlayAniCamera10_clbk CAniCameraPlayAniCamera10_user(nullptr);
        info::CAniCameraReleaseAniCamera11_ptr CAniCameraReleaseAniCamera11_next(nullptr);
        info::CAniCameraReleaseAniCamera11_clbk CAniCameraReleaseAniCamera11_user(nullptr);
        info::CAniCameraSetExtCamAni12_ptr CAniCameraSetExtCamAni12_next(nullptr);
        info::CAniCameraSetExtCamAni12_clbk CAniCameraSetExtCamAni12_user(nullptr);
        info::CAniCameraSetNowFrame13_ptr CAniCameraSetNowFrame13_next(nullptr);
        info::CAniCameraSetNowFrame13_clbk CAniCameraSetNowFrame13_user(nullptr);
        info::CAniCameraSetPrePlayCamera14_ptr CAniCameraSetPrePlayCamera14_next(nullptr);
        info::CAniCameraSetPrePlayCamera14_clbk CAniCameraSetPrePlayCamera14_user(nullptr);
        info::CAniCameradtor_CAniCamera15_ptr CAniCameradtor_CAniCamera15_next(nullptr);
        info::CAniCameradtor_CAniCamera15_clbk CAniCameradtor_CAniCamera15_user(nullptr);
        
        uint32_t CAniCameraGetCameraIndex1_wrapper(struct CAniCamera* _this, char* arg_0)
        {
           return CAniCameraGetCameraIndex1_user(_this, arg_0, CAniCameraGetCameraIndex1_next);
        };
        char* CAniCameraGetCameraName2_wrapper(struct CAniCamera* _this, uint32_t arg_0)
        {
           return CAniCameraGetCameraName2_user(_this, arg_0, CAniCameraGetCameraName2_next);
        };
        uint32_t CAniCameraGetDummyID3_wrapper(struct CAniCamera* _this, char* arg_0, int arg_1)
        {
           return CAniCameraGetDummyID3_user(_this, arg_0, arg_1, CAniCameraGetDummyID3_next);
        };
        void CAniCameraGetDummyMatrix4_wrapper(struct CAniCamera* _this, float** arg_0, uint32_t arg_1, float arg_2)
        {
           CAniCameraGetDummyMatrix4_user(_this, arg_0, arg_1, arg_2, CAniCameraGetDummyMatrix4_next);
        };
        void CAniCameraGetDummyMatrixSub5_wrapper(struct CAniCamera* _this, float** arg_0, uint32_t arg_1, float arg_2)
        {
           CAniCameraGetDummyMatrixSub5_user(_this, arg_0, arg_1, arg_2, CAniCameraGetDummyMatrixSub5_next);
        };
        char* CAniCameraGetDummyParentID6_wrapper(struct CAniCamera* _this, uint32_t arg_0)
        {
           return CAniCameraGetDummyParentID6_user(_this, arg_0, CAniCameraGetDummyParentID6_next);
        };
        float* CAniCameraGetMatrixAniCamera7_wrapper(struct CAniCamera* _this, float arg_0)
        {
           return CAniCameraGetMatrixAniCamera7_user(_this, arg_0, CAniCameraGetMatrixAniCamera7_next);
        };
        int64_t CAniCameraIsLoadedAniCamera8_wrapper(struct CAniCamera* _this)
        {
           return CAniCameraIsLoadedAniCamera8_user(_this, CAniCameraIsLoadedAniCamera8_next);
        };
        void CAniCameraLoadAniCamera9_wrapper(struct CAniCamera* _this, char* Filename)
        {
           CAniCameraLoadAniCamera9_user(_this, Filename, CAniCameraLoadAniCamera9_next);
        };
        int64_t CAniCameraPlayAniCamera10_wrapper(struct CAniCamera* _this, float** arg_0, float arg_1, int arg_2)
        {
           return CAniCameraPlayAniCamera10_user(_this, arg_0, arg_1, arg_2, CAniCameraPlayAniCamera10_next);
        };
        void CAniCameraReleaseAniCamera11_wrapper(struct CAniCamera* _this)
        {
           CAniCameraReleaseAniCamera11_user(_this, CAniCameraReleaseAniCamera11_next);
        };
        int64_t CAniCameraSetExtCamAni12_wrapper(struct CAniCamera* _this)
        {
           return CAniCameraSetExtCamAni12_user(_this, CAniCameraSetExtCamAni12_next);
        };
        void CAniCameraSetNowFrame13_wrapper(struct CAniCamera* _this, float arg_0)
        {
           CAniCameraSetNowFrame13_user(_this, arg_0, CAniCameraSetNowFrame13_next);
        };
        void CAniCameraSetPrePlayCamera14_wrapper(struct CAniCamera* _this, uint32_t arg_0, uint32_t arg_1, uint32_t arg_2, uint32_t arg_3)
        {
           CAniCameraSetPrePlayCamera14_user(_this, arg_0, arg_1, arg_2, arg_3, CAniCameraSetPrePlayCamera14_next);
        };
        int64_t CAniCameradtor_CAniCamera15_wrapper(struct CAniCamera* _this)
        {
           return CAniCameradtor_CAniCamera15_user(_this, CAniCameradtor_CAniCamera15_next);
        };
        
        hook_record CAniCamera_functions[] = {
        {   (LPVOID)0x14050e600L,
            (LPVOID *)&CAniCameraGetCameraIndex1_user,
            (LPVOID *)&CAniCameraGetCameraIndex1_next,
            (LPVOID)cast_pointer_function(CAniCameraGetCameraIndex1_wrapper),
            (LPVOID)cast_pointer_function((uint32_t(CAniCamera::*)(char*))&CAniCamera::GetCameraIndex) },
        {   (LPVOID)0x14050e5e0L,
            (LPVOID *)&CAniCameraGetCameraName2_user,
            (LPVOID *)&CAniCameraGetCameraName2_next,
            (LPVOID)cast_pointer_function(CAniCameraGetCameraName2_wrapper),
            (LPVOID)cast_pointer_function((char*(CAniCamera::*)(uint32_t))&CAniCamera::GetCameraName) },
        {   (LPVOID)0x14050e6e0L,
            (LPVOID *)&CAniCameraGetDummyID3_user,
            (LPVOID *)&CAniCameraGetDummyID3_next,
            (LPVOID)cast_pointer_function(CAniCameraGetDummyID3_wrapper),
            (LPVOID)cast_pointer_function((uint32_t(CAniCamera::*)(char*, int))&CAniCamera::GetDummyID) },
        {   (LPVOID)0x14050ea00L,
            (LPVOID *)&CAniCameraGetDummyMatrix4_user,
            (LPVOID *)&CAniCameraGetDummyMatrix4_next,
            (LPVOID)cast_pointer_function(CAniCameraGetDummyMatrix4_wrapper),
            (LPVOID)cast_pointer_function((void(CAniCamera::*)(float**, uint32_t, float))&CAniCamera::GetDummyMatrix) },
        {   (LPVOID)0x14050e950L,
            (LPVOID *)&CAniCameraGetDummyMatrixSub5_user,
            (LPVOID *)&CAniCameraGetDummyMatrixSub5_next,
            (LPVOID)cast_pointer_function(CAniCameraGetDummyMatrixSub5_wrapper),
            (LPVOID)cast_pointer_function((void(CAniCamera::*)(float**, uint32_t, float))&CAniCamera::GetDummyMatrixSub) },
        {   (LPVOID)0x14050e6c0L,
            (LPVOID *)&CAniCameraGetDummyParentID6_user,
            (LPVOID *)&CAniCameraGetDummyParentID6_next,
            (LPVOID)cast_pointer_function(CAniCameraGetDummyParentID6_wrapper),
            (LPVOID)cast_pointer_function((char*(CAniCamera::*)(uint32_t))&CAniCamera::GetDummyParentID) },
        {   (LPVOID)0x14050eab0L,
            (LPVOID *)&CAniCameraGetMatrixAniCamera7_user,
            (LPVOID *)&CAniCameraGetMatrixAniCamera7_next,
            (LPVOID)cast_pointer_function(CAniCameraGetMatrixAniCamera7_wrapper),
            (LPVOID)cast_pointer_function((float*(CAniCamera::*)(float))&CAniCamera::GetMatrixAniCamera) },
        {   (LPVOID)0x14050e5d0L,
            (LPVOID *)&CAniCameraIsLoadedAniCamera8_user,
            (LPVOID *)&CAniCameraIsLoadedAniCamera8_next,
            (LPVOID)cast_pointer_function(CAniCameraIsLoadedAniCamera8_wrapper),
            (LPVOID)cast_pointer_function((int64_t(CAniCamera::*)())&CAniCamera::IsLoadedAniCamera) },
        {   (LPVOID)0x14050efb0L,
            (LPVOID *)&CAniCameraLoadAniCamera9_user,
            (LPVOID *)&CAniCameraLoadAniCamera9_next,
            (LPVOID)cast_pointer_function(CAniCameraLoadAniCamera9_wrapper),
            (LPVOID)cast_pointer_function((void(CAniCamera::*)(char*))&CAniCamera::LoadAniCamera) },
        {   (LPVOID)0x14050ed60L,
            (LPVOID *)&CAniCameraPlayAniCamera10_user,
            (LPVOID *)&CAniCameraPlayAniCamera10_next,
            (LPVOID)cast_pointer_function(CAniCameraPlayAniCamera10_wrapper),
            (LPVOID)cast_pointer_function((int64_t(CAniCamera::*)(float**, float, int))&CAniCamera::PlayAniCamera) },
        {   (LPVOID)0x14050e810L,
            (LPVOID *)&CAniCameraReleaseAniCamera11_user,
            (LPVOID *)&CAniCameraReleaseAniCamera11_next,
            (LPVOID)cast_pointer_function(CAniCameraReleaseAniCamera11_wrapper),
            (LPVOID)cast_pointer_function((void(CAniCamera::*)())&CAniCamera::ReleaseAniCamera) },
        {   (LPVOID)0x14050ef00L,
            (LPVOID *)&CAniCameraSetExtCamAni12_user,
            (LPVOID *)&CAniCameraSetExtCamAni12_next,
            (LPVOID)cast_pointer_function(CAniCameraSetExtCamAni12_wrapper),
            (LPVOID)cast_pointer_function((int64_t(CAniCamera::*)())&CAniCamera::SetExtCamAni) },
        {   (LPVOID)0x14050ed20L,
            (LPVOID *)&CAniCameraSetNowFrame13_user,
            (LPVOID *)&CAniCameraSetNowFrame13_next,
            (LPVOID)cast_pointer_function(CAniCameraSetNowFrame13_wrapper),
            (LPVOID)cast_pointer_function((void(CAniCamera::*)(float))&CAniCamera::SetNowFrame) },
        {   (LPVOID)0x14050ec80L,
            (LPVOID *)&CAniCameraSetPrePlayCamera14_user,
            (LPVOID *)&CAniCameraSetPrePlayCamera14_next,
            (LPVOID)cast_pointer_function(CAniCameraSetPrePlayCamera14_wrapper),
            (LPVOID)cast_pointer_function((void(CAniCamera::*)(uint32_t, uint32_t, uint32_t, uint32_t))&CAniCamera::SetPrePlayCamera) },
        {   (LPVOID)0x14050e5c0L,
            (LPVOID *)&CAniCameradtor_CAniCamera15_user,
            (LPVOID *)&CAniCameradtor_CAniCamera15_next,
            (LPVOID)cast_pointer_function(CAniCameradtor_CAniCamera15_wrapper),
            (LPVOID)cast_pointer_function((int64_t(CAniCamera::*)())&CAniCamera::dtor_CAniCamera) },
        
        };
        
    }; // end namespace detail
END_ATF_NAMESPACE
