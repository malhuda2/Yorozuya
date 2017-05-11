// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "CPlayer.hpp"
#include "_base_fld.hpp"


START_ATF_NAMESPACE
    namespace GUILD_BATTLE
    {
        struct CGuildBattleRewardItem
        {
            char m_ucD;
            char m_ucTableCode;
            _base_fld *m_pFld;
        public:
            CGuildBattleRewardItem()
            {
                using org_ptr = void (WINAPIV*)(struct CGuildBattleRewardItem*);
                (org_ptr(0x1403c8ef0L))(this);
            };
            void ctor_CGuildBattleRewardItem()
            {
                using org_ptr = void (WINAPIV*)(struct CGuildBattleRewardItem*);
                (org_ptr(0x1403c8ef0L))(this);
            };
            char GetAmount()
            {
                using org_ptr = char (WINAPIV*)(struct CGuildBattleRewardItem*);
                return (org_ptr(0x1403eae80L))(this);
            };
            char* GetItemCode()
            {
                using org_ptr = char* (WINAPIV*)(struct CGuildBattleRewardItem*);
                return (org_ptr(0x1403c9270L))(this);
            };
            struct CGuildBattleRewardItem* Give(struct CPlayer* pkPlayer)
            {
                using org_ptr = struct CGuildBattleRewardItem* (WINAPIV*)(struct CGuildBattleRewardItem*, struct CPlayer*);
                return (org_ptr(0x1403c90e0L))(this, pkPlayer);
            };
            bool Init(uint16_t usInx)
            {
                using org_ptr = bool (WINAPIV*)(struct CGuildBattleRewardItem*, uint16_t);
                return (org_ptr(0x1403c8f30L))(this, usInx);
            };
            bool IsNull()
            {
                using org_ptr = bool (WINAPIV*)(struct CGuildBattleRewardItem*);
                return (org_ptr(0x1403eaea0L))(this);
            };
            bool SetItem(char* szItemCode)
            {
                using org_ptr = bool (WINAPIV*)(struct CGuildBattleRewardItem*, char*);
                return (org_ptr(0x1403c92d0L))(this, szItemCode);
            };
        };
    }; // end namespace GUILD_BATTLE
END_ATF_NAMESPACE
