// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "_base_fld.hpp"


START_ATF_NAMESPACE
    struct  _PotionItem_fld : _base_fld
    {
        int m_bExist;
        char m_strModel[64];
        int m_nIconIDX;
        char m_strName[64];
        int m_nKindClt;
        int m_nFixPart;
        char m_strCivil[64];
        char m_strActTaget[64];
        int m_nPotionCheck;
        int m_nUseState;
        char m_strTargetEff[64];
        float m_fActDelay;
        int m_nDelayType;
        int m_nUseRange;
        int m_nLevelLim;
        int m_nUpLevelLim;
        int m_nPotionLim;
        int m_nMapCode[5];
        int m_nMoney;
        int m_nStdPrice;
        int m_nStdPoint;
        int m_nGoldPoint;
        int m_nKillPoint;
        int m_nProcPoint;
        int m_nStoragePrice;
        int m_bAbr;
        float m_fEquipSpeed;
        char m_strEffCode[64];
        int m_nEffArea;
        int m_nEffAreaVal;
        int m_bSell;
        int m_bExchange;
        int m_bGround;
        int m_bStoragePossible;
        int m_bUseableNormalAcc;
        int m_bUpgrade;
        char m_strTooltipIndex[64];
        int m_bIsCash;
        int m_nUsePCCash;
        int m_bIsTime;
    };
END_ATF_NAMESPACE
