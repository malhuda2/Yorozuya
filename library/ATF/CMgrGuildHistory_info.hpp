// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "CMgrGuildHistory.hpp"


START_ATF_NAMESPACE
    namespace info
    {
        using CMgrGuildHistoryctor_CMgrGuildHistory2_ptr = void (WINAPIV*)(struct CMgrGuildHistory*);
        using CMgrGuildHistoryctor_CMgrGuildHistory2_clbk = void (WINAPIV*)(struct CMgrGuildHistory*, CMgrGuildHistoryctor_CMgrGuildHistory2_ptr);
        using CMgrGuildHistoryGetNewFileName4_ptr = void (WINAPIV*)(struct CMgrGuildHistory*, unsigned int, char*);
        using CMgrGuildHistoryGetNewFileName4_clbk = void (WINAPIV*)(struct CMgrGuildHistory*, unsigned int, char*, CMgrGuildHistoryGetNewFileName4_ptr);
        using CMgrGuildHistoryGetTotalWaitSize6_ptr = int (WINAPIV*)(struct CMgrGuildHistory*);
        using CMgrGuildHistoryGetTotalWaitSize6_clbk = int (WINAPIV*)(struct CMgrGuildHistory*, CMgrGuildHistoryGetTotalWaitSize6_ptr);
        using CMgrGuildHistoryIOThread8_ptr = void (WINAPIV*)(void*);
        using CMgrGuildHistoryIOThread8_clbk = void (WINAPIV*)(void*, CMgrGuildHistoryIOThread8_ptr);
        using CMgrGuildHistoryOnLoop10_ptr = void (WINAPIV*)(struct CMgrGuildHistory*);
        using CMgrGuildHistoryOnLoop10_clbk = void (WINAPIV*)(struct CMgrGuildHistory*, CMgrGuildHistoryOnLoop10_ptr);
        using CMgrGuildHistoryWriteFile12_ptr = void (WINAPIV*)(struct CMgrGuildHistory*, char*, char*);
        using CMgrGuildHistoryWriteFile12_clbk = void (WINAPIV*)(struct CMgrGuildHistory*, char*, char*, CMgrGuildHistoryWriteFile12_ptr);
        using CMgrGuildHistorychange_atrade_taxrate14_ptr = void (WINAPIV*)(struct CMgrGuildHistory*, char*, unsigned int, char, char, char*);
        using CMgrGuildHistorychange_atrade_taxrate14_clbk = void (WINAPIV*)(struct CMgrGuildHistory*, char*, unsigned int, char, char, char*, CMgrGuildHistorychange_atrade_taxrate14_ptr);
        using CMgrGuildHistoryjoin_member16_ptr = void (WINAPIV*)(struct CMgrGuildHistory*, char*, unsigned int, char*, unsigned int, int, char*);
        using CMgrGuildHistoryjoin_member16_clbk = void (WINAPIV*)(struct CMgrGuildHistory*, char*, unsigned int, char*, unsigned int, int, char*, CMgrGuildHistoryjoin_member16_ptr);
        using CMgrGuildHistoryleave_member18_ptr = void (WINAPIV*)(struct CMgrGuildHistory*, char*, unsigned int, bool, int, char*, bool);
        using CMgrGuildHistoryleave_member18_clbk = void (WINAPIV*)(struct CMgrGuildHistory*, char*, unsigned int, bool, int, char*, bool, CMgrGuildHistoryleave_member18_ptr);
        using CMgrGuildHistoryload_guild20_ptr = void (WINAPIV*)(struct CMgrGuildHistory*, struct CGuild*, char*);
        using CMgrGuildHistoryload_guild20_clbk = void (WINAPIV*)(struct CMgrGuildHistory*, struct CGuild*, char*, CMgrGuildHistoryload_guild20_ptr);
        using CMgrGuildHistorypop_money22_ptr = void (WINAPIV*)(struct CMgrGuildHistory*, char*, unsigned int, int, int, long double, long double, char*);
        using CMgrGuildHistorypop_money22_clbk = void (WINAPIV*)(struct CMgrGuildHistory*, char*, unsigned int, int, int, long double, long double, char*, CMgrGuildHistorypop_money22_ptr);
        using CMgrGuildHistorypush_money24_ptr = void (WINAPIV*)(struct CMgrGuildHistory*, char*, unsigned int, int, int, long double, long double, char*);
        using CMgrGuildHistorypush_money24_clbk = void (WINAPIV*)(struct CMgrGuildHistory*, char*, unsigned int, int, int, long double, long double, char*, CMgrGuildHistorypush_money24_ptr);
        using CMgrGuildHistorystart_guild26_ptr = void (WINAPIV*)(struct CMgrGuildHistory*, struct CGuild*, char*);
        using CMgrGuildHistorystart_guild26_clbk = void (WINAPIV*)(struct CMgrGuildHistory*, struct CGuild*, char*, CMgrGuildHistorystart_guild26_ptr);
        using CMgrGuildHistorysuggest_cancel28_ptr = void (WINAPIV*)(struct CMgrGuildHistory*, char*, unsigned int, struct _suggested_matter*, char*);
        using CMgrGuildHistorysuggest_cancel28_clbk = void (WINAPIV*)(struct CMgrGuildHistory*, char*, unsigned int, struct _suggested_matter*, char*, CMgrGuildHistorysuggest_cancel28_ptr);
        using CMgrGuildHistorysuggest_complete30_ptr = void (WINAPIV*)(struct CMgrGuildHistory*, char*, unsigned int, struct _suggested_matter*, bool, char*);
        using CMgrGuildHistorysuggest_complete30_clbk = void (WINAPIV*)(struct CMgrGuildHistory*, char*, unsigned int, struct _suggested_matter*, bool, char*, CMgrGuildHistorysuggest_complete30_ptr);
        using CMgrGuildHistorysuggest_vote32_ptr = void (WINAPIV*)(struct CMgrGuildHistory*, char*, unsigned int, struct _suggested_matter*, char*);
        using CMgrGuildHistorysuggest_vote32_clbk = void (WINAPIV*)(struct CMgrGuildHistory*, char*, unsigned int, struct _suggested_matter*, char*, CMgrGuildHistorysuggest_vote32_ptr);
        using CMgrGuildHistorydtor_CMgrGuildHistory34_ptr = void (WINAPIV*)(struct CMgrGuildHistory*);
        using CMgrGuildHistorydtor_CMgrGuildHistory34_clbk = void (WINAPIV*)(struct CMgrGuildHistory*, CMgrGuildHistorydtor_CMgrGuildHistory34_ptr);
        
    }; // end namespace info
END_ATF_NAMESPACE
