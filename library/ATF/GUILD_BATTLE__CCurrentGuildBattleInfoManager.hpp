// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "GUILD_BATTLE__CNormalGuildBattle.hpp"
#include "_guild_battle_current_battle_info_result_zocl.hpp"


START_ATF_NAMESPACE
    namespace GUILD_BATTLE
    {
        struct CCurrentGuildBattleInfoManager
        {
            bool m_bInit;
            unsigned int m_uiMapCnt;
            bool *m_pbUpdate;
            _guild_battle_current_battle_info_result_zocl *m_pkInfo;
        public:
            CCurrentGuildBattleInfoManager()
            {
                using org_ptr = void (WINAPIV*)(struct CCurrentGuildBattleInfoManager*);
                (org_ptr(0x1403cde40L))(this);
            };
            void ctor_CCurrentGuildBattleInfoManager()
            {
                using org_ptr = void (WINAPIV*)(struct CCurrentGuildBattleInfoManager*);
                (org_ptr(0x1403cde40L))(this);
            };
            void CleanUp()
            {
                using org_ptr = void (WINAPIV*)(struct CCurrentGuildBattleInfoManager*);
                (org_ptr(0x1403ce510L))(this);
            };
            void Clear(unsigned int uiMapID)
            {
                using org_ptr = void (WINAPIV*)(struct CCurrentGuildBattleInfoManager*, unsigned int);
                (org_ptr(0x1403ce220L))(this, uiMapID);
            };
            static void Destroy()
            {
                using org_ptr = void (WINAPIV*)();
                (org_ptr(0x1403cdf80L))();
            };
            char GetLeftTime(unsigned int uiMapID)
            {
                using org_ptr = char (WINAPIV*)(struct CCurrentGuildBattleInfoManager*, unsigned int);
                return (org_ptr(0x1403ce5c0L))(this, uiMapID);
            };
            bool Init()
            {
                using org_ptr = bool (WINAPIV*)(struct CCurrentGuildBattleInfoManager*);
                return (org_ptr(0x1403ce000L))(this);
            };
            static struct CCurrentGuildBattleInfoManager* Instance()
            {
                using org_ptr = struct CCurrentGuildBattleInfoManager* (WINAPIV*)();
                return (org_ptr(0x1403cdec0L))();
            };
            void Send(int n, unsigned int uiMapID)
            {
                using org_ptr = void (WINAPIV*)(struct CCurrentGuildBattleInfoManager*, int, unsigned int);
                (org_ptr(0x1403ce3d0L))(this, n, uiMapID);
            };
            bool Set(unsigned int uiMapID, struct CNormalGuildBattle* pkBattle)
            {
                using org_ptr = bool (WINAPIV*)(struct CCurrentGuildBattleInfoManager*, unsigned int, struct CNormalGuildBattle*);
                return (org_ptr(0x1403ce160L))(this, uiMapID, pkBattle);
            };
            void UpdateGoalCnt(unsigned int uiMapID, char byColorInx, unsigned int dwGoalCnt)
            {
                using org_ptr = void (WINAPIV*)(struct CCurrentGuildBattleInfoManager*, unsigned int, char, unsigned int);
                (org_ptr(0x1403ce340L))(this, uiMapID, byColorInx, dwGoalCnt);
            };
            void UpdateScore(unsigned int uiMapID, char byColorInx, unsigned int dwScore)
            {
                using org_ptr = void (WINAPIV*)(struct CCurrentGuildBattleInfoManager*, unsigned int, char, unsigned int);
                (org_ptr(0x1403ce2b0L))(this, uiMapID, byColorInx, dwScore);
            };
            ~CCurrentGuildBattleInfoManager()
            {
                using org_ptr = void (WINAPIV*)(struct CCurrentGuildBattleInfoManager*);
                (org_ptr(0x1403cde80L))(this);
            };
            void dtor_CCurrentGuildBattleInfoManager()
            {
                using org_ptr = void (WINAPIV*)(struct CCurrentGuildBattleInfoManager*);
                (org_ptr(0x1403cde80L))(this);
            };
        };
    }; // end namespace GUILD_BATTLE
END_ATF_NAMESPACE
