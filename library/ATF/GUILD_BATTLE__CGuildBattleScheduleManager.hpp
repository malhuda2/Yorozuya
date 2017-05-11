// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "ATL__CTime.hpp"
#include "CMyTimer.hpp"
#include "GUILD_BATTLE__CGuildBattleReservedScheduleMapGroup.hpp"
#include "GUILD_BATTLE__CGuildBattleSchedule.hpp"


START_ATF_NAMESPACE
    namespace GUILD_BATTLE
    {
        struct CGuildBattleScheduleManager
        {
            bool m_bLoad;
            ATL::CTime *m_pkOldDayTime;
            CMyTimer *m_pkTimer;
            unsigned int m_uiMapCnt;
            CGuildBattleReservedScheduleMapGroup m_kSchdule[2];
            CGuildBattleReservedScheduleMapGroup *m_pkTodaySchedule;
            CGuildBattleReservedScheduleMapGroup *m_pkTomorrowSchedule;
        public:
            char Add(unsigned int uiFieldInx, unsigned int dwStartTimeInx, unsigned int dwElapseTimeCnt, struct CGuildBattleSchedule** ppkSchedule, unsigned int* uiSLID)
            {
                using org_ptr = char (WINAPIV*)(struct CGuildBattleScheduleManager*, unsigned int, unsigned int, unsigned int, struct CGuildBattleSchedule**, unsigned int*);
                return (org_ptr(0x1403d9180L))(this, uiFieldInx, dwStartTimeInx, dwElapseTimeCnt, ppkSchedule, uiSLID);
            };
            bool AddDefaultDBTable()
            {
                using org_ptr = bool (WINAPIV*)(struct CGuildBattleScheduleManager*);
                return (org_ptr(0x1403dd320L))(this);
            };
            CGuildBattleScheduleManager()
            {
                using org_ptr = void (WINAPIV*)(struct CGuildBattleScheduleManager*);
                (org_ptr(0x1403dc830L))(this);
            };
            void ctor_CGuildBattleScheduleManager()
            {
                using org_ptr = void (WINAPIV*)(struct CGuildBattleScheduleManager*);
                (org_ptr(0x1403dc830L))(this);
            };
            bool CleanUpDanglingReservedSchedule()
            {
                using org_ptr = bool (WINAPIV*)(struct CGuildBattleScheduleManager*);
                return (org_ptr(0x1403dd1c0L))(this);
            };
            void Clear()
            {
                using org_ptr = void (WINAPIV*)(struct CGuildBattleScheduleManager*);
                (org_ptr(0x1403dd480L))(this);
            };
            bool ClearTommorowScheduleByID(unsigned int uiMapID, unsigned int dwID)
            {
                using org_ptr = bool (WINAPIV*)(struct CGuildBattleScheduleManager*, unsigned int, unsigned int);
                return (org_ptr(0x1403dd0d0L))(this, uiMapID, dwID);
            };
            static void Destroy()
            {
                using org_ptr = void (WINAPIV*)();
                (org_ptr(0x1403dcad0L))();
            };
            void Flip()
            {
                using org_ptr = void (WINAPIV*)(struct CGuildBattleScheduleManager*);
                (org_ptr(0x1403dd3b0L))(this);
            };
            unsigned int GetCurScheduleID(unsigned int uiMapID)
            {
                using org_ptr = unsigned int (WINAPIV*)(struct CGuildBattleScheduleManager*, unsigned int);
                return (org_ptr(0x1403dd2d0L))(this, uiMapID);
            };
            unsigned int GetTodayDayID()
            {
                using org_ptr = unsigned int (WINAPIV*)(struct CGuildBattleScheduleManager*);
                return (org_ptr(0x1403d9a40L))(this);
            };
            bool GetTodaySLIDByMap(unsigned int uiMap, unsigned int* uiSLID)
            {
                using org_ptr = bool (WINAPIV*)(struct CGuildBattleScheduleManager*, unsigned int, unsigned int*);
                return (org_ptr(0x1403dd230L))(this, uiMap, uiSLID);
            };
            unsigned int GetTomorrowDayID()
            {
                using org_ptr = unsigned int (WINAPIV*)(struct CGuildBattleScheduleManager*);
                return (org_ptr(0x1403d9ab0L))(this);
            };
            bool GetTomorrowSLIDByMap(unsigned int uiMap, unsigned int* uiSLID)
            {
                using org_ptr = bool (WINAPIV*)(struct CGuildBattleScheduleManager*, unsigned int, unsigned int*);
                return (org_ptr(0x1403dd280L))(this, uiMap, uiSLID);
            };
            bool Init(unsigned int uiMapCnt)
            {
                using org_ptr = bool (WINAPIV*)(struct CGuildBattleScheduleManager*, unsigned int);
                return (org_ptr(0x1403dcb50L))(this, uiMapCnt);
            };
            static struct CGuildBattleScheduleManager* Instance()
            {
                using org_ptr = struct CGuildBattleScheduleManager* (WINAPIV*)();
                return (org_ptr(0x1403dca10L))();
            };
            int IsDayChanged()
            {
                using org_ptr = int (WINAPIV*)(struct CGuildBattleScheduleManager*);
                return (org_ptr(0x1403dd530L))(this);
            };
            char IsEmptyTime(unsigned int uiFieldInx, unsigned int dwStartTimeInx)
            {
                using org_ptr = char (WINAPIV*)(struct CGuildBattleScheduleManager*, unsigned int, unsigned int);
                return (org_ptr(0x1403d9870L))(this, uiFieldInx, dwStartTimeInx);
            };
            bool Load(int iCurDay, unsigned int uiOldMapCnt, int iToday, int iTodayDayID, int iTomorrow, int iTomorrowDayID)
            {
                using org_ptr = bool (WINAPIV*)(struct CGuildBattleScheduleManager*, int, unsigned int, int, int, int, int);
                return (org_ptr(0x1403dcdd0L))(this, iCurDay, uiOldMapCnt, iToday, iTodayDayID, iTomorrow, iTomorrowDayID);
            };
            void Loop()
            {
                using org_ptr = void (WINAPIV*)(struct CGuildBattleScheduleManager*);
                (org_ptr(0x1403dcd30L))(this);
            };
            void SetNextEvnet()
            {
                using org_ptr = void (WINAPIV*)(struct CGuildBattleScheduleManager*);
                (org_ptr(0x1403dd6c0L))(this);
            };
            void UpdateDayChangedWork()
            {
                using org_ptr = void (WINAPIV*)(struct CGuildBattleScheduleManager*);
                (org_ptr(0x1403dd650L))(this);
            };
            struct CGuildBattleSchedule* UpdateUseFlag(unsigned int uiDayID, unsigned int uiMapID, unsigned int dwID)
            {
                using org_ptr = struct CGuildBattleSchedule* (WINAPIV*)(struct CGuildBattleScheduleManager*, unsigned int, unsigned int, unsigned int);
                return (org_ptr(0x1403dd120L))(this, uiDayID, uiMapID, dwID);
            };
            ~CGuildBattleScheduleManager()
            {
                using org_ptr = void (WINAPIV*)(struct CGuildBattleScheduleManager*);
                (org_ptr(0x1403dc8e0L))(this);
            };
            void dtor_CGuildBattleScheduleManager()
            {
                using org_ptr = void (WINAPIV*)(struct CGuildBattleScheduleManager*);
                (org_ptr(0x1403dc8e0L))(this);
            };
        };
    }; // end namespace GUILD_BATTLE
END_ATF_NAMESPACE
