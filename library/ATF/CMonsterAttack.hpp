// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>
#include <CAttack.hpp>


START_ATF_NAMESPACE
    struct CMonsterAttack : CAttack
    {
        struct CMonster *m_pAttMonster;
    public:
        void AttackMonsterForce(struct _attack_param* pParam);
        void AttackMonsterGen(struct _attack_param* pParam, bool bMustMiss);
        void AttackMonsterSkill(struct _attack_param* pParam);
        CMonsterAttack(struct CCharacter* pThis);
        void ctor_CMonsterAttack(struct CCharacter* pThis);
        float ModifyMonsterAttFc(float fAttFc);
        int _CalcMonSkillAttPnt();
    };    
    static_assert(ATF::checkSize<CMonsterAttack, 760>(), "CMonsterAttack");
END_ATF_NAMESPACE
