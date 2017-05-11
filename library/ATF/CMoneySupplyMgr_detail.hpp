// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "CMoneySupplyMgr_info.hpp"


START_ATF_NAMESPACE
    namespace detail
    {
        info::CMoneySupplyMgrctor_CMoneySupplyMgr2_ptr CMoneySupplyMgrctor_CMoneySupplyMgr2_next(nullptr);
        info::CMoneySupplyMgrctor_CMoneySupplyMgr2_clbk CMoneySupplyMgrctor_CMoneySupplyMgr2_user(nullptr);
        info::CMoneySupplyMgrInitialize4_ptr CMoneySupplyMgrInitialize4_next(nullptr);
        info::CMoneySupplyMgrInitialize4_clbk CMoneySupplyMgrInitialize4_user(nullptr);
        info::CMoneySupplyMgrInstance6_ptr CMoneySupplyMgrInstance6_next(nullptr);
        info::CMoneySupplyMgrInstance6_clbk CMoneySupplyMgrInstance6_user(nullptr);
        info::CMoneySupplyMgrLoopMoneySupply8_ptr CMoneySupplyMgrLoopMoneySupply8_next(nullptr);
        info::CMoneySupplyMgrLoopMoneySupply8_clbk CMoneySupplyMgrLoopMoneySupply8_user(nullptr);
        info::CMoneySupplyMgrSendMsg_MoneySupplyDataToWeb10_ptr CMoneySupplyMgrSendMsg_MoneySupplyDataToWeb10_next(nullptr);
        info::CMoneySupplyMgrSendMsg_MoneySupplyDataToWeb10_clbk CMoneySupplyMgrSendMsg_MoneySupplyDataToWeb10_user(nullptr);
        info::CMoneySupplyMgrUpdateBuyData12_ptr CMoneySupplyMgrUpdateBuyData12_next(nullptr);
        info::CMoneySupplyMgrUpdateBuyData12_clbk CMoneySupplyMgrUpdateBuyData12_user(nullptr);
        info::CMoneySupplyMgrUpdateBuyUnitData14_ptr CMoneySupplyMgrUpdateBuyUnitData14_next(nullptr);
        info::CMoneySupplyMgrUpdateBuyUnitData14_clbk CMoneySupplyMgrUpdateBuyUnitData14_user(nullptr);
        info::CMoneySupplyMgrUpdateFeeMoneyData16_ptr CMoneySupplyMgrUpdateFeeMoneyData16_next(nullptr);
        info::CMoneySupplyMgrUpdateFeeMoneyData16_clbk CMoneySupplyMgrUpdateFeeMoneyData16_user(nullptr);
        info::CMoneySupplyMgrUpdateGateRewardMoneyData18_ptr CMoneySupplyMgrUpdateGateRewardMoneyData18_next(nullptr);
        info::CMoneySupplyMgrUpdateGateRewardMoneyData18_clbk CMoneySupplyMgrUpdateGateRewardMoneyData18_user(nullptr);
        info::CMoneySupplyMgrUpdateHonorGuildMoneyData20_ptr CMoneySupplyMgrUpdateHonorGuildMoneyData20_next(nullptr);
        info::CMoneySupplyMgrUpdateHonorGuildMoneyData20_clbk CMoneySupplyMgrUpdateHonorGuildMoneyData20_user(nullptr);
        info::CMoneySupplyMgrUpdateQuestRewardMoneyData22_ptr CMoneySupplyMgrUpdateQuestRewardMoneyData22_next(nullptr);
        info::CMoneySupplyMgrUpdateQuestRewardMoneyData22_clbk CMoneySupplyMgrUpdateQuestRewardMoneyData22_user(nullptr);
        info::CMoneySupplyMgrUpdateSellData24_ptr CMoneySupplyMgrUpdateSellData24_next(nullptr);
        info::CMoneySupplyMgrUpdateSellData24_clbk CMoneySupplyMgrUpdateSellData24_user(nullptr);
        info::CMoneySupplyMgrUpdateUnitRepairingChargesData26_ptr CMoneySupplyMgrUpdateUnitRepairingChargesData26_next(nullptr);
        info::CMoneySupplyMgrUpdateUnitRepairingChargesData26_clbk CMoneySupplyMgrUpdateUnitRepairingChargesData26_user(nullptr);
        info::CMoneySupplyMgrdtor_CMoneySupplyMgr31_ptr CMoneySupplyMgrdtor_CMoneySupplyMgr31_next(nullptr);
        info::CMoneySupplyMgrdtor_CMoneySupplyMgr31_clbk CMoneySupplyMgrdtor_CMoneySupplyMgr31_user(nullptr);
        
        void CMoneySupplyMgrctor_CMoneySupplyMgr2_wrapper(struct CMoneySupplyMgr* _this)
        {
           CMoneySupplyMgrctor_CMoneySupplyMgr2_user(_this, CMoneySupplyMgrctor_CMoneySupplyMgr2_next);
        };
        void CMoneySupplyMgrInitialize4_wrapper(struct CMoneySupplyMgr* _this)
        {
           CMoneySupplyMgrInitialize4_user(_this, CMoneySupplyMgrInitialize4_next);
        };
        struct CMoneySupplyMgr* CMoneySupplyMgrInstance6_wrapper()
        {
           return CMoneySupplyMgrInstance6_user(CMoneySupplyMgrInstance6_next);
        };
        void CMoneySupplyMgrLoopMoneySupply8_wrapper(struct CMoneySupplyMgr* _this)
        {
           CMoneySupplyMgrLoopMoneySupply8_user(_this, CMoneySupplyMgrLoopMoneySupply8_next);
        };
        void CMoneySupplyMgrSendMsg_MoneySupplyDataToWeb10_wrapper(struct CMoneySupplyMgr* _this, struct _MONEY_SUPPLY_DATA* pMSData)
        {
           CMoneySupplyMgrSendMsg_MoneySupplyDataToWeb10_user(_this, pMSData, CMoneySupplyMgrSendMsg_MoneySupplyDataToWeb10_next);
        };
        void CMoneySupplyMgrUpdateBuyData12_wrapper(struct CMoneySupplyMgr* _this, char byRace, int nLv, char* szClass, unsigned int nAmount)
        {
           CMoneySupplyMgrUpdateBuyData12_user(_this, byRace, nLv, szClass, nAmount, CMoneySupplyMgrUpdateBuyData12_next);
        };
        void CMoneySupplyMgrUpdateBuyUnitData14_wrapper(struct CMoneySupplyMgr* _this, int nLv, unsigned int nAmount)
        {
           CMoneySupplyMgrUpdateBuyUnitData14_user(_this, nLv, nAmount, CMoneySupplyMgrUpdateBuyUnitData14_next);
        };
        void CMoneySupplyMgrUpdateFeeMoneyData16_wrapper(struct CMoneySupplyMgr* _this, char byRace, int nLv, unsigned int nAmount)
        {
           CMoneySupplyMgrUpdateFeeMoneyData16_user(_this, byRace, nLv, nAmount, CMoneySupplyMgrUpdateFeeMoneyData16_next);
        };
        void CMoneySupplyMgrUpdateGateRewardMoneyData18_wrapper(struct CMoneySupplyMgr* _this, char byRace, int nLv, char* szClass, unsigned int nAmount)
        {
           CMoneySupplyMgrUpdateGateRewardMoneyData18_user(_this, byRace, nLv, szClass, nAmount, CMoneySupplyMgrUpdateGateRewardMoneyData18_next);
        };
        void CMoneySupplyMgrUpdateHonorGuildMoneyData20_wrapper(struct CMoneySupplyMgr* _this, char byTradeType, char byRace, unsigned int nAmount)
        {
           CMoneySupplyMgrUpdateHonorGuildMoneyData20_user(_this, byTradeType, byRace, nAmount, CMoneySupplyMgrUpdateHonorGuildMoneyData20_next);
        };
        void CMoneySupplyMgrUpdateQuestRewardMoneyData22_wrapper(struct CMoneySupplyMgr* _this, char byRace, int nLv, char* szClass, unsigned int nAmount)
        {
           CMoneySupplyMgrUpdateQuestRewardMoneyData22_user(_this, byRace, nLv, szClass, nAmount, CMoneySupplyMgrUpdateQuestRewardMoneyData22_next);
        };
        void CMoneySupplyMgrUpdateSellData24_wrapper(struct CMoneySupplyMgr* _this, char byRace, int nLv, char* szClass, unsigned int nAmount)
        {
           CMoneySupplyMgrUpdateSellData24_user(_this, byRace, nLv, szClass, nAmount, CMoneySupplyMgrUpdateSellData24_next);
        };
        void CMoneySupplyMgrUpdateUnitRepairingChargesData26_wrapper(struct CMoneySupplyMgr* _this, int nLv, unsigned int nAmount)
        {
           CMoneySupplyMgrUpdateUnitRepairingChargesData26_user(_this, nLv, nAmount, CMoneySupplyMgrUpdateUnitRepairingChargesData26_next);
        };
        void CMoneySupplyMgrdtor_CMoneySupplyMgr31_wrapper(struct CMoneySupplyMgr* _this)
        {
           CMoneySupplyMgrdtor_CMoneySupplyMgr31_user(_this, CMoneySupplyMgrdtor_CMoneySupplyMgr31_next);
        };
        
        hook_record CMoneySupplyMgr_functions[] = {
        {   (LPVOID)0x14042b630L,
            (LPVOID *)&CMoneySupplyMgrctor_CMoneySupplyMgr2_user,
            (LPVOID *)&CMoneySupplyMgrctor_CMoneySupplyMgr2_next,
            (LPVOID)cast_pointer_function(CMoneySupplyMgrctor_CMoneySupplyMgr2_wrapper),
            (LPVOID)cast_pointer_function((void(CMoneySupplyMgr::*)())&CMoneySupplyMgr::ctor_CMoneySupplyMgr) },
        {   (LPVOID)0x14042b680L,
            (LPVOID *)&CMoneySupplyMgrInitialize4_user,
            (LPVOID *)&CMoneySupplyMgrInitialize4_next,
            (LPVOID)cast_pointer_function(CMoneySupplyMgrInitialize4_wrapper),
            (LPVOID)cast_pointer_function((void(CMoneySupplyMgr::*)())&CMoneySupplyMgr::Initialize) },
        {   (LPVOID)0x140095070L,
            (LPVOID *)&CMoneySupplyMgrInstance6_user,
            (LPVOID *)&CMoneySupplyMgrInstance6_next,
            (LPVOID)cast_pointer_function(CMoneySupplyMgrInstance6_wrapper),
            (LPVOID)cast_pointer_function((struct CMoneySupplyMgr*(*)())&CMoneySupplyMgr::Instance) },
        {   (LPVOID)0x14042b6e0L,
            (LPVOID *)&CMoneySupplyMgrLoopMoneySupply8_user,
            (LPVOID *)&CMoneySupplyMgrLoopMoneySupply8_next,
            (LPVOID)cast_pointer_function(CMoneySupplyMgrLoopMoneySupply8_wrapper),
            (LPVOID)cast_pointer_function((void(CMoneySupplyMgr::*)())&CMoneySupplyMgr::LoopMoneySupply) },
        {   (LPVOID)0x14042f5f0L,
            (LPVOID *)&CMoneySupplyMgrSendMsg_MoneySupplyDataToWeb10_user,
            (LPVOID *)&CMoneySupplyMgrSendMsg_MoneySupplyDataToWeb10_next,
            (LPVOID)cast_pointer_function(CMoneySupplyMgrSendMsg_MoneySupplyDataToWeb10_wrapper),
            (LPVOID)cast_pointer_function((void(CMoneySupplyMgr::*)(struct _MONEY_SUPPLY_DATA*))&CMoneySupplyMgr::SendMsg_MoneySupplyDataToWeb) },
        {   (LPVOID)0x14042c4c0L,
            (LPVOID *)&CMoneySupplyMgrUpdateBuyData12_user,
            (LPVOID *)&CMoneySupplyMgrUpdateBuyData12_next,
            (LPVOID)cast_pointer_function(CMoneySupplyMgrUpdateBuyData12_wrapper),
            (LPVOID)cast_pointer_function((void(CMoneySupplyMgr::*)(char, int, char*, unsigned int))&CMoneySupplyMgr::UpdateBuyData) },
        {   (LPVOID)0x14042f470L,
            (LPVOID *)&CMoneySupplyMgrUpdateBuyUnitData14_user,
            (LPVOID *)&CMoneySupplyMgrUpdateBuyUnitData14_next,
            (LPVOID)cast_pointer_function(CMoneySupplyMgrUpdateBuyUnitData14_wrapper),
            (LPVOID)cast_pointer_function((void(CMoneySupplyMgr::*)(int, unsigned int))&CMoneySupplyMgr::UpdateBuyUnitData) },
        {   (LPVOID)0x14042f1b0L,
            (LPVOID *)&CMoneySupplyMgrUpdateFeeMoneyData16_user,
            (LPVOID *)&CMoneySupplyMgrUpdateFeeMoneyData16_next,
            (LPVOID)cast_pointer_function(CMoneySupplyMgrUpdateFeeMoneyData16_wrapper),
            (LPVOID)cast_pointer_function((void(CMoneySupplyMgr::*)(char, int, unsigned int))&CMoneySupplyMgr::UpdateFeeMoneyData) },
        {   (LPVOID)0x14042e520L,
            (LPVOID *)&CMoneySupplyMgrUpdateGateRewardMoneyData18_user,
            (LPVOID *)&CMoneySupplyMgrUpdateGateRewardMoneyData18_next,
            (LPVOID)cast_pointer_function(CMoneySupplyMgrUpdateGateRewardMoneyData18_wrapper),
            (LPVOID)cast_pointer_function((void(CMoneySupplyMgr::*)(char, int, char*, unsigned int))&CMoneySupplyMgr::UpdateGateRewardMoneyData) },
        {   (LPVOID)0x14042f2d0L,
            (LPVOID *)&CMoneySupplyMgrUpdateHonorGuildMoneyData20_user,
            (LPVOID *)&CMoneySupplyMgrUpdateHonorGuildMoneyData20_next,
            (LPVOID)cast_pointer_function(CMoneySupplyMgrUpdateHonorGuildMoneyData20_wrapper),
            (LPVOID)cast_pointer_function((void(CMoneySupplyMgr::*)(char, char, unsigned int))&CMoneySupplyMgr::UpdateHonorGuildMoneyData) },
        {   (LPVOID)0x14042d890L,
            (LPVOID *)&CMoneySupplyMgrUpdateQuestRewardMoneyData22_user,
            (LPVOID *)&CMoneySupplyMgrUpdateQuestRewardMoneyData22_next,
            (LPVOID)cast_pointer_function(CMoneySupplyMgrUpdateQuestRewardMoneyData22_wrapper),
            (LPVOID)cast_pointer_function((void(CMoneySupplyMgr::*)(char, int, char*, unsigned int))&CMoneySupplyMgr::UpdateQuestRewardMoneyData) },
        {   (LPVOID)0x14042b7d0L,
            (LPVOID *)&CMoneySupplyMgrUpdateSellData24_user,
            (LPVOID *)&CMoneySupplyMgrUpdateSellData24_next,
            (LPVOID)cast_pointer_function(CMoneySupplyMgrUpdateSellData24_wrapper),
            (LPVOID)cast_pointer_function((void(CMoneySupplyMgr::*)(char, int, char*, unsigned int))&CMoneySupplyMgr::UpdateSellData) },
        {   (LPVOID)0x14042f530L,
            (LPVOID *)&CMoneySupplyMgrUpdateUnitRepairingChargesData26_user,
            (LPVOID *)&CMoneySupplyMgrUpdateUnitRepairingChargesData26_next,
            (LPVOID)cast_pointer_function(CMoneySupplyMgrUpdateUnitRepairingChargesData26_wrapper),
            (LPVOID)cast_pointer_function((void(CMoneySupplyMgr::*)(int, unsigned int))&CMoneySupplyMgr::UpdateUnitRepairingChargesData) },
        {   (LPVOID)0x14042b660L,
            (LPVOID *)&CMoneySupplyMgrdtor_CMoneySupplyMgr31_user,
            (LPVOID *)&CMoneySupplyMgrdtor_CMoneySupplyMgr31_next,
            (LPVOID)cast_pointer_function(CMoneySupplyMgrdtor_CMoneySupplyMgr31_wrapper),
            (LPVOID)cast_pointer_function((void(CMoneySupplyMgr::*)())&CMoneySupplyMgr::dtor_CMoneySupplyMgr) },
        
        };
        
    }; // end namespace detail
END_ATF_NAMESPACE
