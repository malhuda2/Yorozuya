// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "_REGED.hpp"


START_ATF_NAMESPACE
    #pragma pack(push, 1)
    struct   _AVATOR_DB_BASE : _REGED
    {
        unsigned int m_dwHP;
        unsigned int m_dwFP;
        unsigned int m_dwSP;
        unsigned int m_dwDP;
        long double m_dExp;
        long double m_dLossExp;
        long double m_dPvPPoint;
        long double m_dPvPCashBag;
        unsigned int m_dwPvpRank;
        unsigned __int16 m_wRankRate;
        unsigned int m_dwRadarDelayTime;
        char m_byBagNum;
        char m_byMapCode;
        __int16 m_zClassHistory[3];
        unsigned int m_dwClassInitCnt;
        char m_byLastClassGrade;
        float m_fStartPos[3];
        unsigned int m_dwTotalPlayMin;
        unsigned int m_dwStartPlayTime;
        char m_szBindMapCode[12];
        char m_szBindDummy[12];
        unsigned int m_dwGuildSerial;
        char m_byClassInGuild;
        unsigned int m_dwGuildExplusDate;
        char m_byGuildExplusApprovNum;
        char m_byGuildExplusSeniorNum;
        unsigned int m_dwAccountSerial;
        bool m_bOverlapVote;
        unsigned int m_dwGivebackCount;
        unsigned int m_dwCashAmount;
        unsigned int m_dwTakeLastMentalTicket;
        unsigned int m_dwTakeLastCriTicket;
        char m_byMaxLevel;
        unsigned int m_dwPunishment[3];
        unsigned int m_dwElectSerial[3];
        unsigned int m_dwRaceBattleRecord[3];
        long double m_dPvPPointLeak;
    public:
        void Init()
        {
            using org_ptr = void (WINAPIV*)(struct _AVATOR_DB_BASE*);
            (org_ptr(0x1400756a0L))(this);
        };
        _AVATOR_DB_BASE()
        {
            using org_ptr = void (WINAPIV*)(struct _AVATOR_DB_BASE*);
            (org_ptr(0x1400753c0L))(this);
        };
        void ctor__AVATOR_DB_BASE()
        {
            using org_ptr = void (WINAPIV*)(struct _AVATOR_DB_BASE*);
            (org_ptr(0x1400753c0L))(this);
        };
    };
    #pragma pack(pop)
END_ATF_NAMESPACE
