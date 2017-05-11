// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "GUILD_BATTLE__CReservedGuildScheduleDayGroup.hpp"


START_ATF_NAMESPACE
    namespace GUILD_BATTLE
    {
        struct CGuildBattleReservedScheduleListManager
        {
            unsigned int m_uiMapCnt;
            CReservedGuildScheduleDayGroup m_kList[2];
            CReservedGuildScheduleDayGroup *m_pkToday;
            CReservedGuildScheduleDayGroup *m_pkTomorrow;
        public:
            CGuildBattleReservedScheduleListManager()
            {
                using org_ptr = void (WINAPIV*)(struct CGuildBattleReservedScheduleListManager*);
                (org_ptr(0x1403cd260L))(this);
            };
            void ctor_CGuildBattleReservedScheduleListManager()
            {
                using org_ptr = void (WINAPIV*)(struct CGuildBattleReservedScheduleListManager*);
                (org_ptr(0x1403cd260L))(this);
            };
            void Clear()
            {
                using org_ptr = void (WINAPIV*)(struct CGuildBattleReservedScheduleListManager*);
                (org_ptr(0x1403cd970L))(this);
            };
            static void Destroy()
            {
                using org_ptr = void (WINAPIV*)();
                (org_ptr(0x1403cd420L))();
            };
            void Flip()
            {
                using org_ptr = void (WINAPIV*)(struct CGuildBattleReservedScheduleListManager*);
                (org_ptr(0x1403cd8f0L))(this);
            };
            bool Init()
            {
                using org_ptr = bool (WINAPIV*)(struct CGuildBattleReservedScheduleListManager*);
                return (org_ptr(0x1403cd4a0L))(this);
            };
            static struct CGuildBattleReservedScheduleListManager* Instance()
            {
                using org_ptr = struct CGuildBattleReservedScheduleListManager* (WINAPIV*)();
                return (org_ptr(0x1403cd360L))();
            };
            bool Load(int iCurDay, unsigned int uiOldMapCnt, int iToday, int iTomorrow)
            {
                using org_ptr = bool (WINAPIV*)(struct CGuildBattleReservedScheduleListManager*, int, unsigned int, int, int);
                return (org_ptr(0x1403cd540L))(this, iCurDay, uiOldMapCnt, iToday, iTomorrow);
            };
            bool LoadTodaySchedule()
            {
                using org_ptr = bool (WINAPIV*)(struct CGuildBattleReservedScheduleListManager*);
                return (org_ptr(0x1403cdd00L))(this);
            };
            bool LoadTomorrowSchedule()
            {
                using org_ptr = bool (WINAPIV*)(struct CGuildBattleReservedScheduleListManager*);
                return (org_ptr(0x1403cdda0L))(this);
            };
            void PushDQS(unsigned int dwMapID, unsigned int dwSLID)
            {
                using org_ptr = void (WINAPIV*)(struct CGuildBattleReservedScheduleListManager*, unsigned int, unsigned int);
                (org_ptr(0x1403cd690L))(this, dwMapID, dwSLID);
            };
            void Send(unsigned int uiMapID, int n, unsigned int dwVer, char byDay, char byPage, unsigned int dwGuildSerial)
            {
                using org_ptr = void (WINAPIV*)(struct CGuildBattleReservedScheduleListManager*, unsigned int, int, unsigned int, char, char, unsigned int);
                (org_ptr(0x1403cd830L))(this, uiMapID, n, dwVer, byDay, byPage, dwGuildSerial);
            };
            bool UpdateReservedShedule(unsigned int dwSLID, char* byOutData)
            {
                using org_ptr = bool (WINAPIV*)(struct CGuildBattleReservedScheduleListManager*, unsigned int, char*);
                return (org_ptr(0x1403cd720L))(this, dwSLID, byOutData);
            };
            bool UpdateTodaySchedule(unsigned int uiMapID)
            {
                using org_ptr = bool (WINAPIV*)(struct CGuildBattleReservedScheduleListManager*, unsigned int);
                return (org_ptr(0x1403cd9c0L))(this, uiMapID);
            };
            void UpdateTomorrowComplete(unsigned int dwMapID, char* pLoadData)
            {
                using org_ptr = void (WINAPIV*)(struct CGuildBattleReservedScheduleListManager*, unsigned int, char*);
                (org_ptr(0x1403cd7a0L))(this, dwMapID, pLoadData);
            };
            bool UpdateTomorrowSchedule(unsigned int uiMapID)
            {
                using org_ptr = bool (WINAPIV*)(struct CGuildBattleReservedScheduleListManager*, unsigned int);
                return (org_ptr(0x1403cdb60L))(this, uiMapID);
            };
            ~CGuildBattleReservedScheduleListManager()
            {
                using org_ptr = void (WINAPIV*)(struct CGuildBattleReservedScheduleListManager*);
                (org_ptr(0x1403cd300L))(this);
            };
            void dtor_CGuildBattleReservedScheduleListManager()
            {
                using org_ptr = void (WINAPIV*)(struct CGuildBattleReservedScheduleListManager*);
                (org_ptr(0x1403cd300L))(this);
            };
        };
    }; // end namespace GUILD_BATTLE
END_ATF_NAMESPACE
