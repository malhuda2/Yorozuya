// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "_mon_block.hpp"


START_ATF_NAMESPACE
    struct MonsterSetInfoData
    {
        char m_byLevel_ContSFTime[4][7];
        int m_nMonsterLostTargetDistance;
        float m_fMonsterForcePowerRate;
        char (*m_strRotMonBlk_Ar)[64];
        int m_nMonBlkCount;
        float m_fToleranceProbMax[7];
        int m_bLoad;
        int m_iMonsterLootRateSame;
        int m_iMonsterLootingRateUp[11];
        int m_iMonsterLootingRateDown[11];
    public:
        char GetLevelContSFTime(char byEffectCode, char byLevel)
        {
            using org_ptr = char (WINAPIV*)(struct MonsterSetInfoData*, char, char);
            return (org_ptr(0x14015d4a0L))(this, byEffectCode, byLevel);
        };
        int GetLostMonsterTargetDistance()
        {
            using org_ptr = int (WINAPIV*)(struct MonsterSetInfoData*);
            return (org_ptr(0x140155670L))(this);
        };
        float GetMaxToleranceProbMax(int nMonGrade)
        {
            using org_ptr = float (WINAPIV*)(struct MonsterSetInfoData*, int);
            return (org_ptr(0x14014bdf0L))(this, nMonGrade);
        };
        unsigned int GetMonsterDropRate(int iDiffLevel)
        {
            using org_ptr = unsigned int (WINAPIV*)(struct MonsterSetInfoData*, int);
            return (org_ptr(0x14015d510L))(this, iDiffLevel);
        };
        float GetMonsterForcePowerRate()
        {
            using org_ptr = float (WINAPIV*)(struct MonsterSetInfoData*);
            return (org_ptr(0x140161640L))(this);
        };
        void Init()
        {
            using org_ptr = void (WINAPIV*)(struct MonsterSetInfoData*);
            (org_ptr(0x14015d010L))(this);
        };
        bool IsRotateBlock(struct _mon_block* pBlock)
        {
            using org_ptr = bool (WINAPIV*)(struct MonsterSetInfoData*, struct _mon_block*);
            return (org_ptr(0x14015d110L))(this, pBlock);
        };
        int Load(char* strFileName)
        {
            using org_ptr = int (WINAPIV*)(struct MonsterSetInfoData*, char*);
            return (org_ptr(0x14015c7e0L))(this, strFileName);
        };
        MonsterSetInfoData()
        {
            using org_ptr = void (WINAPIV*)(struct MonsterSetInfoData*);
            (org_ptr(0x140161980L))(this);
        };
        void ctor_MonsterSetInfoData()
        {
            using org_ptr = void (WINAPIV*)(struct MonsterSetInfoData*);
            (org_ptr(0x140161980L))(this);
        };
    };
END_ATF_NAMESPACE
