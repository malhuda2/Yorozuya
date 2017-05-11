// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "_guild_battle_rank_list_result_zocl.hpp"


START_ATF_NAMESPACE
    namespace GUILD_BATTLE
    {
        struct CGuildBattleRankManager
        {
            unsigned int m_dwVer[3];
            unsigned int m_dwGuildSerial[3][30][10];
            _guild_battle_rank_list_result_zocl **m_ppkList;
        public:
            CGuildBattleRankManager()
            {
                using org_ptr = void (WINAPIV*)(struct CGuildBattleRankManager*);
                (org_ptr(0x1403ca2f0L))(this);
            };
            void ctor_CGuildBattleRankManager()
            {
                using org_ptr = void (WINAPIV*)(struct CGuildBattleRankManager*);
                (org_ptr(0x1403ca2f0L))(this);
            };
            bool CheckRecord(unsigned int dwGuildSerial)
            {
                using org_ptr = bool (WINAPIV*)(struct CGuildBattleRankManager*, unsigned int);
                return (org_ptr(0x1403cb7c0L))(this, dwGuildSerial);
            };
            void CleanUp()
            {
                using org_ptr = void (WINAPIV*)(struct CGuildBattleRankManager*);
                (org_ptr(0x1403cb3f0L))(this);
            };
            void Clear(char byRace)
            {
                using org_ptr = void (WINAPIV*)(struct CGuildBattleRankManager*, char);
                (org_ptr(0x1403cb530L))(this, byRace);
            };
            void Clear()
            {
                using org_ptr = void (WINAPIV*)(struct CGuildBattleRankManager*);
                (org_ptr(0x1403cb4b0L))(this);
            };
            static void Destroy()
            {
                using org_ptr = void (WINAPIV*)();
                (org_ptr(0x1403ca430L))();
            };
            bool Find(char byRace, unsigned int dwGuildSerial, int* iFindInx, char* byFindPage)
            {
                using org_ptr = bool (WINAPIV*)(struct CGuildBattleRankManager*, char, unsigned int, int*, char*);
                return (org_ptr(0x1403cb6f0L))(this, byRace, dwGuildSerial, iFindInx, byFindPage);
            };
            bool Init()
            {
                using org_ptr = bool (WINAPIV*)(struct CGuildBattleRankManager*);
                return (org_ptr(0x1403ca4b0L))(this);
            };
            static struct CGuildBattleRankManager* Instance()
            {
                using org_ptr = struct CGuildBattleRankManager* (WINAPIV*)();
                return (org_ptr(0x1403ca370L))();
            };
            bool Load(char byRace)
            {
                using org_ptr = bool (WINAPIV*)(struct CGuildBattleRankManager*, char);
                return (org_ptr(0x1403cb820L))(this, byRace);
            };
            bool Load()
            {
                using org_ptr = bool (WINAPIV*)(struct CGuildBattleRankManager*);
                return (org_ptr(0x1403ca610L))(this);
            };
            void PushClearGuildBattleRank()
            {
                using org_ptr = void (WINAPIV*)(struct CGuildBattleRankManager*);
                (org_ptr(0x1403cb380L))(this);
            };
            void PushCreateGuildBattleRankTable()
            {
                using org_ptr = void (WINAPIV*)(struct CGuildBattleRankManager*);
                (org_ptr(0x1403cb250L))(this);
            };
            bool SelectGuildBattleRankList(char byRace, char* pOutData)
            {
                using org_ptr = bool (WINAPIV*)(struct CGuildBattleRankManager*, char, char*);
                return (org_ptr(0x1403caf70L))(this, byRace, pOutData);
            };
            void Send(int n, char bySelfRace, unsigned int dwCurVer, char byTabRace, char byPage, unsigned int dwGuildSerial)
            {
                using org_ptr = void (WINAPIV*)(struct CGuildBattleRankManager*, int, char, unsigned int, char, char, unsigned int);
                (org_ptr(0x1403ca9c0L))(this, n, bySelfRace, dwCurVer, byTabRace, byPage, dwGuildSerial);
            };
            bool Update(char byRace, char* pLoadData)
            {
                using org_ptr = bool (WINAPIV*)(struct CGuildBattleRankManager*, char, char*);
                return (org_ptr(0x1403ca680L))(this, byRace, pLoadData);
            };
            bool UpdateDraw(char by1PRace, unsigned int dw1PGuildSerial, char by2PRace, unsigned int dw2PGuildSerial)
            {
                using org_ptr = bool (WINAPIV*)(struct CGuildBattleRankManager*, char, unsigned int, char, unsigned int);
                return (org_ptr(0x1403cb120L))(this, by1PRace, dw1PGuildSerial, by2PRace, dw2PGuildSerial);
            };
            bool UpdateWinLose(char byWinRace, unsigned int dwWinGuildSerial, char byLoseRace, unsigned int dwLoseGuildSerial)
            {
                using org_ptr = bool (WINAPIV*)(struct CGuildBattleRankManager*, char, unsigned int, char, unsigned int);
                return (org_ptr(0x1403caff0L))(this, byWinRace, dwWinGuildSerial, byLoseRace, dwLoseGuildSerial);
            };
            ~CGuildBattleRankManager()
            {
                using org_ptr = void (WINAPIV*)(struct CGuildBattleRankManager*);
                (org_ptr(0x1403ca330L))(this);
            };
            void dtor_CGuildBattleRankManager()
            {
                using org_ptr = void (WINAPIV*)(struct CGuildBattleRankManager*);
                (org_ptr(0x1403ca330L))(this);
            };
        };
    }; // end namespace GUILD_BATTLE
END_ATF_NAMESPACE
