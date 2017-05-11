// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "TournamentWinner.hpp"


START_ATF_NAMESPACE
    struct CBattleTournamentInfo
    {
        bool m_bLoad;
        int m_nCurNum;
        TournamentWinner m_WinnerInfo[48];
    public:
        CBattleTournamentInfo()
        {
            using org_ptr = void (WINAPIV*)(struct CBattleTournamentInfo*);
            (org_ptr(0x1403fea40L))(this);
        };
        void ctor_CBattleTournamentInfo()
        {
            using org_ptr = void (WINAPIV*)(struct CBattleTournamentInfo*);
            (org_ptr(0x1403fea40L))(this);
        };
        char GetWinnerGrade(unsigned int dwSerial, char* pwszCharName)
        {
            using org_ptr = char (WINAPIV*)(struct CBattleTournamentInfo*, unsigned int, char*);
            return (org_ptr(0x1403fec30L))(this, dwSerial, pwszCharName);
        };
        void Init()
        {
            using org_ptr = void (WINAPIV*)(struct CBattleTournamentInfo*);
            (org_ptr(0x1403feac0L))(this);
        };
        void SetLoad(bool bLoad)
        {
            using org_ptr = void (WINAPIV*)(struct CBattleTournamentInfo*, bool);
            (org_ptr(0x1403feb50L))(this, bLoad);
        };
        bool SetWinnerInfo(unsigned int dwSerial, char* pwszCharName, char byGrade)
        {
            using org_ptr = bool (WINAPIV*)(struct CBattleTournamentInfo*, unsigned int, char*, char);
            return (org_ptr(0x1403feb70L))(this, dwSerial, pwszCharName, byGrade);
        };
        ~CBattleTournamentInfo()
        {
            using org_ptr = void (WINAPIV*)(struct CBattleTournamentInfo*);
            (org_ptr(0x1403feab0L))(this);
        };
        void dtor_CBattleTournamentInfo()
        {
            using org_ptr = void (WINAPIV*)(struct CBattleTournamentInfo*);
            (org_ptr(0x1403feab0L))(this);
        };
    };
END_ATF_NAMESPACE
