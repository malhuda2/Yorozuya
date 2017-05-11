// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "CLogFile.hpp"


START_ATF_NAMESPACE
    namespace GUILD_BATTLE
    {
        struct CNormalGuildBattleLogger
        {
            CLogFile *m_pkLogger;
        public:
            CNormalGuildBattleLogger()
            {
                using org_ptr = void (WINAPIV*)(struct CNormalGuildBattleLogger*);
                (org_ptr(0x1403eb070L))(this);
            };
            void ctor_CNormalGuildBattleLogger()
            {
                using org_ptr = void (WINAPIV*)(struct CNormalGuildBattleLogger*);
                (org_ptr(0x1403eb070L))(this);
            };
            void CreateLogFile(char* szLogName)
            {
                using org_ptr = void (WINAPIV*)(struct CNormalGuildBattleLogger*, char*);
                (org_ptr(0x1403ced50L))(this, szLogName);
            };
            bool Init()
            {
                using org_ptr = bool (WINAPIV*)(struct CNormalGuildBattleLogger*);
                return (org_ptr(0x1403cec70L))(this);
            };
            void Log(char* fmt)
            {
                using org_ptr = void (WINAPIV*)(struct CNormalGuildBattleLogger*, char*);
                (org_ptr(0x1403cee40L))(this, fmt);
            };
            void Log(wchar_t* fmt)
            {
                using org_ptr = void (WINAPIV*)(struct CNormalGuildBattleLogger*, wchar_t*);
                (org_ptr(0x1403ceed0L))(this, fmt);
            };
            ~CNormalGuildBattleLogger()
            {
                using org_ptr = void (WINAPIV*)(struct CNormalGuildBattleLogger*);
                (org_ptr(0x1403cebe0L))(this);
            };
            void dtor_CNormalGuildBattleLogger()
            {
                using org_ptr = void (WINAPIV*)(struct CNormalGuildBattleLogger*);
                (org_ptr(0x1403cebe0L))(this);
            };
        };
    }; // end namespace GUILD_BATTLE
END_ATF_NAMESPACE
