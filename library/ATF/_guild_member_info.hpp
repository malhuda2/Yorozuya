// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "CPlayer.hpp"


START_ATF_NAMESPACE
    #pragma pack(push, 8)
    struct _guild_member_info
    {
        unsigned int dwSerial;
        char wszName[17];
        char byClassInGuild;
        char byLv;
        unsigned int dwPvpPoint;
        char byRank;
        char byGrade;
        CPlayer *pPlayer;
        bool bVote;
    public:
        bool IsFill()
        {
            using org_ptr = bool (WINAPIV*)(struct _guild_member_info*);
            return (org_ptr(0x140095050L))(this);
        };
        _guild_member_info()
        {
            using org_ptr = void (WINAPIV*)(struct _guild_member_info*);
            (org_ptr(0x1400ad350L))(this);
        };
        void ctor__guild_member_info()
        {
            using org_ptr = void (WINAPIV*)(struct _guild_member_info*);
            (org_ptr(0x1400ad350L))(this);
        };
        void init()
        {
            using org_ptr = void (WINAPIV*)(struct _guild_member_info*);
            (org_ptr(0x1400ad3a0L))(this);
        };
    };
    #pragma pack(pop)
END_ATF_NAMESPACE
