// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "CBilling.hpp"
#include "CNationSettingDataVtbl.hpp"
#include "CPlayer.hpp"
#include "CHEAT_COMMAND.hpp"
#include "CashDbWorker.hpp"
#include "INationGameGuardSystem.hpp"
#include "_CashShop_str_fld.hpp"
#include "_NameTxt_fld.hpp"
#include "std__vector.hpp"


START_ATF_NAMESPACE
    struct CNationSettingData
    {
        enum CASH_DB_PROC_FLAG
        {
            CDPS_NOT_REF = 0xFFFFFFFF,
            CDPS_USE_REF = 0x0,
            CDPS_SET = 0x1,
            CDPS_INIT = 0x2,
        };
        CNationSettingDataVtbl *vfptr;
        bool m_bServiceMode;
        int m_iNationCode;
        char m_szNationCodeStr[3];
        int m_iANSICodePage;
        char m_szNoneString[8];
        char m_szCashDBName[64];
        char m_szCashDBIP[16];
        char m_szCashDBID[64];
        char m_szCashDBPW[64];
        unsigned __int16 m_wCashDBPort;
        CASH_DB_PROC_FLAG m_eCashDBFlag;
        char m_szWorldDBID[64];
        char m_szWorldDBPW[64];
        unsigned __int16 m_wBillingForceCloseDelay;
        char m_szVaildKey[17];
        std::vector<CHEAT_COMMAND> m_vecCheatData;
        INationGameGuardSystem *m_pGameGuardSystem;
    public:
        CNationSettingData()
        {
            using org_ptr = void (WINAPIV*)(struct CNationSettingData*);
            (org_ptr(0x1402119c0L))(this);
        };
        void ctor_CNationSettingData()
        {
            using org_ptr = void (WINAPIV*)(struct CNationSettingData*);
            (org_ptr(0x1402119c0L))(this);
        };
        bool CheckDBCSCompleteString(int nCodePage, char* strData, uint64_t* pCharacterCount)
        {
            using org_ptr = bool (WINAPIV*)(struct CNationSettingData*, int, char*, uint64_t*);
            return (org_ptr(0x140211e00L))(this, nCodePage, strData, pCharacterCount);
        };
        bool CheckEnterWorldRequest(int n, char* pBuf)
        {
            using org_ptr = bool (WINAPIV*)(struct CNationSettingData*, int, char*);
            return (org_ptr(0x1402128d0L))(this, n, pBuf);
        };
        struct CBilling* CreateBilling()
        {
            using org_ptr = struct CBilling* (WINAPIV*)(struct CNationSettingData*);
            return (org_ptr(0x140212870L))(this);
        };
        void CreateComplete(struct CPlayer* pOne)
        {
            using org_ptr = void (WINAPIV*)(struct CNationSettingData*, struct CPlayer*);
            (org_ptr(0x1402128f0L))(this, pOne);
        };
        struct CashDbWorker* CreateWorker()
        {
            using org_ptr = struct CashDbWorker* (WINAPIV*)(struct CNationSettingData*);
            return (org_ptr(0x140211be0L))(this);
        };
        int GetCashItemPrice(struct _CashShop_str_fld* pFld)
        {
            using org_ptr = int (WINAPIV*)(struct CNationSettingData*, struct _CashShop_str_fld*);
            return (org_ptr(0x140212910L))(this, pFld);
        };
        bool GetFireGuardEnableSetting()
        {
            using org_ptr = bool (WINAPIV*)(struct CNationSettingData*);
            return (org_ptr(0x140212380L))(this);
        };
        struct INationGameGuardSystem* GetGameGuardSystem()
        {
            using org_ptr = struct INationGameGuardSystem* (WINAPIV*)(struct CNationSettingData*);
            return (org_ptr(0x140229980L))(this);
        };
        char* GetItemName(struct _NameTxt_fld* pFld)
        {
            using org_ptr = char* (WINAPIV*)(struct CNationSettingData*, struct _NameTxt_fld*);
            return (org_ptr(0x140212880L))(this, pFld);
        };
        char* GetNoneString()
        {
            using org_ptr = char* (WINAPIV*)(struct CNationSettingData*);
            return (org_ptr(0x140123000L))(this);
        };
        bool GetTimeLimitEnableSetting()
        {
            using org_ptr = bool (WINAPIV*)(struct CNationSettingData*);
            return (org_ptr(0x140212480L))(this);
        };
        int Init()
        {
            using org_ptr = int (WINAPIV*)(struct CNationSettingData*);
            return (org_ptr(0x140211bc0L))(this);
        };
        bool IsApplyPcbangPrimium(struct CPlayer* pUser)
        {
            using org_ptr = bool (WINAPIV*)(struct CNationSettingData*, struct CPlayer*);
            return (org_ptr(0x140211d00L))(this, pUser);
        };
        bool IsCashDBDSNSetted()
        {
            using org_ptr = bool (WINAPIV*)(struct CNationSettingData*);
            return (org_ptr(0x1402f2d00L))(this);
        };
        bool IsCashDBInit()
        {
            using org_ptr = bool (WINAPIV*)(struct CNationSettingData*);
            return (org_ptr(0x1402f26a0L))(this);
        };
        bool IsCashDBUseExtRef()
        {
            using org_ptr = bool (WINAPIV*)(struct CNationSettingData*);
            return (org_ptr(0x1402f3680L))(this);
        };
        bool IsNormalChar(wchar_t wcChar)
        {
            using org_ptr = bool (WINAPIV*)(struct CNationSettingData*, wchar_t);
            return (org_ptr(0x140211cb0L))(this, wcChar);
        };
        bool IsNormalString(char* szString)
        {
            using org_ptr = bool (WINAPIV*)(struct CNationSettingData*, char*);
            return (org_ptr(0x140211bf0L))(this, szString);
        };
        bool IsNormalString(wchar_t* wszString)
        {
            using org_ptr = bool (WINAPIV*)(struct CNationSettingData*, wchar_t*);
            return (org_ptr(0x140211c50L))(this, wszString);
        };
        bool IsNormalStringDefProc(char* szString, char* szException)
        {
            using org_ptr = bool (WINAPIV*)(struct CNationSettingData*, char*, char*);
            return (org_ptr(0x140211f40L))(this, szString, szException);
        };
        bool IsNormalStringDefProc(wchar_t* wszString, wchar_t* wszException)
        {
            using org_ptr = bool (WINAPIV*)(struct CNationSettingData*, wchar_t*, wchar_t*);
            return (org_ptr(0x1402121f0L))(this, wszString, wszException);
        };
        bool IsPersonalFreeFixedAmountBillingType(int16_t* pDest1, int16_t* pDest2)
        {
            using org_ptr = bool (WINAPIV*)(struct CNationSettingData*, int16_t*, int16_t*);
            return (org_ptr(0x1402128b0L))(this, pDest1, pDest2);
        };
        void Loop()
        {
            using org_ptr = void (WINAPIV*)(struct CNationSettingData*);
            (org_ptr(0x140211bd0L))(this);
        };
        void NetClose(struct CPlayer* pOne)
        {
            using org_ptr = void (WINAPIV*)(struct CNationSettingData*, struct CPlayer*);
            (org_ptr(0x140212900L))(this, pOne);
        };
        bool ReadSystemPass()
        {
            using org_ptr = bool (WINAPIV*)(struct CNationSettingData*);
            return (org_ptr(0x140212930L))(this);
        };
        void SendCashDBDSNRequest()
        {
            using org_ptr = void (WINAPIV*)(struct CNationSettingData*);
            (org_ptr(0x140211d80L))(this);
        };
        void SetCahsDBUseExtRefFlag()
        {
            using org_ptr = void (WINAPIV*)(struct CNationSettingData*);
            (org_ptr(0x14022c740L))(this);
        };
        void SetCashDBDSN(char* szIP, char* szDBName, char* szAccount, char* szPassword, unsigned int dwPort)
        {
            using org_ptr = void (WINAPIV*)(struct CNationSettingData*, char*, char*, char*, char*, unsigned int);
            (org_ptr(0x140211b00L))(this, szIP, szDBName, szAccount, szPassword, dwPort);
        };
        void SetCashDBDSNSetFlag()
        {
            using org_ptr = void (WINAPIV*)(struct CNationSettingData*);
            (org_ptr(0x140212940L))(this);
        };
        void SetCashDBInitFlag()
        {
            using org_ptr = void (WINAPIV*)(struct CNationSettingData*);
            (org_ptr(0x1402f2db0L))(this);
        };
        void SetUnitPassiveValue(float* fUnitPv_DefFc)
        {
            using org_ptr = void (WINAPIV*)(struct CNationSettingData*, float*);
            (org_ptr(0x140211cd0L))(this, fUnitPv_DefFc);
        };
        bool ValidMacAddress()
        {
            using org_ptr = bool (WINAPIV*)(struct CNationSettingData*);
            return (org_ptr(0x1402128a0L))(this);
        };
        ~CNationSettingData()
        {
            using org_ptr = void (WINAPIV*)(struct CNationSettingData*);
            (org_ptr(0x140213140L))(this);
        };
        void dtor_CNationSettingData()
        {
            using org_ptr = void (WINAPIV*)(struct CNationSettingData*);
            (org_ptr(0x140213140L))(this);
        };
    };
END_ATF_NAMESPACE
