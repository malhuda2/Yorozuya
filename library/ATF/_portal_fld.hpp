// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "_base_fld.hpp"
#include "_consume_item_list.hpp"


START_ATF_NAMESPACE
    struct  _portal_fld : _base_fld
    {
        char m_strLinkMapCode[64];
        char m_strLinkPortalCode[64];
        char m_szMenu[64];
        int m_bNeedConCheck;
        int m_nNeedChrLevel;
        int m_nUpLevelLim;
        _consume_item_list m_ConsumeItemList[3];
        int m_nKind;
        char m_strUseRace[64];
    };
END_ATF_NAMESPACE
