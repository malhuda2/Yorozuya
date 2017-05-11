// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "CMonsterAI_info.hpp"


START_ATF_NAMESPACE
    namespace detail
    {
        info::CMonsterAIctor_CMonsterAI2_ptr CMonsterAIctor_CMonsterAI2_next(nullptr);
        info::CMonsterAIctor_CMonsterAI2_clbk CMonsterAIctor_CMonsterAI2_user(nullptr);
        info::CMonsterAIGetBattleModeTime4_ptr CMonsterAIGetBattleModeTime4_next(nullptr);
        info::CMonsterAIGetBattleModeTime4_clbk CMonsterAIGetBattleModeTime4_user(nullptr);
        info::CMonsterAIGetPathFinder6_ptr CMonsterAIGetPathFinder6_next(nullptr);
        info::CMonsterAIGetPathFinder6_clbk CMonsterAIGetPathFinder6_user(nullptr);
        info::CMonsterAIGetTimer8_ptr CMonsterAIGetTimer8_next(nullptr);
        info::CMonsterAIGetTimer8_clbk CMonsterAIGetTimer8_user(nullptr);
        info::CMonsterAIInit10_ptr CMonsterAIInit10_next(nullptr);
        info::CMonsterAIInit10_clbk CMonsterAIInit10_user(nullptr);
        info::CMonsterAISetBattleModeTime12_ptr CMonsterAISetBattleModeTime12_next(nullptr);
        info::CMonsterAISetBattleModeTime12_clbk CMonsterAISetBattleModeTime12_user(nullptr);
        info::CMonsterAISetMyData14_ptr CMonsterAISetMyData14_next(nullptr);
        info::CMonsterAISetMyData14_clbk CMonsterAISetMyData14_user(nullptr);
        info::CMonsterAIdtor_CMonsterAI19_ptr CMonsterAIdtor_CMonsterAI19_next(nullptr);
        info::CMonsterAIdtor_CMonsterAI19_clbk CMonsterAIdtor_CMonsterAI19_user(nullptr);
        
        void CMonsterAIctor_CMonsterAI2_wrapper(struct CMonsterAI* _this)
        {
           CMonsterAIctor_CMonsterAI2_user(_this, CMonsterAIctor_CMonsterAI2_next);
        };
        unsigned int CMonsterAIGetBattleModeTime4_wrapper(struct CMonsterAI* _this)
        {
           return CMonsterAIGetBattleModeTime4_user(_this, CMonsterAIGetBattleModeTime4_next);
        };
        struct CPathMgr* CMonsterAIGetPathFinder6_wrapper(struct CMonsterAI* _this)
        {
           return CMonsterAIGetPathFinder6_user(_this, CMonsterAIGetPathFinder6_next);
        };
        struct SF_Timer* CMonsterAIGetTimer8_wrapper(struct CMonsterAI* _this, int nIndex)
        {
           return CMonsterAIGetTimer8_user(_this, nIndex, CMonsterAIGetTimer8_next);
        };
        void CMonsterAIInit10_wrapper(struct CMonsterAI* _this)
        {
           CMonsterAIInit10_user(_this, CMonsterAIInit10_next);
        };
        void CMonsterAISetBattleModeTime12_wrapper(struct CMonsterAI* _this, unsigned int dwTempBattleModeTime)
        {
           CMonsterAISetBattleModeTime12_user(_this, dwTempBattleModeTime, CMonsterAISetBattleModeTime12_next);
        };
        int CMonsterAISetMyData14_wrapper(struct CMonsterAI* _this, struct UsStateTBL* pStateTBL, void* pObject)
        {
           return CMonsterAISetMyData14_user(_this, pStateTBL, pObject, CMonsterAISetMyData14_next);
        };
        void CMonsterAIdtor_CMonsterAI19_wrapper(struct CMonsterAI* _this)
        {
           CMonsterAIdtor_CMonsterAI19_user(_this, CMonsterAIdtor_CMonsterAI19_next);
        };
        
        hook_record CMonsterAI_functions[] = {
        {   (LPVOID)0x14014f950L,
            (LPVOID *)&CMonsterAIctor_CMonsterAI2_user,
            (LPVOID *)&CMonsterAIctor_CMonsterAI2_next,
            (LPVOID)cast_pointer_function(CMonsterAIctor_CMonsterAI2_wrapper),
            (LPVOID)cast_pointer_function((void(CMonsterAI::*)())&CMonsterAI::ctor_CMonsterAI) },
        {   (LPVOID)0x140155890L,
            (LPVOID *)&CMonsterAIGetBattleModeTime4_user,
            (LPVOID *)&CMonsterAIGetBattleModeTime4_next,
            (LPVOID)cast_pointer_function(CMonsterAIGetBattleModeTime4_wrapper),
            (LPVOID)cast_pointer_function((unsigned int(CMonsterAI::*)())&CMonsterAI::GetBattleModeTime) },
        {   (LPVOID)0x1401555b0L,
            (LPVOID *)&CMonsterAIGetPathFinder6_user,
            (LPVOID *)&CMonsterAIGetPathFinder6_next,
            (LPVOID)cast_pointer_function(CMonsterAIGetPathFinder6_wrapper),
            (LPVOID)cast_pointer_function((struct CPathMgr*(CMonsterAI::*)())&CMonsterAI::GetPathFinder) },
        {   (LPVOID)0x14014fb30L,
            (LPVOID *)&CMonsterAIGetTimer8_user,
            (LPVOID *)&CMonsterAIGetTimer8_next,
            (LPVOID)cast_pointer_function(CMonsterAIGetTimer8_wrapper),
            (LPVOID)cast_pointer_function((struct SF_Timer*(CMonsterAI::*)(int))&CMonsterAI::GetTimer) },
        {   (LPVOID)0x14014fac0L,
            (LPVOID *)&CMonsterAIInit10_user,
            (LPVOID *)&CMonsterAIInit10_next,
            (LPVOID)cast_pointer_function(CMonsterAIInit10_wrapper),
            (LPVOID)cast_pointer_function((void(CMonsterAI::*)())&CMonsterAI::Init) },
        {   (LPVOID)0x1401555f0L,
            (LPVOID *)&CMonsterAISetBattleModeTime12_user,
            (LPVOID *)&CMonsterAISetBattleModeTime12_next,
            (LPVOID)cast_pointer_function(CMonsterAISetBattleModeTime12_wrapper),
            (LPVOID)cast_pointer_function((void(CMonsterAI::*)(unsigned int))&CMonsterAI::SetBattleModeTime) },
        {   (LPVOID)0x14014fb70L,
            (LPVOID *)&CMonsterAISetMyData14_user,
            (LPVOID *)&CMonsterAISetMyData14_next,
            (LPVOID)cast_pointer_function(CMonsterAISetMyData14_wrapper),
            (LPVOID)cast_pointer_function((int(CMonsterAI::*)(struct UsStateTBL*, void*))&CMonsterAI::SetMyData) },
        {   (LPVOID)0x14014fa30L,
            (LPVOID *)&CMonsterAIdtor_CMonsterAI19_user,
            (LPVOID *)&CMonsterAIdtor_CMonsterAI19_next,
            (LPVOID)cast_pointer_function(CMonsterAIdtor_CMonsterAI19_wrapper),
            (LPVOID)cast_pointer_function((void(CMonsterAI::*)())&CMonsterAI::dtor_CMonsterAI) },
        
        };
        
    }; // end namespace detail
END_ATF_NAMESPACE
