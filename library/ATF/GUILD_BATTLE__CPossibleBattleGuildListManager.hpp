// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "_possible_battle_guild_list_result_zocl.hpp"


START_ATF_NAMESPACE
    namespace GUILD_BATTLE
    {
        struct CPossibleBattleGuildListManager
        {
            bool m_bInit;
            unsigned int *m_pdwVer;
            char *m_pMaxPage;
            _possible_battle_guild_list_result_zocl **m_ppkList;
        public:
            CPossibleBattleGuildListManager()
            {
                using org_ptr = void (WINAPIV*)(struct CPossibleBattleGuildListManager*);
                (org_ptr(0x1403c9530L))(this);
            };
            void ctor_CPossibleBattleGuildListManager()
            {
                using org_ptr = void (WINAPIV*)(struct CPossibleBattleGuildListManager*);
                (org_ptr(0x1403c9530L))(this);
            };
            void Clear()
            {
                using org_ptr = void (WINAPIV*)(struct CPossibleBattleGuildListManager*);
                (org_ptr(0x1403d98e0L))(this);
            };
            static void Destroy()
            {
                using org_ptr = void (WINAPIV*)();
                (org_ptr(0x1403c9710L))();
            };
            void DoDayChangedWork()
            {
                using org_ptr = void (WINAPIV*)(struct CPossibleBattleGuildListManager*);
                (org_ptr(0x1403c9ae0L))(this);
            };
            bool Init()
            {
                using org_ptr = bool (WINAPIV*)(struct CPossibleBattleGuildListManager*);
                return (org_ptr(0x1403c9790L))(this);
            };
            static struct CPossibleBattleGuildListManager* Instance()
            {
                using org_ptr = struct CPossibleBattleGuildListManager* (WINAPIV*)();
                return (org_ptr(0x1403c9650L))();
            };
            bool Load()
            {
                using org_ptr = bool (WINAPIV*)(struct CPossibleBattleGuildListManager*);
                return (org_ptr(0x1403c99f0L))(this);
            };
            bool MakePage(char byRace, char ucPage, uint16_t* wLastGuildInx)
            {
                using org_ptr = bool (WINAPIV*)(struct CPossibleBattleGuildListManager*, char, char, uint16_t*);
                return (org_ptr(0x1403c9d70L))(this, byRace, ucPage, wLastGuildInx);
            };
            void Send(int n, char byRace, char byPage, unsigned int dwVer)
            {
                using org_ptr = void (WINAPIV*)(struct CPossibleBattleGuildListManager*, int, char, char, unsigned int);
                (org_ptr(0x1403d9990L))(this, n, byRace, byPage, dwVer);
            };
            void SendErrorResult(int n, char byRet)
            {
                using org_ptr = void (WINAPIV*)(struct CPossibleBattleGuildListManager*, int, char);
                (org_ptr(0x1403ca260L))(this, n, byRet);
            };
            void SendFirst(int n, char byRace)
            {
                using org_ptr = void (WINAPIV*)(struct CPossibleBattleGuildListManager*, int, char);
                (org_ptr(0x1403d9920L))(this, n, byRace);
            };
            char SendInfo(int n, char byRace, char byPage, unsigned int dwVer)
            {
                using org_ptr = char (WINAPIV*)(struct CPossibleBattleGuildListManager*, int, char, char, unsigned int);
                return (org_ptr(0x1403ca110L))(this, n, byRace, byPage, dwVer);
            };
            void UpdateGuildList()
            {
                using org_ptr = void (WINAPIV*)(struct CPossibleBattleGuildListManager*);
                (org_ptr(0x1403c9b90L))(this);
            };
            ~CPossibleBattleGuildListManager()
            {
                using org_ptr = void (WINAPIV*)(struct CPossibleBattleGuildListManager*);
                (org_ptr(0x1403c9580L))(this);
            };
            void dtor_CPossibleBattleGuildListManager()
            {
                using org_ptr = void (WINAPIV*)(struct CPossibleBattleGuildListManager*);
                (org_ptr(0x1403c9580L))(this);
            };
        };
    }; // end namespace GUILD_BATTLE
END_ATF_NAMESPACE
