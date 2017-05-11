// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "CDummyDraw_info.hpp"


START_ATF_NAMESPACE
    namespace detail
    {
        info::CDummyDrawctor_CDummyDraw2_ptr CDummyDrawctor_CDummyDraw2_next(nullptr);
        info::CDummyDrawctor_CDummyDraw2_clbk CDummyDrawctor_CDummyDraw2_user(nullptr);
        info::CDummyDrawCalcAbsExt4_ptr CDummyDrawCalcAbsExt4_next(nullptr);
        info::CDummyDrawCalcAbsExt4_clbk CDummyDrawCalcAbsExt4_user(nullptr);
        info::CDummyDrawCalcScrExt6_ptr CDummyDrawCalcScrExt6_next(nullptr);
        info::CDummyDrawCalcScrExt6_clbk CDummyDrawCalcScrExt6_user(nullptr);
        info::CDummyDrawDeletePen8_ptr CDummyDrawDeletePen8_next(nullptr);
        info::CDummyDrawDeletePen8_clbk CDummyDrawDeletePen8_user(nullptr);
        info::CDummyDrawctor_Draw10_ptr CDummyDrawctor_Draw10_next(nullptr);
        info::CDummyDrawctor_Draw10_clbk CDummyDrawctor_Draw10_user(nullptr);
        info::CDummyDrawInitPen12_ptr CDummyDrawInitPen12_next(nullptr);
        info::CDummyDrawInitPen12_clbk CDummyDrawInitPen12_user(nullptr);
        info::CDummyDrawSetDummyPoint14_ptr CDummyDrawSetDummyPoint14_next(nullptr);
        info::CDummyDrawSetDummyPoint14_clbk CDummyDrawSetDummyPoint14_user(nullptr);
        info::CDummyDrawSetDummyRange16_ptr CDummyDrawSetDummyRange16_next(nullptr);
        info::CDummyDrawSetDummyRange16_clbk CDummyDrawSetDummyRange16_user(nullptr);
        info::CDummyDrawdtor_CDummyDraw22_ptr CDummyDrawdtor_CDummyDraw22_next(nullptr);
        info::CDummyDrawdtor_CDummyDraw22_clbk CDummyDrawdtor_CDummyDraw22_user(nullptr);
        
        void CDummyDrawctor_CDummyDraw2_wrapper(struct CDummyDraw* _this)
        {
           CDummyDrawctor_CDummyDraw2_user(_this, CDummyDrawctor_CDummyDraw2_next);
        };
        bool CDummyDrawCalcAbsExt4_wrapper(struct CDummyDraw* _this, struct CRect* prcArea)
        {
           return CDummyDrawCalcAbsExt4_user(_this, prcArea, CDummyDrawCalcAbsExt4_next);
        };
        void CDummyDrawCalcScrExt6_wrapper(struct CDummyDraw* _this, struct CRect* prcArea, struct CRect* prcWnd)
        {
           CDummyDrawCalcScrExt6_user(_this, prcArea, prcWnd, CDummyDrawCalcScrExt6_next);
        };
        void CDummyDrawDeletePen8_wrapper()
        {
           CDummyDrawDeletePen8_user(CDummyDrawDeletePen8_next);
        };
        HRESULT CDummyDrawctor_Draw10_wrapper(struct CDummyDraw* _this, struct CSurface* pSF, struct CRect* prcArea)
        {
           return CDummyDrawctor_Draw10_user(_this, pSF, prcArea, CDummyDrawctor_Draw10_next);
        };
        void CDummyDrawInitPen12_wrapper()
        {
           CDummyDrawInitPen12_user(CDummyDrawInitPen12_next);
        };
        void CDummyDrawSetDummyPoint14_wrapper(struct CDummyDraw* _this, struct CMapData* pMap, float* pCenterPos, int nType, struct CRect* prcWnd)
        {
           CDummyDrawSetDummyPoint14_user(_this, pMap, pCenterPos, nType, prcWnd, CDummyDrawSetDummyPoint14_next);
        };
        void CDummyDrawSetDummyRange16_wrapper(struct CDummyDraw* _this, struct CMapData* pMap, float* pLT, float* pRB, float* pRT, float* pLB, int nType, struct CRect* prcWnd)
        {
           CDummyDrawSetDummyRange16_user(_this, pMap, pLT, pRB, pRT, pLB, nType, prcWnd, CDummyDrawSetDummyRange16_next);
        };
        void CDummyDrawdtor_CDummyDraw22_wrapper(struct CDummyDraw* _this)
        {
           CDummyDrawdtor_CDummyDraw22_user(_this, CDummyDrawdtor_CDummyDraw22_next);
        };
        
        hook_record CDummyDraw_functions[] = {
        {   (LPVOID)0x14019c510L,
            (LPVOID *)&CDummyDrawctor_CDummyDraw2_user,
            (LPVOID *)&CDummyDrawctor_CDummyDraw2_next,
            (LPVOID)cast_pointer_function(CDummyDrawctor_CDummyDraw2_wrapper),
            (LPVOID)cast_pointer_function((void(CDummyDraw::*)())&CDummyDraw::ctor_CDummyDraw) },
        {   (LPVOID)0x14019ca00L,
            (LPVOID *)&CDummyDrawCalcAbsExt4_user,
            (LPVOID *)&CDummyDrawCalcAbsExt4_next,
            (LPVOID)cast_pointer_function(CDummyDrawCalcAbsExt4_wrapper),
            (LPVOID)cast_pointer_function((bool(CDummyDraw::*)(struct CRect*))&CDummyDraw::CalcAbsExt) },
        {   (LPVOID)0x14019cbf0L,
            (LPVOID *)&CDummyDrawCalcScrExt6_user,
            (LPVOID *)&CDummyDrawCalcScrExt6_next,
            (LPVOID)cast_pointer_function(CDummyDrawCalcScrExt6_wrapper),
            (LPVOID)cast_pointer_function((void(CDummyDraw::*)(struct CRect*, struct CRect*))&CDummyDraw::CalcScrExt) },
        {   (LPVOID)0x14019d160L,
            (LPVOID *)&CDummyDrawDeletePen8_user,
            (LPVOID *)&CDummyDrawDeletePen8_next,
            (LPVOID)cast_pointer_function(CDummyDrawDeletePen8_wrapper),
            (LPVOID)cast_pointer_function((void(*)())&CDummyDraw::DeletePen) },
        {   (LPVOID)0x14019cd40L,
            (LPVOID *)&CDummyDrawctor_Draw10_user,
            (LPVOID *)&CDummyDrawctor_Draw10_next,
            (LPVOID)cast_pointer_function(CDummyDrawctor_Draw10_wrapper),
            (LPVOID)cast_pointer_function((HRESULT(CDummyDraw::*)(struct CSurface*, struct CRect*))&CDummyDraw::Draw) },
        {   (LPVOID)0x14019d050L,
            (LPVOID *)&CDummyDrawInitPen12_user,
            (LPVOID *)&CDummyDrawInitPen12_next,
            (LPVOID)cast_pointer_function(CDummyDrawInitPen12_wrapper),
            (LPVOID)cast_pointer_function((void(*)())&CDummyDraw::InitPen) },
        {   (LPVOID)0x14019c560L,
            (LPVOID *)&CDummyDrawSetDummyPoint14_user,
            (LPVOID *)&CDummyDrawSetDummyPoint14_next,
            (LPVOID)cast_pointer_function(CDummyDrawSetDummyPoint14_wrapper),
            (LPVOID)cast_pointer_function((void(CDummyDraw::*)(struct CMapData*, float*, int, struct CRect*))&CDummyDraw::SetDummyPoint) },
        {   (LPVOID)0x14019c7b0L,
            (LPVOID *)&CDummyDrawSetDummyRange16_user,
            (LPVOID *)&CDummyDrawSetDummyRange16_next,
            (LPVOID)cast_pointer_function(CDummyDrawSetDummyRange16_wrapper),
            (LPVOID)cast_pointer_function((void(CDummyDraw::*)(struct CMapData*, float*, float*, float*, float*, int, struct CRect*))&CDummyDraw::SetDummyRange) },
        {   (LPVOID)0x14019c540L,
            (LPVOID *)&CDummyDrawdtor_CDummyDraw22_user,
            (LPVOID *)&CDummyDrawdtor_CDummyDraw22_next,
            (LPVOID)cast_pointer_function(CDummyDrawdtor_CDummyDraw22_wrapper),
            (LPVOID)cast_pointer_function((void(CDummyDraw::*)())&CDummyDraw::dtor_CDummyDraw) },
        
        };
        
    }; // end namespace detail
END_ATF_NAMESPACE
