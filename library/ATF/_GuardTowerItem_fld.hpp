// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "_base_fld.hpp"


START_ATF_NAMESPACE
    struct  _GuardTowerItem_fld : _base_fld
    {
        struct __material
        {
            char strMaterialCode[64];
            int nMaterialNum;
        };
        char m_strModle[64];
        char m_strCharMeshID[64];
        char m_strName[64];
        char m_strCivil[64];
        int m_nLevelLim;
        int m_nUpLevelLim;
        int m_nExpertLim;
        int m_nExpTime;
        int m_nEffectGroup;
        int m_nIconIDX;
        int m_nLevel;
        int m_nHeight;
        int m_nWidth;
        float m_fAttGap;
        int m_nAttack_DP;
        int m_nGADst;
        int m_nGASpd;
        int m_nAttSklUnit;
        int m_nGAMinAF;
        int m_nGAMaxAF;
        int m_nGAMinSelProb;
        int m_nGAMaxSelProb;
        int m_nDefSklUnit;
        int m_nDefFc;
        float m_fDefGap;
        float m_fDefFacing;
        int m_nProperty;
        int m_nFireTol;
        int m_nWaterTol;
        int m_nSoilTol;
        int m_nWindTol;
        int m_nEff1Code;
        float m_fEff1Unit;
        int m_nEff2Code;
        float m_fEff2Unit;
        int m_nDuration;
        int m_nMaxHP;
        int m_nMoney;
        int m_nStdPrice;
        int m_nStdPoint;
        int m_nGoldPoint;
        int m_nKillPoint;
        int m_nProcPoint;
        int m_nStoragePrice;
        __material m_Material[3];
        int m_bSell;
        int m_bExchange;
        int m_bGround;
        int m_bStoragePossible;
        int m_bUseableNormalAcc;
        int m_bUpgrade;
        char m_strTooltipIndex[64];
        int m_nAttEffType;
        int m_nDefEffType;
        int m_bIsTime;
    };
END_ATF_NAMESPACE
