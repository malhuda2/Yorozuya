// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "_base_fld.hpp"
#include "_consume_item_list.hpp"
#include "_cont_param_list.hpp"


START_ATF_NAMESPACE
    struct  _force_fld : _base_fld
    {
        int m_nClass;
        int m_nIconIDX;
        int m_nMastIndex;
        char m_strMastKorName[64];
        char m_strMastEngName[64];
        char m_strKorName[64];
        char m_strEngName[64];
        int m_nLv;
        int m_bActivate;
        int m_bEnable;
        char m_strUsableRace[64];
        char m_strActableDst[64];
        char m_strGradeLimit[64];
        int m_nNeedMastIndex;
        char m_strFixWeapon[64];
        int m_bFixshield;
        int m_nSpecialType;
        int m_nNeedSpecialType;
        int m_nNeedHP;
        int m_nNeedFP;
        int m_nNeedSP;
        _consume_item_list m_ConsumeItemList[3];
        float m_fActDelay;
        int m_bCumulType;
        int m_nCumulCounter;
        int m_nNewEffCount;
        char m_strEffectCode[64];
        int m_bAttackable;
        int m_nProperty;
        int m_nEffectGroup;
        float m_fAttFormulaConstant;
        int m_nActDistance;
        char m_strRangeEffCode[64];
        int m_nTempEffectType;
        int m_nTempParamCode;
        float m_fTempValue[7];
        int m_nContEffectType;
        int m_nContAreaType;
        _cont_param_list m_ContParamList[5];
        int m_nContEffectSec[7];
        int m_nEffectClass;
    };
END_ATF_NAMESPACE
