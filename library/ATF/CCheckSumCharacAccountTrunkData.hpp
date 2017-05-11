// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "CRFWorldDatabase.hpp"
#include "_AVATOR_DATA.hpp"


START_ATF_NAMESPACE
    struct CCheckSumCharacAccountTrunkData
    {
        enum COLUMN_DW_TYPE
        {
            CDWT_BASE = 0xFFFFFFFF,
            CDWT_DALANT = 0x0,
            CDWT_GOLD = 0x1,
            CDWT_LV = 0x2,
            CDWT_NEAR_MASTERY = 0x3,
            CDWT_DIS_MASTERY = 0x4,
            CDWT_DEF_MASTERY = 0x5,
            CDWT_DW_MAX_TYPE = 0x6,
        };
        enum COLUMN_D_TYPE
        {
            CDT_BASE = 0xFFFFFFFF,
            CDT_TRUNK_DALANT = 0x0,
            CDT_TRUNK_GOLD = 0x1,
            CDT_MAX_TYPE = 0x2,
        };
        unsigned int m_dwSerial;
        unsigned int m_dwAccountSerial;
        char m_byRace;
        unsigned int m_dwValues[6];
        long double m_dValues[2];
    public:
        CCheckSumCharacAccountTrunkData(unsigned int dwSerial, unsigned int dwAccountSerial, char byRace)
        {
            using org_ptr = void (WINAPIV*)(struct CCheckSumCharacAccountTrunkData*, unsigned int, unsigned int, char);
            (org_ptr(0x1402c06a0L))(this, dwSerial, dwAccountSerial, byRace);
        };
        void ctor_CCheckSumCharacAccountTrunkData(unsigned int dwSerial, unsigned int dwAccountSerial, char byRace)
        {
            using org_ptr = void (WINAPIV*)(struct CCheckSumCharacAccountTrunkData*, unsigned int, unsigned int, char);
            (org_ptr(0x1402c06a0L))(this, dwSerial, dwAccountSerial, byRace);
        };
        int CheckDiff(struct CRFWorldDatabase* pkDB, char* wszName, struct CCheckSumCharacAccountTrunkData* kSrcValue)
        {
            using org_ptr = int (WINAPIV*)(struct CCheckSumCharacAccountTrunkData*, struct CRFWorldDatabase*, char*, struct CCheckSumCharacAccountTrunkData*);
            return (org_ptr(0x1402c08e0L))(this, pkDB, wszName, kSrcValue);
        };
        void Decode(struct _AVATOR_DATA* pAvator)
        {
            using org_ptr = void (WINAPIV*)(struct CCheckSumCharacAccountTrunkData*, struct _AVATOR_DATA*);
            (org_ptr(0x1402c0c60L))(this, pAvator);
        };
        void Encode(struct _AVATOR_DATA* pAvator)
        {
            using org_ptr = void (WINAPIV*)(struct CCheckSumCharacAccountTrunkData*, struct _AVATOR_DATA*);
            (org_ptr(0x1402c0c00L))(this, pAvator);
        };
        bool InsertCharacData(struct CRFWorldDatabase* pkDB)
        {
            using org_ptr = bool (WINAPIV*)(struct CCheckSumCharacAccountTrunkData*, struct CRFWorldDatabase*);
            return (org_ptr(0x1402c0cc0L))(this, pkDB);
        };
        bool InsertTrunkData(struct CRFWorldDatabase* pkDB)
        {
            using org_ptr = bool (WINAPIV*)(struct CCheckSumCharacAccountTrunkData*, struct CRFWorldDatabase*);
            return (org_ptr(0x1402c0d20L))(this, pkDB);
        };
        int Load(struct CRFWorldDatabase* pkDB, struct CCheckSumCharacAccountTrunkData* kSrcValue)
        {
            using org_ptr = int (WINAPIV*)(struct CCheckSumCharacAccountTrunkData*, struct CRFWorldDatabase*, struct CCheckSumCharacAccountTrunkData*);
            return (org_ptr(0x1402c0750L))(this, pkDB, kSrcValue);
        };
        void SetValue(COLUMN_DW_TYPE eType, unsigned int dwValue)
        {
            using org_ptr = void (WINAPIV*)(struct CCheckSumCharacAccountTrunkData*, COLUMN_DW_TYPE, unsigned int);
            (org_ptr(0x1402c0e20L))(this, eType, dwValue);
        };
        void SetValue(COLUMN_D_TYPE eType, long double dValue)
        {
            using org_ptr = void (WINAPIV*)(struct CCheckSumCharacAccountTrunkData*, COLUMN_D_TYPE, long double);
            (org_ptr(0x1402c0e60L))(this, eType, dValue);
        };
        bool Update(struct CRFWorldDatabase* pkDB)
        {
            using org_ptr = bool (WINAPIV*)(struct CCheckSumCharacAccountTrunkData*, struct CRFWorldDatabase*);
            return (org_ptr(0x1402c0b60L))(this, pkDB);
        };
        ~CCheckSumCharacAccountTrunkData()
        {
            using org_ptr = void (WINAPIV*)(struct CCheckSumCharacAccountTrunkData*);
            (org_ptr(0x1402c0740L))(this);
        };
        void dtor_CCheckSumCharacAccountTrunkData()
        {
            using org_ptr = void (WINAPIV*)(struct CCheckSumCharacAccountTrunkData*);
            (org_ptr(0x1402c0740L))(this);
        };
    };
END_ATF_NAMESPACE
