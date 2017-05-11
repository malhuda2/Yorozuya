// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "CPlayer.hpp"
#include "_guild_master_advantage_info.hpp"


START_ATF_NAMESPACE
    struct CGuildMasterEffect
    {
        char m_byAdjustableGrade;
        _guild_master_advantage_info m_EffectData[8];
    public:
        CGuildMasterEffect()
        {
            using org_ptr = void (WINAPIV*)(struct CGuildMasterEffect*);
            (org_ptr(0x1403f46e0L))(this);
        };
        void ctor_CGuildMasterEffect()
        {
            using org_ptr = void (WINAPIV*)(struct CGuildMasterEffect*);
            (org_ptr(0x1403f46e0L))(this);
        };
        static struct CGuildMasterEffect* GetInstance()
        {
            using org_ptr = struct CGuildMasterEffect* (WINAPIV*)();
            return (org_ptr(0x140078f80L))();
        };
        void adjust_effect(struct CPlayer* pP, char byGrade, bool bAdd)
        {
            using org_ptr = void (WINAPIV*)(struct CGuildMasterEffect*, struct CPlayer*, char, bool);
            (org_ptr(0x1403f4b10L))(this, pP, byGrade, bAdd);
        };
        bool change_player(struct CPlayer* pP, char byBeforeGrade, char byAfterGrade)
        {
            using org_ptr = bool (WINAPIV*)(struct CGuildMasterEffect*, struct CPlayer*, char, char);
            return (org_ptr(0x1403f4a00L))(this, pP, byBeforeGrade, byAfterGrade);
        };
        char get_AdjustableGrade()
        {
            using org_ptr = char (WINAPIV*)(struct CGuildMasterEffect*);
            return (org_ptr(0x1400ef310L))(this);
        };
        char get_AttactValueByGrade(char byGrade)
        {
            using org_ptr = char (WINAPIV*)(struct CGuildMasterEffect*, char);
            return (org_ptr(0x1403f4bd0L))(this, byGrade);
        };
        char get_DefenceValueByGrade(char byGrade)
        {
            using org_ptr = char (WINAPIV*)(struct CGuildMasterEffect*, char);
            return (org_ptr(0x1403f4c60L))(this, byGrade);
        };
        bool in_player(struct CPlayer* pP, char byGrade)
        {
            using org_ptr = bool (WINAPIV*)(struct CGuildMasterEffect*, struct CPlayer*, char);
            return (org_ptr(0x1403f4850L))(this, pP, byGrade);
        };
        bool init()
        {
            using org_ptr = bool (WINAPIV*)(struct CGuildMasterEffect*);
            return (org_ptr(0x1403f4720L))(this);
        };
        bool out_player(struct CPlayer* pP, char byGrade)
        {
            using org_ptr = bool (WINAPIV*)(struct CGuildMasterEffect*, struct CPlayer*, char);
            return (org_ptr(0x1403f4940L))(this, pP, byGrade);
        };
        void show_to_all(struct CPlayer* pP, char byBeforeGrade, char byGrade, char byState)
        {
            using org_ptr = void (WINAPIV*)(struct CGuildMasterEffect*, struct CPlayer*, char, char, char);
            (org_ptr(0x1403f4cf0L))(this, pP, byBeforeGrade, byGrade, byState);
        };
    };
END_ATF_NAMESPACE
