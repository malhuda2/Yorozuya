// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "CSetItemType_info.hpp"


START_ATF_NAMESPACE
    namespace detail
    {
        info::CSetItemTypector_CSetItemType2_ptr CSetItemTypector_CSetItemType2_next(nullptr);
        info::CSetItemTypector_CSetItemType2_clbk CSetItemTypector_CSetItemType2_user(nullptr);
        info::CSetItemTypeClass_Init4_ptr CSetItemTypeClass_Init4_next(nullptr);
        info::CSetItemTypeClass_Init4_clbk CSetItemTypeClass_Init4_user(nullptr);
        info::CSetItemTypeGetEffectTypeCount6_ptr CSetItemTypeGetEffectTypeCount6_next(nullptr);
        info::CSetItemTypeGetEffectTypeCount6_clbk CSetItemTypeGetEffectTypeCount6_user(nullptr);
        info::CSetItemTypeGetsi_interpret8_ptr CSetItemTypeGetsi_interpret8_next(nullptr);
        info::CSetItemTypeGetsi_interpret8_clbk CSetItemTypeGetsi_interpret8_user(nullptr);
        info::CSetItemTypeSetItemType_Init10_ptr CSetItemTypeSetItemType_Init10_next(nullptr);
        info::CSetItemTypeSetItemType_Init10_clbk CSetItemTypeSetItemType_Init10_user(nullptr);
        info::CSetItemTypeSetItemType_UnInit12_ptr CSetItemTypeSetItemType_UnInit12_next(nullptr);
        info::CSetItemTypeSetItemType_UnInit12_clbk CSetItemTypeSetItemType_UnInit12_user(nullptr);
        info::CSetItemTypedtor_CSetItemType14_ptr CSetItemTypedtor_CSetItemType14_next(nullptr);
        info::CSetItemTypedtor_CSetItemType14_clbk CSetItemTypedtor_CSetItemType14_user(nullptr);
        
        void CSetItemTypector_CSetItemType2_wrapper(struct CSetItemType* _this)
        {
           CSetItemTypector_CSetItemType2_user(_this, CSetItemTypector_CSetItemType2_next);
        };
        void CSetItemTypeClass_Init4_wrapper(struct CSetItemType* _this)
        {
           CSetItemTypeClass_Init4_user(_this, CSetItemTypeClass_Init4_next);
        };
        int CSetItemTypeGetEffectTypeCount6_wrapper(struct CSetItemType* _this)
        {
           return CSetItemTypeGetEffectTypeCount6_user(_this, CSetItemTypeGetEffectTypeCount6_next);
        };
        struct si_interpret* CSetItemTypeGetsi_interpret8_wrapper(struct CSetItemType* _this, int set_pos)
        {
           return CSetItemTypeGetsi_interpret8_user(_this, set_pos, CSetItemTypeGetsi_interpret8_next);
        };
        bool CSetItemTypeSetItemType_Init10_wrapper(struct CSetItemType* _this, struct CRecordData* prd)
        {
           return CSetItemTypeSetItemType_Init10_user(_this, prd, CSetItemTypeSetItemType_Init10_next);
        };
        bool CSetItemTypeSetItemType_UnInit12_wrapper(struct CSetItemType* _this)
        {
           return CSetItemTypeSetItemType_UnInit12_user(_this, CSetItemTypeSetItemType_UnInit12_next);
        };
        void CSetItemTypedtor_CSetItemType14_wrapper(struct CSetItemType* _this)
        {
           CSetItemTypedtor_CSetItemType14_user(_this, CSetItemTypedtor_CSetItemType14_next);
        };
        
        hook_record CSetItemType_functions[] = {
        {   (LPVOID)0x1402e1cb0L,
            (LPVOID *)&CSetItemTypector_CSetItemType2_user,
            (LPVOID *)&CSetItemTypector_CSetItemType2_next,
            (LPVOID)cast_pointer_function(CSetItemTypector_CSetItemType2_wrapper),
            (LPVOID)cast_pointer_function((void(CSetItemType::*)())&CSetItemType::ctor_CSetItemType) },
        {   (LPVOID)0x1402e1fc0L,
            (LPVOID *)&CSetItemTypeClass_Init4_user,
            (LPVOID *)&CSetItemTypeClass_Init4_next,
            (LPVOID)cast_pointer_function(CSetItemTypeClass_Init4_wrapper),
            (LPVOID)cast_pointer_function((void(CSetItemType::*)())&CSetItemType::Class_Init) },
        {   (LPVOID)0x1402e2090L,
            (LPVOID *)&CSetItemTypeGetEffectTypeCount6_user,
            (LPVOID *)&CSetItemTypeGetEffectTypeCount6_next,
            (LPVOID)cast_pointer_function(CSetItemTypeGetEffectTypeCount6_wrapper),
            (LPVOID)cast_pointer_function((int(CSetItemType::*)())&CSetItemType::GetEffectTypeCount) },
        {   (LPVOID)0x1402e1f70L,
            (LPVOID *)&CSetItemTypeGetsi_interpret8_user,
            (LPVOID *)&CSetItemTypeGetsi_interpret8_next,
            (LPVOID)cast_pointer_function(CSetItemTypeGetsi_interpret8_wrapper),
            (LPVOID)cast_pointer_function((struct si_interpret*(CSetItemType::*)(int))&CSetItemType::Getsi_interpret) },
        {   (LPVOID)0x1402e1d40L,
            (LPVOID *)&CSetItemTypeSetItemType_Init10_user,
            (LPVOID *)&CSetItemTypeSetItemType_Init10_next,
            (LPVOID)cast_pointer_function(CSetItemTypeSetItemType_Init10_wrapper),
            (LPVOID)cast_pointer_function((bool(CSetItemType::*)(struct CRecordData*))&CSetItemType::SetItemType_Init) },
        {   (LPVOID)0x1402e1f30L,
            (LPVOID *)&CSetItemTypeSetItemType_UnInit12_user,
            (LPVOID *)&CSetItemTypeSetItemType_UnInit12_next,
            (LPVOID)cast_pointer_function(CSetItemTypeSetItemType_UnInit12_wrapper),
            (LPVOID)cast_pointer_function((bool(CSetItemType::*)())&CSetItemType::SetItemType_UnInit) },
        {   (LPVOID)0x1402e1d00L,
            (LPVOID *)&CSetItemTypedtor_CSetItemType14_user,
            (LPVOID *)&CSetItemTypedtor_CSetItemType14_next,
            (LPVOID)cast_pointer_function(CSetItemTypedtor_CSetItemType14_wrapper),
            (LPVOID)cast_pointer_function((void(CSetItemType::*)())&CSetItemType::dtor_CSetItemType) },
        
        };
        
    }; // end namespace detail
END_ATF_NAMESPACE
