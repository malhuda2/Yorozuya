// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "_notify_race_leader_s_owner_u_taxrate.hpp"


START_ATF_NAMESPACE
    struct CNotifyNotifyRaceLeaderSownerUTaxrate
    {
        _notify_race_leader_s_owner_u_taxrate m_Send[3];
    public:
        CNotifyNotifyRaceLeaderSownerUTaxrate()
        {
            using org_ptr = void (WINAPIV*)(struct CNotifyNotifyRaceLeaderSownerUTaxrate*);
            (org_ptr(0x1401219a0L))(this);
        };
        void ctor_CNotifyNotifyRaceLeaderSownerUTaxrate()
        {
            using org_ptr = void (WINAPIV*)(struct CNotifyNotifyRaceLeaderSownerUTaxrate*);
            (org_ptr(0x1401219a0L))(this);
        };
        void Init()
        {
            using org_ptr = void (WINAPIV*)(struct CNotifyNotifyRaceLeaderSownerUTaxrate*);
            (org_ptr(0x1401219c0L))(this);
        };
        void Notify(char byRace)
        {
            using org_ptr = void (WINAPIV*)(struct CNotifyNotifyRaceLeaderSownerUTaxrate*, char);
            (org_ptr(0x140121ef0L))(this, byRace);
        };
        void Notify(char byRace, uint16_t wIndex)
        {
            using org_ptr = void (WINAPIV*)(struct CNotifyNotifyRaceLeaderSownerUTaxrate*, char, uint16_t);
            (org_ptr(0x140122030L))(this, byRace, wIndex);
        };
        void UpdateRaceLeader(char byRace, char byNth, char* wszLeaderName)
        {
            using org_ptr = void (WINAPIV*)(struct CNotifyNotifyRaceLeaderSownerUTaxrate*, char, char, char*);
            (org_ptr(0x140121b60L))(this, byRace, byNth, wszLeaderName);
        };
        void UpdateSettlementOwner(char byRace, unsigned int dw1ThGuildSerial, unsigned int dw2ThGuildSerial)
        {
            using org_ptr = void (WINAPIV*)(struct CNotifyNotifyRaceLeaderSownerUTaxrate*, char, unsigned int, unsigned int);
            (org_ptr(0x140121c00L))(this, byRace, dw1ThGuildSerial, dw2ThGuildSerial);
        };
        void UpdateTaxRate(char byRace, char byTaxRate)
        {
            using org_ptr = void (WINAPIV*)(struct CNotifyNotifyRaceLeaderSownerUTaxrate*, char, char);
            (org_ptr(0x140121eb0L))(this, byRace, byTaxRate);
        };
    };
END_ATF_NAMESPACE
