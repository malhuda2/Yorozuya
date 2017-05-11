// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "CGuild.hpp"
#include "CPlayer.hpp"
#include "GUILD_BATTLE__CNormalGuildBattleGuildMember.hpp"
#include "GUILD_BATTLE__CNormalGuildBattleField.hpp"
#include "GUILD_BATTLE__CNormalGuildBattleLogger.hpp"


START_ATF_NAMESPACE
    namespace GUILD_BATTLE
    {
        struct CNormalGuildBattleGuild
        {
            struct  CTopKillPrediCate
            {
            };
            struct  CTopGoalPrediCate
            {
            };
            char m_byID;
            char m_byColorInx;
            unsigned int m_dwGoalCnt;
            unsigned int m_dwScore;
            unsigned int m_dwKillPoint;
            CGuild *m_pkGuild;
            char m_byNotifyPositionMemberCnt;
            struct CNormalGuildBattleGuildMember *m_pkNotifyPositionMember[10];
            unsigned int m_dwKillCountSum;
            unsigned int m_dwMaxJoinMemberCnt;
            unsigned int m_dwCurJoinMember;
			CNormalGuildBattleGuildMember m_kMember[150];
        public:
            void AskJoin(char* wszDestGuildName)
            {
                using org_ptr = void (WINAPIV*)(struct CNormalGuildBattleGuild*, char*);
                (org_ptr(0x1403e1ed0L))(this, wszDestGuildName);
            };
            void AskJoin(int n, char* wszDestGuildName, struct CNormalGuildBattleLogger* kLogger)
            {
                using org_ptr = void (WINAPIV*)(struct CNormalGuildBattleGuild*, int, char*, struct CNormalGuildBattleLogger*);
                (org_ptr(0x1403e2c80L))(this, n, wszDestGuildName, kLogger);
            };
            void AskJoin(int n, unsigned int dwSerial, char GuildBattleNumber, char* wszDestGuild, struct CNormalGuildBattleLogger* kLogger)
            {
                using org_ptr = void (WINAPIV*)(struct CNormalGuildBattleGuild*, int, unsigned int, char, char*, struct CNormalGuildBattleLogger*);
                (org_ptr(0x1403e0d20L))(this, n, dwSerial, GuildBattleNumber, wszDestGuild, kLogger);
            };
            CNormalGuildBattleGuild(char byID)
            {
                using org_ptr = void (WINAPIV*)(struct CNormalGuildBattleGuild*, char);
                (org_ptr(0x1403e04c0L))(this, byID);
            };
            void ctor_CNormalGuildBattleGuild(char byID)
            {
                using org_ptr = void (WINAPIV*)(struct CNormalGuildBattleGuild*, char);
                (org_ptr(0x1403e04c0L))(this, byID);
            };
            void CleanUpBattle()
            {
                using org_ptr = void (WINAPIV*)(struct CNormalGuildBattleGuild*);
                (org_ptr(0x1403e1e50L))(this);
            };
            void Clear()
            {
                using org_ptr = void (WINAPIV*)(struct CNormalGuildBattleGuild*);
                (org_ptr(0x1403e0600L))(this);
            };
            void ClearInBattleState()
            {
                using org_ptr = void (WINAPIV*)(struct CNormalGuildBattleGuild*);
                (org_ptr(0x1403e1680L))(this);
            };
            long double DecPvpPoint(struct CNormalGuildBattleLogger* kLogger)
            {
                using org_ptr = long double (WINAPIV*)(struct CNormalGuildBattleGuild*, struct CNormalGuildBattleLogger*);
                return (org_ptr(0x1403e1860L))(this, kLogger);
            };
            char* GetANSIGuildName()
            {
                using org_ptr = char* (WINAPIV*)(struct CNormalGuildBattleGuild*);
                return (org_ptr(0x1403e0770L))(this);
            };
            char GetColorInx()
            {
                using org_ptr = char (WINAPIV*)(struct CNormalGuildBattleGuild*);
                return (org_ptr(0x1403eafc0L))(this);
            };
            char* GetColorName()
            {
                using org_ptr = char* (WINAPIV*)(struct CNormalGuildBattleGuild*);
                return (org_ptr(0x1403eb320L))(this);
            };
            int GetEmptyMember()
            {
                using org_ptr = int (WINAPIV*)(struct CNormalGuildBattleGuild*);
                return (org_ptr(0x1403e29e0L))(this);
            };
            unsigned int GetGoalCnt()
            {
                using org_ptr = unsigned int (WINAPIV*)(struct CNormalGuildBattleGuild*);
                return (org_ptr(0x1403eb150L))(this);
            };
            struct CGuild* GetGuild()
            {
                using org_ptr = struct CGuild* (WINAPIV*)(struct CNormalGuildBattleGuild*);
                return (org_ptr(0x1403eb130L))(this);
            };
            char* GetGuildName()
            {
                using org_ptr = char* (WINAPIV*)(struct CNormalGuildBattleGuild*);
                return (org_ptr(0x1403e0710L))(this);
            };
            char GetGuildRace()
            {
                using org_ptr = char (WINAPIV*)(struct CNormalGuildBattleGuild*);
                return (org_ptr(0x1403e0830L))(this);
            };
            unsigned int GetGuildSerial()
            {
                using org_ptr = unsigned int (WINAPIV*)(struct CNormalGuildBattleGuild*);
                return (org_ptr(0x1403e07d0L))(this);
            };
            unsigned int GetJoinMemberCnt()
            {
                using org_ptr = unsigned int (WINAPIV*)(struct CNormalGuildBattleGuild*);
                return (org_ptr(0x1403e2b20L))(this);
            };
            unsigned int GetKillCountSum()
            {
                using org_ptr = unsigned int (WINAPIV*)(struct CNormalGuildBattleGuild*);
                return (org_ptr(0x1403eb3f0L))(this);
            };
            unsigned int GetMaxJoinMemberCount()
            {
                using org_ptr = unsigned int (WINAPIV*)(struct CNormalGuildBattleGuild*);
                return (org_ptr(0x1403eb410L))(this);
            };
            int GetMember(unsigned int dwSerial)
            {
                using org_ptr = int (WINAPIV*)(struct CNormalGuildBattleGuild*, unsigned int);
                return (org_ptr(0x1403e2a60L))(this, dwSerial);
            };
            struct CPlayer* GetMemberPlayer(unsigned int dwSerial)
            {
                using org_ptr = struct CPlayer* (WINAPIV*)(struct CNormalGuildBattleGuild*, unsigned int);
                return (org_ptr(0x1403e0890L))(this, dwSerial);
            };
            struct CNormalGuildBattleGuildMember* GetMemberPtr(unsigned int dwSerial)
            {
                using org_ptr = struct CNormalGuildBattleGuildMember* (WINAPIV*)(struct CNormalGuildBattleGuild*, unsigned int);
                return (org_ptr(0x1403e0a00L))(this, dwSerial);
            };
            unsigned int GetScore()
            {
                using org_ptr = unsigned int (WINAPIV*)(struct CNormalGuildBattleGuild*);
                return (org_ptr(0x1403eb170L))(this);
            };
            struct CNormalGuildBattleGuildMember* GetTopGoalMember()
            {
                using org_ptr = struct CNormalGuildBattleGuildMember* (WINAPIV*)(struct CNormalGuildBattleGuild*);
                return (org_ptr(0x1403e0b00L))(this);
            };
            struct CNormalGuildBattleGuildMember* GetTopKillMember()
            {
                using org_ptr = struct CNormalGuildBattleGuildMember* (WINAPIV*)(struct CNormalGuildBattleGuild*);
                return (org_ptr(0x1403e0a70L))(this);
            };
            void Goal(struct CNormalGuildBattleGuildMember* pkMember)
            {
                using org_ptr = void (WINAPIV*)(struct CNormalGuildBattleGuild*, struct CNormalGuildBattleGuildMember*);
                (org_ptr(0x1403e1600L))(this, pkMember);
            };
            void IncPvpPoint(long double dTotalInc, char byWin, struct CNormalGuildBattleLogger* kLogger)
            {
                using org_ptr = void (WINAPIV*)(struct CNormalGuildBattleGuild*, long double, char, struct CNormalGuildBattleLogger*);
                (org_ptr(0x1403e1730L))(this, dTotalInc, byWin, kLogger);
            };
            bool IsJoinMember(unsigned int dwSerial)
            {
                using org_ptr = bool (WINAPIV*)(struct CNormalGuildBattleGuild*, unsigned int);
                return (org_ptr(0x1403e2bc0L))(this, dwSerial);
            };
            bool IsMember(unsigned int dwSerial)
            {
                using org_ptr = bool (WINAPIV*)(struct CNormalGuildBattleGuild*, unsigned int);
                return (org_ptr(0x1403eb1b0L))(this, dwSerial);
            };
            int IsReStart(unsigned int dwSerial)
            {
                using org_ptr = int (WINAPIV*)(struct CNormalGuildBattleGuild*, unsigned int);
                return (org_ptr(0x1403e0970L))(this, dwSerial);
            };
            char Join(unsigned int dwSerial, char GuildBattleNumber, int* iMemberInx, struct CNormalGuildBattleLogger* kLogger)
            {
                using org_ptr = char (WINAPIV*)(struct CNormalGuildBattleGuild*, unsigned int, char, int*, struct CNormalGuildBattleLogger*);
                return (org_ptr(0x1403e0b90L))(this, dwSerial, GuildBattleNumber, iMemberInx, kLogger);
            };
            int Kill(struct CNormalGuildBattleGuildMember* pkSrcMember, struct CNormalGuildBattleGuildMember* pkDestMember)
            {
                using org_ptr = int (WINAPIV*)(struct CNormalGuildBattleGuild*, struct CNormalGuildBattleGuildMember*, struct CNormalGuildBattleGuildMember*);
                return (org_ptr(0x1403e1560L))(this, pkSrcMember, pkDestMember);
            };
            void LeaveGuild(unsigned int dwSerial, bool bInGuildBattle, struct CNormalGuildBattleLogger* kLogger)
            {
                using org_ptr = void (WINAPIV*)(struct CNormalGuildBattleGuild*, unsigned int, bool, struct CNormalGuildBattleLogger*);
                (org_ptr(0x1403e1460L))(this, dwSerial, bInGuildBattle, kLogger);
            };
            void LogIn(int n, unsigned int dwSerial, char GuildBattleNumber, char* wszDestGuild, unsigned int uiID, struct CNormalGuildBattleField* pkField, struct CNormalGuildBattleLogger* kLogger)
            {
                using org_ptr = void (WINAPIV*)(struct CNormalGuildBattleGuild*, int, unsigned int, char, char*, unsigned int, struct CNormalGuildBattleField*, struct CNormalGuildBattleLogger*);
                (org_ptr(0x1403e0dd0L))(this, n, dwSerial, GuildBattleNumber, wszDestGuild, uiID, pkField, kLogger);
            };
            void MoveMap(unsigned int uiID, struct CNormalGuildBattleField* pkField)
            {
                using org_ptr = void (WINAPIV*)(struct CNormalGuildBattleGuild*, unsigned int, struct CNormalGuildBattleField*);
                (org_ptr(0x1403e0f60L))(this, uiID, pkField);
            };
            bool MoveMember(int iMember, unsigned int uiID, struct CNormalGuildBattleField* pkField, struct CNormalGuildBattleLogger* kLogger)
            {
                using org_ptr = bool (WINAPIV*)(struct CNormalGuildBattleGuild*, int, unsigned int, struct CNormalGuildBattleField*, struct CNormalGuildBattleLogger*);
                return (org_ptr(0x1403e1140L))(this, iMember, uiID, pkField, kLogger);
            };
            bool NetClose(bool bInGuildBattle, unsigned int dwSerial, struct CNormalGuildBattleLogger* kLogger)
            {
                using org_ptr = bool (WINAPIV*)(struct CNormalGuildBattleGuild*, bool, unsigned int, struct CNormalGuildBattleLogger*);
                return (org_ptr(0x1403e13b0L))(this, bInGuildBattle, dwSerial, kLogger);
            };
            void NotifyLeftMinuteBeforeStart(char byLeftMin)
            {
                using org_ptr = void (WINAPIV*)(struct CNormalGuildBattleGuild*, char);
                (org_ptr(0x1403e2050L))(this, byLeftMin);
            };
            void ReturnBindPosAll()
            {
                using org_ptr = void (WINAPIV*)(struct CNormalGuildBattleGuild*);
                (org_ptr(0x1403e1cc0L))(this);
            };
            char ReturnHQPosAll()
            {
                using org_ptr = char (WINAPIV*)(struct CNormalGuildBattleGuild*);
                return (org_ptr(0x1403e1b50L))(this);
            };
            bool ReturnStartPosAll(struct CNormalGuildBattleField* pkField)
            {
                using org_ptr = bool (WINAPIV*)(struct CNormalGuildBattleGuild*, struct CNormalGuildBattleField*);
                return (org_ptr(0x1403e1d50L))(this, pkField);
            };
            void RewardItem(struct CNormalGuildBattleLogger* kLogger)
            {
                using org_ptr = void (WINAPIV*)(struct CNormalGuildBattleGuild*, struct CNormalGuildBattleLogger*);
                (org_ptr(0x1403e19b0L))(this, kLogger);
            };
            void SendDeleteNotifyPositionMember(int iMemberInx)
            {
                using org_ptr = void (WINAPIV*)(struct CNormalGuildBattleGuild*, int);
                (org_ptr(0x1403e2d80L))(this, iMemberInx);
            };
            void SendGetGravityStone(struct CNormalGuildBattleGuild* pkTakeGuild, struct CPlayer* pkPlayer, int iTakePortalInx)
            {
                using org_ptr = void (WINAPIV*)(struct CNormalGuildBattleGuild*, struct CNormalGuildBattleGuild*, struct CPlayer*, int);
                (org_ptr(0x1403e2550L))(this, pkTakeGuild, pkPlayer, iTakePortalInx);
            };
            void SendMsg(char* byType, char* pMsg, unsigned int uiSize)
            {
                using org_ptr = void (WINAPIV*)(struct CNormalGuildBattleGuild*, char*, char*, unsigned int);
                (org_ptr(0x1403e2730L))(this, byType, pMsg, uiSize);
            };
            void SendMsg(char* byType, char* pMsg, unsigned int uiSize, int iExeceptMemberInx)
            {
                using org_ptr = void (WINAPIV*)(struct CNormalGuildBattleGuild*, char*, char*, unsigned int, int);
                (org_ptr(0x1403e2800L))(this, byType, pMsg, uiSize, iExeceptMemberInx);
            };
            void SendMsg(char* byType, char* pMsg, unsigned int uiSize, unsigned int dwSerial)
            {
                using org_ptr = void (WINAPIV*)(struct CNormalGuildBattleGuild*, char*, char*, unsigned int, unsigned int);
                (org_ptr(0x1403e28e0L))(this, byType, pMsg, uiSize, dwSerial);
            };
            void SendOhterNotifyCommitteeMemberPosition(struct CPlayer* pkPlayer)
            {
                using org_ptr = void (WINAPIV*)(struct CNormalGuildBattleGuild*, struct CPlayer*);
                (org_ptr(0x1403e22d0L))(this, pkPlayer);
            };
            void SendRegenBall(int iPortalInx)
            {
                using org_ptr = void (WINAPIV*)(struct CNormalGuildBattleGuild*, int);
                (org_ptr(0x1403e2150L))(this, iPortalInx);
            };
            void SendSelfNotifyCommitteeMemberPositionList(struct CPlayer* pkPlayer)
            {
                using org_ptr = void (WINAPIV*)(struct CNormalGuildBattleGuild*, struct CPlayer*);
                (org_ptr(0x1403e23d0L))(this, pkPlayer);
            };
            void SendStartNotifyCommitteeMemberPosition(int iMember)
            {
                using org_ptr = void (WINAPIV*)(struct CNormalGuildBattleGuild*, int);
                (org_ptr(0x1403e2250L))(this, iMember);
            };
            void SetColorInx(char byInx)
            {
                using org_ptr = void (WINAPIV*)(struct CNormalGuildBattleGuild*, char);
                (org_ptr(0x1403eb190L))(this, byInx);
            };
            void SetGuild(struct CGuild* pkGuild)
            {
                using org_ptr = void (WINAPIV*)(struct CNormalGuildBattleGuild*, struct CGuild*);
                (org_ptr(0x1403eb0a0L))(this, pkGuild);
            };
            bool SetReStartFlag(unsigned int dwSerial)
            {
                using org_ptr = bool (WINAPIV*)(struct CNormalGuildBattleGuild*, unsigned int);
                return (org_ptr(0x1403e0900L))(this, dwSerial);
            };
            void UpdateScore()
            {
                using org_ptr = void (WINAPIV*)(struct CNormalGuildBattleGuild*);
                (org_ptr(0x1403eae20L))(this);
            };
            ~CNormalGuildBattleGuild()
            {
                using org_ptr = void (WINAPIV*)(struct CNormalGuildBattleGuild*);
                (org_ptr(0x1403e05a0L))(this);
            };
            void dtor_CNormalGuildBattleGuild()
            {
                using org_ptr = void (WINAPIV*)(struct CNormalGuildBattleGuild*);
                (org_ptr(0x1403e05a0L))(this);
            };
        };
    }; // end namespace GUILD_BATTLE
END_ATF_NAMESPACE
