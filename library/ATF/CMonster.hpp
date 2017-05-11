// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "$D3AACD222214ED4654A599D3E23032DE.hpp"
#include "CCharacter.hpp"
#include "CGameObject.hpp"
#include "CLootingMgr.hpp"
#include "CLuaSignalReActor.hpp"
#include "CMonsterAI.hpp"
#include "CMonsterAggroMgr.hpp"
#include "CMonsterAttack.hpp"
#include "CMonsterHierarchy.hpp"
#include "CMonsterSkill.hpp"
#include "CMonsterSkillPool.hpp"
#include "CPlayer.hpp"
#include "EmotionPresentationChecker.hpp"
#include "MonsterSFContDamageToleracne.hpp"
#include "MonsterStateData.hpp"
#include "_attack_param.hpp"
#include "_dummy_position.hpp"
#include "_event_loot_item.hpp"
#include "_event_respawn.hpp"
#include "_event_set.hpp"
#include "_force_fld.hpp"
#include "_mon_active.hpp"
#include "_monster_create_setdata.hpp"
#include "_monster_fld.hpp"
#include "_object_id.hpp"
#include "_skill_fld.hpp"


START_ATF_NAMESPACE
    struct  CMonster : CCharacter
    {
        enum MonsterEvent
        {
            eEvent_Damage = 0x0,
            eEvent_Help = 0x1,
            eEvent_MAx = 0x2,
        };
        enum _Monster_Kind_T
        {
            eAnimal = 0x0,
            ePlant = 0x1,
            eReptile = 0x2,
            eCrustacea = 0x3,
            eInsect = 0x4,
            eMechatronics = 0x5,
            eNoba = 0x6,
            eMutant = 0x7,
            eHuman = 0x8,
            eElf = 0x9,
            eHerodian = 0xA,
        };
        enum _Monster_AsistType
        {
            eSameKind = 0x0,
            eAllKind = 0x1,
        };
        enum _Monster_HelpMe_T
        {
            eOnlyAttack = 0x0,
            eSearchCharacter = 0x1,
        };
        enum _Monster_ViewArea_Effect_T
        {
            eVA_Eff_None = 0x0,
            eVA_Eff_Defence_Down = 0x1,
            eVA_Eff_Critical_Ext_Rate_Down = 0x2,
            eVA_Eff_DefSklUnit_Down = 0x3,
            eVA_Eff_All = 0x4,
        };
        bool m_bOper;
        bool m_bApparition;
        bool m_bDungeon;
        unsigned int m_dwLastDestroyTime;
        unsigned int m_dwDestroyNextTime;
        unsigned int m_dwLastRecoverTime;
        float m_fCreatePos[3];
        float m_fLookAtPos[3];
        bool m_bRobExp;
        bool m_bRewardExp;
        bool m_bStdItemLoot;
        _mon_active *m_pActiveRec;
        _monster_fld *m_pMonRec;
        _dummy_position *m_pDumPosition;
        int m_nHP;
        CLootingMgr m_LootMgr;
        CMonsterAggroMgr m_AggroMgr;
        CMonsterHierarchy m_MonHierarcy;
        MonsterSFContDamageToleracne m_SFContDamageTolerance;
        char m_byCreateDate[4];
        unsigned int m_LifeMax;
        unsigned int m_LifeCicle;
        $D3AACD222214ED4654A599D3E23032DE ___u23;
        EmotionPresentationChecker m_EmotionPresentationCheck;
        float m_fYAngle;
        float m_fStartLookAtPos[3];
        bool m_bRotateMonster;
        MonsterStateData m_MonsterStateData;
        MonsterStateData m_BeforeMonsterStateData;
        CCharacter *m_pTargetChar;
        CMonsterSkillPool m_MonsterSkillPool;
        int m_DefPart[5];
        int m_nEventItemNum;
        _event_loot_item m_eventItem[16];
        _event_respawn *m_pEventRespawn;
        _event_set *m_pEventSet;
        CMonsterAI m_AI;
        CLuaSignalReActor m_LuaSignalReActor;
    public:
        bool AddEventItem(struct _event_loot_item* pItem)
        {
            using org_ptr = bool (WINAPIV*)(struct CMonster*, struct _event_loot_item*);
            return (org_ptr(0x140142ab0L))(this, pItem);
        };
        int AssistSF(struct CCharacter* pDst, struct CMonsterSkill* pskill)
        {
            using org_ptr = int (WINAPIV*)(struct CMonster*, struct CCharacter*, struct CMonsterSkill*);
            return (org_ptr(0x14014ce30L))(this, pDst, pskill);
        };
        int Attack(struct CCharacter* pDst, struct CMonsterSkill* pskill)
        {
            using org_ptr = int (WINAPIV*)(struct CMonster*, struct CCharacter*, struct CMonsterSkill*);
            return (org_ptr(0x14014e4c0L))(this, pDst, pskill);
        };
        int AttackObject(int nDamage, struct CGameObject* pOri)
        {
            using org_ptr = int (WINAPIV*)(struct CMonster*, int, struct CGameObject*);
            return (org_ptr(0x140142a60L))(this, nDamage, pOri);
        };
        int AttackableHeight()
        {
            using org_ptr = int (WINAPIV*)(struct CMonster*);
            return (org_ptr(0x1401468d0L))(this);
        };
        void AutoRecover()
        {
            using org_ptr = void (WINAPIV*)(struct CMonster*);
            (org_ptr(0x140147440L))(this);
        };
        void BeTargeted(struct CCharacter* pSeacher)
        {
            using org_ptr = void (WINAPIV*)(struct CMonster*, struct CCharacter*);
            (org_ptr(0x1401427b0L))(this, pSeacher);
        };
        CMonster()
        {
            using org_ptr = void (WINAPIV*)(struct CMonster*);
            (org_ptr(0x1401414e0L))(this);
        };
        void ctor_CMonster()
        {
            using org_ptr = void (WINAPIV*)(struct CMonster*);
            (org_ptr(0x1401414e0L))(this);
        };
        void ChangeApparition(bool bApparition, unsigned int dwAfterKillTerm)
        {
            using org_ptr = void (WINAPIV*)(struct CMonster*, bool, unsigned int);
            (org_ptr(0x1401434e0L))(this, bApparition, dwAfterKillTerm);
        };
        void CheckAutoRecoverHP()
        {
            using org_ptr = void (WINAPIV*)(struct CMonster*);
            (org_ptr(0x140143370L))(this);
        };
        bool CheckDelayDestroy()
        {
            using org_ptr = bool (WINAPIV*)(struct CMonster*);
            return (org_ptr(0x1401432f0L))(this);
        };
        void CheckEmotionPresentation()
        {
            using org_ptr = void (WINAPIV*)(struct CMonster*);
            (org_ptr(0x140147fd0L))(this);
        };
        bool CheckEventEmotionPresentation(char byCheckType, struct CCharacter* pTarget)
        {
            using org_ptr = bool (WINAPIV*)(struct CMonster*, char, struct CCharacter*);
            return (org_ptr(0x140147f20L))(this, byCheckType, pTarget);
        };
        void CheckLootItem(struct CPlayer* pOwner)
        {
            using org_ptr = void (WINAPIV*)(struct CMonster*, struct CPlayer*);
            (org_ptr(0x140144120L))(this, pOwner);
        };
        void CheckMonsterRotate()
        {
            using org_ptr = void (WINAPIV*)(struct CMonster*);
            (org_ptr(0x140147b80L))(this);
        };
        bool CheckMonsterStateData()
        {
            using org_ptr = bool (WINAPIV*)(struct CMonster*);
            return (org_ptr(0x1401435c0L))(this);
        };
        bool CheckRespawnProcess()
        {
            using org_ptr = bool (WINAPIV*)(struct CMonster*);
            return (org_ptr(0x140143070L))(this);
        };
        void ClearEmotionPresentation()
        {
            using org_ptr = void (WINAPIV*)(struct CMonster*);
            (org_ptr(0x140147f80L))(this);
        };
        void Command_ChildMonDestroy(unsigned int dwAfterKillTerm)
        {
            using org_ptr = void (WINAPIV*)(struct CMonster*, unsigned int);
            (org_ptr(0x140143550L))(this, dwAfterKillTerm);
        };
        bool ConvertTargetPlayer(struct CPlayer* pTar)
        {
            using org_ptr = bool (WINAPIV*)(struct CMonster*, struct CPlayer*);
            return (org_ptr(0x1401428c0L))(this, pTar);
        };
        bool Create(struct _monster_create_setdata* pData)
        {
            using org_ptr = bool (WINAPIV*)(struct CMonster*, struct _monster_create_setdata*);
            return (org_ptr(0x140141c50L))(this, pData);
        };
        int CreateAI(int nType)
        {
            using org_ptr = int (WINAPIV*)(struct CMonster*, int);
            return (org_ptr(0x1401423d0L))(this, nType);
        };
        bool Destroy(char byDestroyCode, struct CGameObject* pAttObj)
        {
            using org_ptr = bool (WINAPIV*)(struct CMonster*, char, struct CGameObject*);
            return (org_ptr(0x1401424f0L))(this, byDestroyCode, pAttObj);
        };
        void DisableStdItemLoot()
        {
            using org_ptr = void (WINAPIV*)(struct CMonster*);
            (org_ptr(0x1402a7900L))(this);
        };
        bool FixTargetWhile(struct CCharacter* pkTarget, unsigned int dwMiliSecond)
        {
            using org_ptr = bool (WINAPIV*)(struct CMonster*, struct CCharacter*, unsigned int);
            return (org_ptr(0x140146f20L))(this, pkTarget, dwMiliSecond);
        };
        float GeEmotionImpStdTime()
        {
            using org_ptr = float (WINAPIV*)(struct CMonster*);
            return (org_ptr(0x1401558d0L))(this);
        };
        unsigned int GetAggroResetTime()
        {
            using org_ptr = unsigned int (WINAPIV*)(struct CMonster*);
            return (org_ptr(0x1401617d0L))(this);
        };
        unsigned int GetAggroShortTime()
        {
            using org_ptr = unsigned int (WINAPIV*)(struct CMonster*);
            return (org_ptr(0x140161790L))(this);
        };
        int GetAttackDP()
        {
            using org_ptr = int (WINAPIV*)(struct CMonster*);
            return (org_ptr(0x14014bb10L))(this);
        };
        int GetAttackPart()
        {
            using org_ptr = int (WINAPIV*)(struct CMonster*);
            return (org_ptr(0x14014ddc0L))(this);
        };
        float GetAttackRange()
        {
            using org_ptr = float (WINAPIV*)(struct CMonster*);
            return (org_ptr(0x140146660L))(this);
        };
        struct CCharacter* GetAttackTarget()
        {
            using org_ptr = struct CCharacter* (WINAPIV*)(struct CMonster*);
            return (org_ptr(0x140132a50L))(this);
        };
        float GetBonusInAreaAggro()
        {
            using org_ptr = float (WINAPIV*)(struct CMonster*);
            return (org_ptr(0x140161890L))(this);
        };
        char GetCombatState()
        {
            using org_ptr = char (WINAPIV*)(struct CMonster*);
            return (org_ptr(0x140143870L))(this);
        };
        int GetCritical_Exception_Rate()
        {
            using org_ptr = int (WINAPIV*)(struct CMonster*);
            return (org_ptr(0x14014bb70L))(this);
        };
        int GetDefFC(int nAttactPart, struct CCharacter* pAttChar, int* pnConvertPart)
        {
            using org_ptr = int (WINAPIV*)(struct CMonster*, int, struct CCharacter*, int*);
            return (org_ptr(0x140146790L))(this, nAttactPart, pAttChar, pnConvertPart);
        };
        float GetDefFacing(int nPart)
        {
            using org_ptr = float (WINAPIV*)(struct CMonster*, int);
            return (org_ptr(0x14014ba70L))(this, nPart);
        };
        float GetDefGap(int nPart)
        {
            using org_ptr = float (WINAPIV*)(struct CMonster*, int);
            return (org_ptr(0x14014ba20L))(this, nPart);
        };
        int GetDefSkill(bool bBackAttackDamage)
        {
            using org_ptr = int (WINAPIV*)(struct CMonster*, bool);
            return (org_ptr(0x1401466b0L))(this, bBackAttackDamage);
        };
        char GetEmotionState()
        {
            using org_ptr = char (WINAPIV*)(struct CMonster*);
            return (org_ptr(0x140143810L))(this);
        };
        int GetFireTol()
        {
            using org_ptr = int (WINAPIV*)(struct CMonster*);
            return (org_ptr(0x140145620L))(this);
        };
        int GetGenAttackProb(struct CCharacter* pDst, int nPart, bool bBackAttack)
        {
            using org_ptr = int (WINAPIV*)(struct CMonster*, struct CCharacter*, int, bool);
            return (org_ptr(0x140146da0L))(this, pDst, nPart, bBackAttack);
        };
        int GetHP()
        {
            using org_ptr = int (WINAPIV*)(struct CMonster*);
            return (org_ptr(0x1401461e0L))(this);
        };
        int GetHelpMeCase()
        {
            using org_ptr = int (WINAPIV*)(struct CMonster*);
            return (org_ptr(0x1401554f0L))(this);
        };
        int GetLevel()
        {
            using org_ptr = int (WINAPIV*)(struct CMonster*);
            return (org_ptr(0x14014b9e0L))(this);
        };
        int GetMaxDMGSFContCount()
        {
            using org_ptr = int (WINAPIV*)(struct CMonster*);
            return (org_ptr(0x140147050L))(this);
        };
        int GetMaxHP()
        {
            using org_ptr = int (WINAPIV*)(struct CMonster*);
            return (org_ptr(0x1401462a0L))(this);
        };
        int GetMob_AsistType()
        {
            using org_ptr = int (WINAPIV*)(struct CMonster*);
            return (org_ptr(0x140161590L))(this);
        };
        int GetMob_SubRace()
        {
            using org_ptr = int (WINAPIV*)(struct CMonster*);
            return (org_ptr(0x140161570L))(this);
        };
        uint16_t GetMonStateInfo()
        {
            using org_ptr = uint16_t (WINAPIV*)(struct CMonster*);
            return (org_ptr(0x140143720L))(this);
        };
        int GetMonsterGrade()
        {
            using org_ptr = int (WINAPIV*)(struct CMonster*);
            return (org_ptr(0x14014bfd0L))(this);
        };
        float GetMoveSpeed()
        {
            using org_ptr = float (WINAPIV*)(struct CMonster*);
            return (org_ptr(0x140142d80L))(this);
        };
        char GetMoveType()
        {
            using org_ptr = char (WINAPIV*)(struct CMonster*);
            return (org_ptr(0x1401437b0L))(this);
        };
        int GetMyDMGSFContCount()
        {
            using org_ptr = int (WINAPIV*)(struct CMonster*);
            return (org_ptr(0x1401470b0L))(this);
        };
        static unsigned int GetNewMonSerial()
        {
            using org_ptr = unsigned int (WINAPIV*)();
            return (org_ptr(0x14014bff0L))();
        };
        char* GetObjName()
        {
            using org_ptr = char* (WINAPIV*)(struct CMonster*);
            return (org_ptr(0x140142700L))(this);
        };
        int GetObjRace()
        {
            using org_ptr = int (WINAPIV*)(struct CMonster*);
            return (org_ptr(0x14014bb60L))(this);
        };
        int GetOffensiveType()
        {
            using org_ptr = int (WINAPIV*)(struct CMonster*);
            return (org_ptr(0x1401554d0L))(this);
        };
        struct CLuaSignalReActor* GetSignalReActor()
        {
            using org_ptr = struct CLuaSignalReActor* (WINAPIV*)(struct CMonster*);
            return (org_ptr(0x140406790L))(this);
        };
        float GetSkillDelayTime(struct CMonsterSkill* pSkill)
        {
            using org_ptr = float (WINAPIV*)(struct CMonster*, struct CMonsterSkill*);
            return (org_ptr(0x140142c90L))(this, pSkill);
        };
        int GetSoilTol()
        {
            using org_ptr = int (WINAPIV*)(struct CMonster*);
            return (org_ptr(0x140145820L))(this);
        };
        bool GetViewAngleCap(int nCapKind, int* nOutValue)
        {
            using org_ptr = bool (WINAPIV*)(struct CMonster*, int, int*);
            return (org_ptr(0x140146c20L))(this, nCapKind, nOutValue);
        };
        float GetVisualAngle()
        {
            using org_ptr = float (WINAPIV*)(struct CMonster*);
            return (org_ptr(0x14014caa0L))(this);
        };
        float GetVisualField()
        {
            using org_ptr = float (WINAPIV*)(struct CMonster*);
            return (org_ptr(0x14014bf80L))(this);
        };
        int GetWaterTol()
        {
            using org_ptr = int (WINAPIV*)(struct CMonster*);
            return (org_ptr(0x140145720L))(this);
        };
        float GetWeaponAdjust()
        {
            using org_ptr = float (WINAPIV*)(struct CMonster*);
            return (org_ptr(0x14014bac0L))(this);
        };
        int GetWeaponClass()
        {
            using org_ptr = int (WINAPIV*)(struct CMonster*);
            return (org_ptr(0x14014ba00L))(this);
        };
        float GetWidth()
        {
            using org_ptr = float (WINAPIV*)(struct CMonster*);
            return (org_ptr(0x140146610L))(this);
        };
        int GetWindTol()
        {
            using org_ptr = int (WINAPIV*)(struct CMonster*);
            return (org_ptr(0x140145920L))(this);
        };
        float GetYAngle()
        {
            using org_ptr = float (WINAPIV*)(struct CMonster*);
            return (org_ptr(0x1401438d0L))(this);
        };
        char GetYAngleByte()
        {
            using org_ptr = char (WINAPIV*)(struct CMonster*);
            return (org_ptr(0x14014cb50L))(this);
        };
        bool Init(struct _object_id* pID)
        {
            using org_ptr = bool (WINAPIV*)(struct CMonster*, struct _object_id*);
            return (org_ptr(0x140141970L))(this, pID);
        };
        char InsertSFContEffect(char byContCode, char byEffectCode, unsigned int dwEffectIndex, uint16_t wDurSec, char byLv, bool* pbUpMty, struct CCharacter* pActChar)
        {
            using org_ptr = char (WINAPIV*)(struct CMonster*, char, char, unsigned int, uint16_t, char, bool*, struct CCharacter*);
            return (org_ptr(0x1401475b0L))(this, byContCode, byEffectCode, dwEffectIndex, wDurSec, byLv, pbUpMty, pActChar);
        };
        bool IsAttackableInTown()
        {
            using org_ptr = bool (WINAPIV*)(struct CMonster*);
            return (org_ptr(0x14014bb30L))(this);
        };
        bool IsBeAttackedAble(bool bFirst)
        {
            using org_ptr = bool (WINAPIV*)(struct CMonster*, bool);
            return (org_ptr(0x1401468f0L))(this, bFirst);
        };
        bool IsBeDamagedAble(struct CCharacter* pAtter)
        {
            using org_ptr = bool (WINAPIV*)(struct CMonster*, struct CCharacter*);
            return (org_ptr(0x140146c80L))(this, pAtter);
        };
        bool IsBossMonster()
        {
            using org_ptr = bool (WINAPIV*)(struct CMonster*);
            return (org_ptr(0x14007d4e0L))(this);
        };
        bool IsMovable()
        {
            using org_ptr = bool (WINAPIV*)(struct CMonster*);
            return (org_ptr(0x140142e20L))(this);
        };
        int IsPreAttackAbleMon()
        {
            using org_ptr = int (WINAPIV*)(struct CMonster*);
            return (org_ptr(0x140155460L))(this);
        };
        bool IsRecvableContEffect()
        {
            using org_ptr = bool (WINAPIV*)(struct CMonster*);
            return (org_ptr(0x1401469a0L))(this);
        };
        bool IsRewardExp()
        {
            using org_ptr = bool (WINAPIV*)(struct CMonster*);
            return (org_ptr(0x14014bb40L))(this);
        };
        bool IsRoateMonster()
        {
            using org_ptr = bool (WINAPIV*)(struct CMonster*);
            return (org_ptr(0x1401555d0L))(this);
        };
        int IsValidPlayer()
        {
            using org_ptr = int (WINAPIV*)(struct CMonster*);
            return (org_ptr(0x140142e70L))(this);
        };
        bool IsViewArea(struct CCharacter* pTarget)
        {
            using org_ptr = bool (WINAPIV*)(struct CMonster*, struct CCharacter*);
            return (org_ptr(0x140146a20L))(this, pTarget);
        };
        void LinkEventRespawn(struct _event_respawn* pEventRespawn)
        {
            using org_ptr = void (WINAPIV*)(struct CMonster*, struct _event_respawn*);
            (org_ptr(0x1402a78d0L))(this, pEventRespawn);
        };
        void LinkEventSet(struct _event_set* pEventSet)
        {
            using org_ptr = void (WINAPIV*)(struct CMonster*, struct _event_set*);
            (org_ptr(0x1402aa080L))(this, pEventSet);
        };
        void Loop()
        {
            using org_ptr = void (WINAPIV*)(struct CMonster*);
            (org_ptr(0x140147c90L))(this);
        };
        void OutOfSec()
        {
            using org_ptr = void (WINAPIV*)(struct CMonster*);
            (org_ptr(0x14014b990L))(this);
        };
        bool RobbedHP(struct CCharacter* pDst, int nDecHP)
        {
            using org_ptr = bool (WINAPIV*)(struct CMonster*, struct CCharacter*, int);
            return (org_ptr(0x140142800L))(this, pDst, nDecHP);
        };
        bool SF_AllContHelpForceRemove_Once(struct CCharacter* pDstObj)
        {
            using org_ptr = bool (WINAPIV*)(struct CMonster*, struct CCharacter*);
            return (org_ptr(0x140145f20L))(this, pDstObj);
        };
        bool SF_AllContHelpSkillRemove_Once(struct CCharacter* pDstObj)
        {
            using org_ptr = bool (WINAPIV*)(struct CMonster*, struct CCharacter*);
            return (org_ptr(0x140145e10L))(this, pDstObj);
        };
        bool SF_HPInc_Once(struct CCharacter* pDstObj, float fEffectValue)
        {
            using org_ptr = bool (WINAPIV*)(struct CMonster*, struct CCharacter*, float);
            return (org_ptr(0x140145a20L))(this, pDstObj, fEffectValue);
        };
        bool SF_LateContDamageRemove_Once(struct CCharacter* pDstObj)
        {
            using org_ptr = bool (WINAPIV*)(struct CMonster*, struct CCharacter*);
            return (org_ptr(0x140146030L))(this, pDstObj);
        };
        bool SF_LateContHelpForceRemove_Once(struct CCharacter* pDstObj)
        {
            using org_ptr = bool (WINAPIV*)(struct CMonster*, struct CCharacter*);
            return (org_ptr(0x140145cc0L))(this, pDstObj);
        };
        bool SF_LateContHelpSkillRemove_Once(struct CCharacter* pDstObj)
        {
            using org_ptr = bool (WINAPIV*)(struct CMonster*, struct CCharacter*);
            return (org_ptr(0x140145b70L))(this, pDstObj);
        };
        struct CCharacter* SearchNearPlayer()
        {
            using org_ptr = struct CCharacter* (WINAPIV*)(struct CMonster*);
            return (org_ptr(0x14026f340L))(this);
        };
        void SendMsg_Assist_Force(char byErrCode, struct CCharacter* pDst, struct _force_fld* pForc_fld, int nSFLv)
        {
            using org_ptr = void (WINAPIV*)(struct CMonster*, char, struct CCharacter*, struct _force_fld*, int);
            (org_ptr(0x14014d690L))(this, byErrCode, pDst, pForc_fld, nSFLv);
        };
        void SendMsg_Assist_Skill(char byErrCode, int nEffectCode, struct CCharacter* pDst, struct _skill_fld* pSkill_fld, int nSFLv)
        {
            using org_ptr = void (WINAPIV*)(struct CMonster*, char, int, struct CCharacter*, struct _skill_fld*, int);
            (org_ptr(0x14014d800L))(this, byErrCode, nEffectCode, pDst, pSkill_fld, nSFLv);
        };
        void SendMsg_Attack_Force(struct CMonsterAttack* pAt)
        {
            using org_ptr = void (WINAPIV*)(struct CMonster*, struct CMonsterAttack*);
            (org_ptr(0x14014ee20L))(this, pAt);
        };
        void SendMsg_Attack_Gen(struct CMonsterAttack* pAT)
        {
            using org_ptr = void (WINAPIV*)(struct CMonster*, struct CMonsterAttack*);
            (org_ptr(0x14014ec70L))(this, pAT);
        };
        void SendMsg_Attack_Skill(struct CMonsterAttack* pAt)
        {
            using org_ptr = void (WINAPIV*)(struct CMonster*, struct CMonsterAttack*);
            (org_ptr(0x14014f040L))(this, pAt);
        };
        void SendMsg_Change_MonsterRotate()
        {
            using org_ptr = void (WINAPIV*)(struct CMonster*);
            (org_ptr(0x140148790L))(this);
        };
        void SendMsg_Change_MonsterState()
        {
            using org_ptr = void (WINAPIV*)(struct CMonster*);
            (org_ptr(0x140148700L))(this);
        };
        void SendMsg_Change_MonsterTarget(struct CCharacter* pChar)
        {
            using org_ptr = void (WINAPIV*)(struct CMonster*, struct CCharacter*);
            (org_ptr(0x140148820L))(this, pChar);
        };
        void SendMsg_Create()
        {
            using org_ptr = void (WINAPIV*)(struct CMonster*);
            (org_ptr(0x140148380L))(this);
        };
        void SendMsg_Destroy(char byDestroyCode)
        {
            using org_ptr = void (WINAPIV*)(struct CMonster*, char);
            (org_ptr(0x1401489d0L))(this, byDestroyCode);
        };
        void SendMsg_Emotion_Presentation(char bylhw, uint16_t wSubIndex, uint16_t wRandIndex, int nSendTargetIndex)
        {
            using org_ptr = void (WINAPIV*)(struct CMonster*, char, uint16_t, uint16_t, int);
            (org_ptr(0x1401488e0L))(this, bylhw, wSubIndex, wRandIndex, nSendTargetIndex);
        };
        void SendMsg_FixPosition(int n)
        {
            using org_ptr = void (WINAPIV*)(struct CMonster*, int);
            (org_ptr(0x140148490L))(this, n);
        };
        void SendMsg_Move()
        {
            using org_ptr = void (WINAPIV*)(struct CMonster*);
            (org_ptr(0x140148a70L))(this);
        };
        void SendMsg_RealMovePoint(int n)
        {
            using org_ptr = void (WINAPIV*)(struct CMonster*, int);
            (org_ptr(0x1401485c0L))(this, n);
        };
        void SetAttackTarget(struct CCharacter* p)
        {
            using org_ptr = void (WINAPIV*)(struct CMonster*, struct CCharacter*);
            (org_ptr(0x1401429c0L))(this, p);
        };
        void SetCombatState(char byCombatState)
        {
            using org_ptr = void (WINAPIV*)(struct CMonster*, char);
            (org_ptr(0x140143830L))(this, byCombatState);
        };
        int SetDamage(int nDamage, struct CCharacter* pDst, int nDstLv, bool bCrt, int nAttackType, unsigned int dwAttackSerial, bool bJadeReturn)
        {
            using org_ptr = int (WINAPIV*)(struct CMonster*, int, struct CCharacter*, int, bool, int, unsigned int, bool);
            return (org_ptr(0x1401462d0L))(this, nDamage, pDst, nDstLv, bCrt, nAttackType, dwAttackSerial, bJadeReturn);
        };
        void SetDefPart(struct _monster_fld* pRecordSet)
        {
            using org_ptr = void (WINAPIV*)(struct CMonster*, struct _monster_fld*);
            (org_ptr(0x140142b40L))(this, pRecordSet);
        };
        void SetEmotionState(char byEmotionState)
        {
            using org_ptr = void (WINAPIV*)(struct CMonster*, char);
            (org_ptr(0x1401437d0L))(this, byEmotionState);
        };
        bool SetHP(int nHP, bool bOver)
        {
            using org_ptr = bool (WINAPIV*)(struct CMonster*, int, bool);
            return (org_ptr(0x140146200L))(this, nHP, bOver);
        };
        void SetMoveType(char bMoveType)
        {
            using org_ptr = void (WINAPIV*)(struct CMonster*, char);
            (org_ptr(0x140143770L))(this, bMoveType);
        };
        void SetStun(bool bStun)
        {
            using org_ptr = void (WINAPIV*)(struct CMonster*, bool);
            (org_ptr(0x140146130L))(this, bStun);
        };
        void UpdateLookAtPos(float* vLookAt)
        {
            using org_ptr = void (WINAPIV*)(struct CMonster*, float*);
            (org_ptr(0x140148220L))(this, vLookAt);
        };
        void UpdateLookAtPos()
        {
            using org_ptr = void (WINAPIV*)(struct CMonster*);
            (org_ptr(0x140148090L))(this);
        };
        void UpdateSFCont()
        {
            using org_ptr = void (WINAPIV*)(struct CMonster*);
            (org_ptr(0x140147170L))(this);
        };
        int _AssistSF_Cont_Dmg(struct CCharacter* pDst, struct CMonsterSkill* pskill)
        {
            using org_ptr = int (WINAPIV*)(struct CMonster*, struct CCharacter*, struct CMonsterSkill*);
            return (org_ptr(0x14014cf60L))(this, pDst, pskill);
        };
        int _AssistSF_Cont_Support(struct CCharacter* pDst, struct CMonsterSkill* pskill)
        {
            using org_ptr = int (WINAPIV*)(struct CMonster*, struct CCharacter*, struct CMonsterSkill*);
            return (org_ptr(0x14014cf10L))(this, pDst, pskill);
        };
        int _AssistSF_Cont_Temp(struct CCharacter* pDst, struct CMonsterSkill* pskill)
        {
            using org_ptr = int (WINAPIV*)(struct CMonster*, struct CCharacter*, struct CMonsterSkill*);
            return (org_ptr(0x14014d330L))(this, pDst, pskill);
        };
        void _BossBirthWriteLog()
        {
            using org_ptr = void (WINAPIV*)(struct CMonster*);
            (org_ptr(0x140143910L))(this);
        };
        void _BossDieWriteLog_End()
        {
            using org_ptr = void (WINAPIV*)(struct CMonster*);
            (org_ptr(0x1401440c0L))(this);
        };
        void _BossDieWriteLog_Start(char byDestroyCode, struct CGameObject* pAttObj)
        {
            using org_ptr = void (WINAPIV*)(struct CMonster*, char, struct CGameObject*);
            (org_ptr(0x1401439d0L))(this, byDestroyCode, pAttObj);
        };
        static void _DestroySDM()
        {
            using org_ptr = void (WINAPIV*)();
            (org_ptr(0x140149460L))();
        };
        static void _InitSDM()
        {
            using org_ptr = void (WINAPIV*)();
            (org_ptr(0x1401491a0L))();
        };
        static void _InitSDM_LootTBL()
        {
            using org_ptr = void (WINAPIV*)();
            (org_ptr(0x1401492b0L))();
        };
        bool _LootItem_EventSet(struct CPlayer* pOwner)
        {
            using org_ptr = bool (WINAPIV*)(struct CMonster*, struct CPlayer*);
            return (org_ptr(0x140144ff0L))(this, pOwner);
        };
        bool _LootItem_Qst(struct CPlayer* pOwner)
        {
            using org_ptr = bool (WINAPIV*)(struct CMonster*, struct CPlayer*);
            return (org_ptr(0x140145390L))(this, pOwner);
        };
        bool _LootItem_Rwp(struct CPlayer* pOwner)
        {
            using org_ptr = bool (WINAPIV*)(struct CMonster*, struct CPlayer*);
            return (org_ptr(0x140144d90L))(this, pOwner);
        };
        bool _LootItem_Std(struct CPlayer* pOwner)
        {
            using org_ptr = bool (WINAPIV*)(struct CMonster*, struct CPlayer*);
            return (org_ptr(0x140144240L))(this, pOwner);
        };
        void make_force_attack_param(struct CCharacter* pDst, struct CMonsterSkill* pSkill, struct _attack_param* pAP)
        {
            using org_ptr = void (WINAPIV*)(struct CMonster*, struct CCharacter*, struct CMonsterSkill*, struct _attack_param*);
            (org_ptr(0x14014e0b0L))(this, pDst, pSkill, pAP);
        };
        void make_gen_attack_param(struct CCharacter* pDst, struct _attack_param* pAP)
        {
            using org_ptr = void (WINAPIV*)(struct CMonster*, struct CCharacter*, struct _attack_param*);
            (org_ptr(0x14014de80L))(this, pDst, pAP);
        };
        bool make_skill_attack_param(struct CCharacter* pDst, struct CMonsterSkill* pSkill, int nEffectType, struct _attack_param* pAP)
        {
            using org_ptr = bool (WINAPIV*)(struct CMonster*, struct CCharacter*, struct CMonsterSkill*, int, struct _attack_param*);
            return (org_ptr(0x14014e260L))(this, pDst, pSkill, nEffectType, pAP);
        };
        ~CMonster()
        {
            using org_ptr = void (WINAPIV*)(struct CMonster*);
            (org_ptr(0x140141780L))(this);
        };
        void dtor_CMonster()
        {
            using org_ptr = void (WINAPIV*)(struct CMonster*);
            (org_ptr(0x140141780L))(this);
        };
    };
END_ATF_NAMESPACE
