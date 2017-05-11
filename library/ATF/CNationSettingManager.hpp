// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "CBilling.hpp"
#include "CHEAT_COMMAND.hpp"
#include "CNationSettingData.hpp"
#include "CPlayer.hpp"
#include "CTSingleton.hpp"
#include "CashDbWorker.hpp"
#include "_CashShop_str_fld.hpp"
#include "_MSG_HEADER.hpp"
#include "_NameTxt_fld.hpp"


START_ATF_NAMESPACE
    struct  CNationSettingManager : CTSingleton<CNationSettingManager>
    {
        CNationSettingData *m_pData;
    public:
        CNationSettingManager()
        {
            using org_ptr = void (WINAPIV*)(struct CNationSettingManager*);
            (org_ptr(0x140229190L))(this);
        };
        void ctor_CNationSettingManager()
        {
            using org_ptr = void (WINAPIV*)(struct CNationSettingManager*);
            (org_ptr(0x140229190L))(this);
        };
        bool CheckEnterWorldRequest(int n, char* pBuf)
        {
            using org_ptr = bool (WINAPIV*)(struct CNationSettingManager*, int, char*);
            return (org_ptr(0x1402292c0L))(this, n, pBuf);
        };
        struct CBilling* CreateBilling()
        {
            using org_ptr = struct CBilling* (WINAPIV*)(struct CNationSettingManager*);
            return (org_ptr(0x14028dfd0L))(this);
        };
        void CreateComplete(struct CPlayer* pOne)
        {
            using org_ptr = void (WINAPIV*)(struct CNationSettingManager*, struct CPlayer*);
            (org_ptr(0x140079a60L))(this, pOne);
        };
        struct CashDbWorker* CreateWorker()
        {
            using org_ptr = struct CashDbWorker* (WINAPIV*)(struct CNationSettingManager*);
            return (org_ptr(0x1402f36e0L))(this);
        };
        uint16_t GetBillingForceCloseDelay()
        {
            using org_ptr = uint16_t (WINAPIV*)(struct CNationSettingManager*);
            return (org_ptr(0x14007bfb0L))(this);
        };
        char* GetCashDBDBIP()
        {
            using org_ptr = char* (WINAPIV*)(struct CNationSettingManager*);
            return (org_ptr(0x1402f2c10L))(this);
        };
        char* GetCashDBID()
        {
            using org_ptr = char* (WINAPIV*)(struct CNationSettingManager*);
            return (org_ptr(0x1402f2c50L))(this);
        };
        char* GetCashDBName()
        {
            using org_ptr = char* (WINAPIV*)(struct CNationSettingManager*);
            return (org_ptr(0x1402f2c30L))(this);
        };
        char* GetCashDBPW()
        {
            using org_ptr = char* (WINAPIV*)(struct CNationSettingManager*);
            return (org_ptr(0x1402f2c70L))(this);
        };
        uint16_t GetCashDBPort()
        {
            using org_ptr = uint16_t (WINAPIV*)(struct CNationSettingManager*);
            return (org_ptr(0x1402f2c90L))(this);
        };
        int GetCashItemPrice(struct _CashShop_str_fld* pFld)
        {
            using org_ptr = int (WINAPIV*)(struct CNationSettingManager*, struct _CashShop_str_fld*);
            return (org_ptr(0x140304810L))(this, pFld);
        };
        struct CHEAT_COMMAND* GetCheatTable()
        {
            using org_ptr = struct CHEAT_COMMAND* (WINAPIV*)(struct CNationSettingManager*);
            return (org_ptr(0x14029d450L))(this);
        };
        char* GetItemName(struct _NameTxt_fld* pFld)
        {
            using org_ptr = char* (WINAPIV*)(struct CNationSettingManager*, struct _NameTxt_fld*);
            return (org_ptr(0x140204b80L))(this, pFld);
        };
        int GetNationCode()
        {
            using org_ptr = int (WINAPIV*)(struct CNationSettingManager*);
            return (org_ptr(0x140207e10L))(this);
        };
        char* GetNationCodeStr()
        {
            using org_ptr = char* (WINAPIV*)(struct CNationSettingManager*);
            return (org_ptr(0x140028f30L))(this);
        };
        char* GetNoneString()
        {
            using org_ptr = char* (WINAPIV*)(struct CNationSettingManager*);
            return (org_ptr(0x140122fb0L))(this);
        };
        char* GetServerVaildKey()
        {
            using org_ptr = char* (WINAPIV*)(struct CNationSettingManager*);
            return (org_ptr(0x1400efff0L))(this);
        };
        char* GetWorldDBID()
        {
            using org_ptr = char* (WINAPIV*)(struct CNationSettingManager*);
            return (org_ptr(0x1402057d0L))(this);
        };
        char* GetWorldDBPW()
        {
            using org_ptr = char* (WINAPIV*)(struct CNationSettingManager*);
            return (org_ptr(0x1402057f0L))(this);
        };
        int Init(int iNationCode, char* szNationCodeStr, bool bServiceMode)
        {
            using org_ptr = int (WINAPIV*)(struct CNationSettingManager*, int, char*, bool);
            return (org_ptr(0x140228ff0L))(this, iNationCode, szNationCodeStr, bServiceMode);
        };
        bool IsApplyPcbangPrimium(struct CPlayer* pUser)
        {
            using org_ptr = bool (WINAPIV*)(struct CNationSettingManager*, struct CPlayer*);
            return (org_ptr(0x14007e070L))(this, pUser);
        };
        bool IsCashDBDSNSetted()
        {
            using org_ptr = bool (WINAPIV*)(struct CNationSettingManager*);
            return (org_ptr(0x1402f2cb0L))(this);
        };
        bool IsCashDBInit()
        {
            using org_ptr = bool (WINAPIV*)(struct CNationSettingManager*);
            return (org_ptr(0x1402f2650L))(this);
        };
        bool IsCashDBUseExtRef()
        {
            using org_ptr = bool (WINAPIV*)(struct CNationSettingManager*);
            return (org_ptr(0x1402f3630L))(this);
        };
        bool IsNormalString(char* szString)
        {
            using org_ptr = bool (WINAPIV*)(struct CNationSettingManager*, char*);
            return (org_ptr(0x1400ad0d0L))(this, szString);
        };
        bool IsPersonalFreeFixedAmountBillingType(int16_t* pDest1, int16_t* pDest2)
        {
            using org_ptr = bool (WINAPIV*)(struct CNationSettingManager*, int16_t*, int16_t*);
            return (org_ptr(0x14007d650L))(this, pDest1, pDest2);
        };
        void Loop()
        {
            using org_ptr = void (WINAPIV*)(struct CNationSettingManager*);
            (org_ptr(0x140229560L))(this);
        };
        void NetClose(struct CPlayer* pOne)
        {
            using org_ptr = void (WINAPIV*)(struct CNationSettingManager*, struct CPlayer*);
            (org_ptr(0x14007a150L))(this, pOne);
        };
        bool OnCheckSession_FirstVerify(int n)
        {
            using org_ptr = bool (WINAPIV*)(struct CNationSettingManager*, int);
            return (org_ptr(0x140229470L))(this, n);
        };
        void OnConnectSession(int n)
        {
            using org_ptr = void (WINAPIV*)(struct CNationSettingManager*, int);
            (org_ptr(0x140229400L))(this, n);
        };
        void OnDisConnectSession(int n)
        {
            using org_ptr = void (WINAPIV*)(struct CNationSettingManager*, int);
            (org_ptr(0x1402294f0L))(this, n);
        };
        bool RecvGameGuardData(int n, struct _MSG_HEADER* pHeader, char* pBuff)
        {
            using org_ptr = bool (WINAPIV*)(struct CNationSettingManager*, int, struct _MSG_HEADER*, char*);
            return (org_ptr(0x140229370L))(this, n, pHeader, pBuff);
        };
        void SendCashDBDSNRequest()
        {
            using org_ptr = void (WINAPIV*)(struct CNationSettingManager*);
            (org_ptr(0x140208060L))(this);
        };
        void SetCashDBDSN(char* szIP, char* szDBName, char* szAccount, char* szPassword, unsigned int dwPort)
        {
            using org_ptr = void (WINAPIV*)(struct CNationSettingManager*, char*, char*, char*, char*, unsigned int);
            (org_ptr(0x140205750L))(this, szIP, szDBName, szAccount, szPassword, dwPort);
        };
        void SetCashDBInitState()
        {
            using org_ptr = void (WINAPIV*)(struct CNationSettingManager*);
            (org_ptr(0x1402f2d60L))(this);
        };
        void SetUnitPassiveValue(float* fUnitPv_DefFc)
        {
            using org_ptr = void (WINAPIV*)(struct CNationSettingManager*, float*);
            (org_ptr(0x140078ef0L))(this, fUnitPv_DefFc);
        };
        bool ValidMacAddress()
        {
            using org_ptr = bool (WINAPIV*)(struct CNationSettingManager*);
            return (org_ptr(0x140208160L))(this);
        };
        ~CNationSettingManager()
        {
            using org_ptr = void (WINAPIV*)(struct CNationSettingManager*);
            (org_ptr(0x1402291f0L))(this);
        };
        void dtor_CNationSettingManager()
        {
            using org_ptr = void (WINAPIV*)(struct CNationSettingManager*);
            (org_ptr(0x1402291f0L))(this);
        };
    };
END_ATF_NAMESPACE
