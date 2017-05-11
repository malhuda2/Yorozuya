// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "GUILD_BATTLE__CGuildBattleReservedSchedule.hpp"
#include "GUILD_BATTLE__CGuildBattleSchedule.hpp"


START_ATF_NAMESPACE
    namespace GUILD_BATTLE
    {
        struct CGuildBattleReservedScheduleMapGroup
        {
            bool m_bDone;
            unsigned int m_uiDayInx;
            unsigned int m_uiMapCnt;
            CGuildBattleReservedSchedule **m_ppkReservedSchedule;
        public:
            char Add(unsigned int uiFieldInx, unsigned int dwStartTimeInx, unsigned int dwElapseTimeCnt, struct CGuildBattleSchedule** ppkSchedule, unsigned int* uiSLID)
            {
                using org_ptr = char (WINAPIV*)(struct CGuildBattleReservedScheduleMapGroup*, unsigned int, unsigned int, unsigned int, struct CGuildBattleSchedule**, unsigned int*);
                return (org_ptr(0x1403dc440L))(this, uiFieldInx, dwStartTimeInx, dwElapseTimeCnt, ppkSchedule, uiSLID);
            };
            CGuildBattleReservedScheduleMapGroup()
            {
                using org_ptr = void (WINAPIV*)(struct CGuildBattleReservedScheduleMapGroup*);
                (org_ptr(0x1403dba50L))(this);
            };
            void ctor_CGuildBattleReservedScheduleMapGroup()
            {
                using org_ptr = void (WINAPIV*)(struct CGuildBattleReservedScheduleMapGroup*);
                (org_ptr(0x1403dba50L))(this);
            };
            bool CleanUpDanglingReservedSchedule()
            {
                using org_ptr = bool (WINAPIV*)(struct CGuildBattleReservedScheduleMapGroup*);
                return (org_ptr(0x1403dc5f0L))(this);
            };
            bool Clear(unsigned int uiMapID, unsigned int dwID)
            {
                using org_ptr = bool (WINAPIV*)(struct CGuildBattleReservedScheduleMapGroup*, unsigned int, unsigned int);
                return (org_ptr(0x1403dc020L))(this, uiMapID, dwID);
            };
            bool Clear()
            {
                using org_ptr = bool (WINAPIV*)(struct CGuildBattleReservedScheduleMapGroup*);
                return (org_ptr(0x1403dc230L))(this);
            };
            bool CopyUseTimeField(unsigned int uiMapID, bool* pbField)
            {
                using org_ptr = bool (WINAPIV*)(struct CGuildBattleReservedScheduleMapGroup*, unsigned int, bool*);
                return (org_ptr(0x1403dc4f0L))(this, uiMapID, pbField);
            };
            void Flip()
            {
                using org_ptr = void (WINAPIV*)(struct CGuildBattleReservedScheduleMapGroup*);
                (org_ptr(0x1403dc1a0L))(this);
            };
            unsigned int GetCurScheduleID(unsigned int uiMapID)
            {
                using org_ptr = unsigned int (WINAPIV*)(struct CGuildBattleReservedScheduleMapGroup*, unsigned int);
                return (org_ptr(0x1403dc710L))(this, uiMapID);
            };
            unsigned int GetDayID()
            {
                using org_ptr = unsigned int (WINAPIV*)(struct CGuildBattleReservedScheduleMapGroup*);
                return (org_ptr(0x1403d9a90L))(this);
            };
            bool GetSLID(unsigned int uiMapID, unsigned int* uiSLID)
            {
                using org_ptr = bool (WINAPIV*)(struct CGuildBattleReservedScheduleMapGroup*, unsigned int, unsigned int*);
                return (org_ptr(0x1403dc680L))(this, uiMapID, uiSLID);
            };
            bool Init(unsigned int uiDayInx, unsigned int uiMapCnt)
            {
                using org_ptr = bool (WINAPIV*)(struct CGuildBattleReservedScheduleMapGroup*, unsigned int, unsigned int);
                return (org_ptr(0x1403dbb90L))(this, uiDayInx, uiMapCnt);
            };
            bool IsDone()
            {
                using org_ptr = bool (WINAPIV*)(struct CGuildBattleReservedScheduleMapGroup*);
                return (org_ptr(0x1403ded60L))(this);
            };
            char IsEmptyTime(unsigned int uiFieldInx, unsigned int dwStartTimeInx, unsigned int dwElapseTimeCnt)
            {
                using org_ptr = char (WINAPIV*)(struct CGuildBattleReservedScheduleMapGroup*, unsigned int, unsigned int, unsigned int);
                return (org_ptr(0x1403dc3c0L))(this, uiFieldInx, dwStartTimeInx, dwElapseTimeCnt);
            };
            bool Load(bool bToday)
            {
                using org_ptr = bool (WINAPIV*)(struct CGuildBattleReservedScheduleMapGroup*, bool);
                return (org_ptr(0x1403dbdc0L))(this, bToday);
            };
            bool Loop()
            {
                using org_ptr = bool (WINAPIV*)(struct CGuildBattleReservedScheduleMapGroup*);
                return (org_ptr(0x1403dc0d0L))(this);
            };
            void PushDQSClear()
            {
                using org_ptr = void (WINAPIV*)(struct CGuildBattleReservedScheduleMapGroup*);
                (org_ptr(0x1403dc2e0L))(this);
            };
            struct CGuildBattleSchedule* UpdateUseFlag(unsigned int uiMapID, unsigned int dwID)
            {
                using org_ptr = struct CGuildBattleSchedule* (WINAPIV*)(struct CGuildBattleReservedScheduleMapGroup*, unsigned int, unsigned int);
                return (org_ptr(0x1403dc560L))(this, uiMapID, dwID);
            };
            ~CGuildBattleReservedScheduleMapGroup()
            {
                using org_ptr = void (WINAPIV*)(struct CGuildBattleReservedScheduleMapGroup*);
                (org_ptr(0x1403dba90L))(this);
            };
            void dtor_CGuildBattleReservedScheduleMapGroup()
            {
                using org_ptr = void (WINAPIV*)(struct CGuildBattleReservedScheduleMapGroup*);
                (org_ptr(0x1403dba90L))(this);
            };
        };
    }; // end namespace GUILD_BATTLE
END_ATF_NAMESPACE
