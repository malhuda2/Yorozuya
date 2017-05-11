// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "CAggroNode_info.hpp"


START_ATF_NAMESPACE
    namespace detail
    {
        info::CAggroNodector_CAggroNode2_ptr CAggroNodector_CAggroNode2_next(nullptr);
        info::CAggroNodector_CAggroNode2_clbk CAggroNodector_CAggroNode2_user(nullptr);
        info::CAggroNodeInit4_ptr CAggroNodeInit4_next(nullptr);
        info::CAggroNodeInit4_clbk CAggroNodeInit4_user(nullptr);
        info::CAggroNodeIsLive6_ptr CAggroNodeIsLive6_next(nullptr);
        info::CAggroNodeIsLive6_clbk CAggroNodeIsLive6_user(nullptr);
        info::CAggroNodeSet8_ptr CAggroNodeSet8_next(nullptr);
        info::CAggroNodeSet8_clbk CAggroNodeSet8_user(nullptr);
        info::CAggroNodeSetAggro10_ptr CAggroNodeSetAggro10_next(nullptr);
        info::CAggroNodeSetAggro10_clbk CAggroNodeSetAggro10_user(nullptr);
        
        void CAggroNodector_CAggroNode2_wrapper(struct CAggroNode* _this)
        {
           CAggroNodector_CAggroNode2_user(_this, CAggroNodector_CAggroNode2_next);
        };
        void CAggroNodeInit4_wrapper(struct CAggroNode* _this)
        {
           CAggroNodeInit4_user(_this, CAggroNodeInit4_next);
        };
        int CAggroNodeIsLive6_wrapper(struct CAggroNode* _this)
        {
           return CAggroNodeIsLive6_user(_this, CAggroNodeIsLive6_next);
        };
        void CAggroNodeSet8_wrapper(struct CAggroNode* _this, struct CCharacter* pCharacter)
        {
           CAggroNodeSet8_user(_this, pCharacter, CAggroNodeSet8_next);
        };
        void CAggroNodeSetAggro10_wrapper(struct CAggroNode* _this, int nDam, float fAdd, int nAttackType, unsigned int dwAttackSerial, int bOtherPlayerSupport, int bFirstAttack, int bTempSkill)
        {
           CAggroNodeSetAggro10_user(_this, nDam, fAdd, nAttackType, dwAttackSerial, bOtherPlayerSupport, bFirstAttack, bTempSkill, CAggroNodeSetAggro10_next);
        };
        
        hook_record CAggroNode_functions[] = {
        {   (LPVOID)0x1401616e0L,
            (LPVOID *)&CAggroNodector_CAggroNode2_user,
            (LPVOID *)&CAggroNodector_CAggroNode2_next,
            (LPVOID)cast_pointer_function(CAggroNodector_CAggroNode2_wrapper),
            (LPVOID)cast_pointer_function((void(CAggroNode::*)())&CAggroNode::ctor_CAggroNode) },
        {   (LPVOID)0x140161730L,
            (LPVOID *)&CAggroNodeInit4_user,
            (LPVOID *)&CAggroNodeInit4_next,
            (LPVOID)cast_pointer_function(CAggroNodeInit4_wrapper),
            (LPVOID)cast_pointer_function((void(CAggroNode::*)())&CAggroNode::Init) },
        {   (LPVOID)0x1400f00b0L,
            (LPVOID *)&CAggroNodeIsLive6_user,
            (LPVOID *)&CAggroNodeIsLive6_next,
            (LPVOID)cast_pointer_function(CAggroNodeIsLive6_wrapper),
            (LPVOID)cast_pointer_function((int(CAggroNode::*)())&CAggroNode::IsLive) },
        {   (LPVOID)0x140161810L,
            (LPVOID *)&CAggroNodeSet8_user,
            (LPVOID *)&CAggroNodeSet8_next,
            (LPVOID)cast_pointer_function(CAggroNodeSet8_wrapper),
            (LPVOID)cast_pointer_function((void(CAggroNode::*)(struct CCharacter*))&CAggroNode::Set) },
        {   (LPVOID)0x14015d5f0L,
            (LPVOID *)&CAggroNodeSetAggro10_user,
            (LPVOID *)&CAggroNodeSetAggro10_next,
            (LPVOID)cast_pointer_function(CAggroNodeSetAggro10_wrapper),
            (LPVOID)cast_pointer_function((void(CAggroNode::*)(int, float, int, unsigned int, int, int, int))&CAggroNode::SetAggro) },
        
        };
        
    }; // end namespace detail
END_ATF_NAMESPACE
