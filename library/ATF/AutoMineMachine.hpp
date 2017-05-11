// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "CGuild.hpp"
#include "CLogFile.hpp"
#include "CPlayer.hpp"
#include "TInventory.hpp"
#include "_AUTOMINE_BATTERY.hpp"
#include "_DB_LOAD_AUTOMINE_MACHINE.hpp"
#include "_INVENKEY.hpp"


START_ATF_NAMESPACE
    struct AutoMineMachine
    {
        bool m_bInit;
        bool m_bOpenUI;
        bool m_bRunning;
        char m_byRace;
        char m_byCollisionType;
        char m_bySelectedOre;
        _INVENKEY m_OreKind[5];
        CGuild *m_pOwnerGuild;
        unsigned int m_dwMiningTime;
        unsigned int m_dwMiningTerm;
        unsigned int m_dwDQSPushTime;
        _AUTOMINE_BATTERY m_Battery;
        TInventory m_Inven;
        CLogFile m_sysLog;
        CLogFile m_Log;
    public:
        AutoMineMachine()
        {
            using org_ptr = void (WINAPIV*)(struct AutoMineMachine*);
            (org_ptr(0x1402d0340L))(this);
        };
        void ctor_AutoMineMachine()
        {
            using org_ptr = void (WINAPIV*)(struct AutoMineMachine*);
            (org_ptr(0x1402d0340L))(this);
        };
        void ChangeOwner(struct CGuild* pOwnerGuild)
        {
            using org_ptr = void (WINAPIV*)(struct AutoMineMachine*, struct CGuild*);
            (org_ptr(0x1402d0ec0L))(this, pOwnerGuild);
        };
        void Charge(int n, int nCharge, int nGold)
        {
            using org_ptr = void (WINAPIV*)(struct AutoMineMachine*, int, int, int);
            (org_ptr(0x1402d1590L))(this, n, nCharge, nGold);
        };
        void Discharge()
        {
            using org_ptr = void (WINAPIV*)(struct AutoMineMachine*);
            (org_ptr(0x1402d1790L))(this);
        };
        void GetMachineInfo(struct _DB_LOAD_AUTOMINE_MACHINE* pInfo)
        {
            using org_ptr = void (WINAPIV*)(struct AutoMineMachine*, struct _DB_LOAD_AUTOMINE_MACHINE*);
            (org_ptr(0x1402d1250L))(this, pInfo);
        };
        void GetOutOreInAutoMine(struct CPlayer* pUser, char* pMsg)
        {
            using org_ptr = void (WINAPIV*)(struct AutoMineMachine*, struct CPlayer*, char*);
            (org_ptr(0x1402d1ad0L))(this, pUser, pMsg);
        };
        struct CGuild* GetOwnerGuild()
        {
            using org_ptr = struct CGuild* (WINAPIV*)(struct AutoMineMachine*);
            return (org_ptr(0x14029d6f0L))(this);
        };
        void GetState(unsigned int* dwState)
        {
            using org_ptr = void (WINAPIV*)(struct AutoMineMachine*, unsigned int*);
            (org_ptr(0x1402d17b0L))(this, dwState);
        };
        bool Initialize(char byRace, char byCollisionType)
        {
            using org_ptr = bool (WINAPIV*)(struct AutoMineMachine*, char, char);
            return (org_ptr(0x1402d0570L))(this, byRace, byCollisionType);
        };
        bool IsMaster(struct CPlayer* pUser)
        {
            using org_ptr = bool (WINAPIV*)(struct AutoMineMachine*, struct CPlayer*);
            return (org_ptr(0x1402d1020L))(this, pUser);
        };
        bool LoadDatabase(struct _DB_LOAD_AUTOMINE_MACHINE* pdata)
        {
            using org_ptr = bool (WINAPIV*)(struct AutoMineMachine*, struct _DB_LOAD_AUTOMINE_MACHINE*);
            return (org_ptr(0x1402d0940L))(this, pdata);
        };
        void Loop()
        {
            using org_ptr = void (WINAPIV*)(struct AutoMineMachine*);
            (org_ptr(0x1402d2530L))(this);
        };
        void MoveOreInAutoMine(int n, char sl, char ss, char dl, char ds)
        {
            using org_ptr = void (WINAPIV*)(struct AutoMineMachine*, int, char, char, char, char);
            (org_ptr(0x1402d1800L))(this, n, sl, ss, dl, ds);
        };
        void OreMerge(int n, char* pMsg)
        {
            using org_ptr = void (WINAPIV*)(struct AutoMineMachine*, int, char*);
            (org_ptr(0x1402d1fd0L))(this, n, pMsg);
        };
        void SelectOre(int n, char byOre)
        {
            using org_ptr = void (WINAPIV*)(struct AutoMineMachine*, int, char);
            (org_ptr(0x1402d1430L))(this, n, byOre);
        };
        void SendMsg_MachineInfo(int n)
        {
            using org_ptr = void (WINAPIV*)(struct AutoMineMachine*, int);
            (org_ptr(0x1402d2830L))(this, n);
        };
        void SendMsg_ResultCode(int n, char byType, char byRetCode)
        {
            using org_ptr = void (WINAPIV*)(struct AutoMineMachine*, int, char, char);
            (org_ptr(0x1402d2a80L))(this, n, byType, byRetCode);
        };
        void SetOpenUI(bool bOpen)
        {
            using org_ptr = void (WINAPIV*)(struct AutoMineMachine*, bool);
            (org_ptr(0x1402d7940L))(this, bOpen);
        };
        bool SetOwner(char byRace, char byCollisionType, struct CGuild* pGuild)
        {
            using org_ptr = bool (WINAPIV*)(struct AutoMineMachine*, char, char, struct CGuild*);
            return (org_ptr(0x1402d0d10L))(this, byRace, byCollisionType, pGuild);
        };
        void Start(int n)
        {
            using org_ptr = void (WINAPIV*)(struct AutoMineMachine*, int);
            (org_ptr(0x1402d10b0L))(this, n);
        };
        void Stop(int n)
        {
            using org_ptr = void (WINAPIV*)(struct AutoMineMachine*, int);
            (org_ptr(0x1402d1180L))(this, n);
        };
        void SubChargeCost(char byRet, char* pdata)
        {
            using org_ptr = void (WINAPIV*)(struct AutoMineMachine*, char, char*);
            (org_ptr(0x1402d25e0L))(this, byRet, pdata);
        };
        int _Convert_GoldToGage(int nGold)
        {
            using org_ptr = int (WINAPIV*)(struct AutoMineMachine*, int);
            return (org_ptr(0x1402d1520L))(this, nGold);
        };
        bool _InitMineOre()
        {
            using org_ptr = bool (WINAPIV*)(struct AutoMineMachine*);
            return (org_ptr(0x1402d07e0L))(this);
        };
        void _Mining()
        {
            using org_ptr = void (WINAPIV*)(struct AutoMineMachine*);
            (org_ptr(0x1402d20f0L))(this);
        };
        void push_dqs_battery_charge(uint16_t wIndex, int ncharge, int ncost)
        {
            using org_ptr = void (WINAPIV*)(struct AutoMineMachine*, uint16_t, int, int);
            (org_ptr(0x1402d2bd0L))(this, wIndex, ncharge, ncost);
        };
        void push_dqs_battery_discharge()
        {
            using org_ptr = void (WINAPIV*)(struct AutoMineMachine*);
            (org_ptr(0x1402d2db0L))(this);
        };
        void push_dqs_getore(int nP, int nS, char byNum)
        {
            using org_ptr = void (WINAPIV*)(struct AutoMineMachine*, int, int, char);
            (org_ptr(0x1402d2fa0L))(this, nP, nS, byNum);
        };
        void push_dqs_mineore(int nP, int nS)
        {
            using org_ptr = void (WINAPIV*)(struct AutoMineMachine*, int, int);
            (org_ptr(0x1402d2e70L))(this, nP, nS);
        };
        void push_dqs_moveore(int nDBSlot_S, struct _INVENKEY* pSKey, char bySNum, int nDBSlot_D, struct _INVENKEY* pDKey, char byDNum)
        {
            using org_ptr = void (WINAPIV*)(struct AutoMineMachine*, int, struct _INVENKEY*, char, int, struct _INVENKEY*, char);
            (org_ptr(0x1402d3090L))(this, nDBSlot_S, pSKey, bySNum, nDBSlot_D, pDKey, byDNum);
        };
        void push_dqs_newowner()
        {
            using org_ptr = void (WINAPIV*)(struct AutoMineMachine*);
            (org_ptr(0x1402d2b20L))(this);
        };
        void push_dqs_selore()
        {
            using org_ptr = void (WINAPIV*)(struct AutoMineMachine*);
            (org_ptr(0x1402d3290L))(this);
        };
        void push_dqs_workingstate()
        {
            using org_ptr = void (WINAPIV*)(struct AutoMineMachine*);
            (org_ptr(0x1402d31d0L))(this);
        };
        ~AutoMineMachine()
        {
            using org_ptr = void (WINAPIV*)(struct AutoMineMachine*);
            (org_ptr(0x1402d04a0L))(this);
        };
        void dtor_AutoMineMachine()
        {
            using org_ptr = void (WINAPIV*)(struct AutoMineMachine*);
            (org_ptr(0x1402d04a0L))(this);
        };
    };
END_ATF_NAMESPACE
