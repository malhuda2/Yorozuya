// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "GUILD_BATTLE__CGuildBattleVtbl.hpp"


START_ATF_NAMESPACE
    namespace GUILD_BATTLE
    {
        struct CGuildBattle
        {
            enum GB_OBJ_TYPE
            {
                GB_OBJ_NONE = 0xFFFFFFFF,
                GB_OBJ_NORMAL = 0x0,
            };
            CGuildBattleVtbl *vfptr;
        public:
            CGuildBattle()
            {
                using org_ptr = void (WINAPIV*)(struct CGuildBattle*);
                (org_ptr(0x1403eb010L))(this);
            };
            void ctor_CGuildBattle()
            {
                using org_ptr = void (WINAPIV*)(struct CGuildBattle*);
                (org_ptr(0x1403eb010L))(this);
            };
            int GetObjType()
            {
                using org_ptr = int (WINAPIV*)(struct CGuildBattle*);
                return (org_ptr(0x1403eb060L))(this);
            };
            ~CGuildBattle()
            {
                using org_ptr = void (WINAPIV*)(struct CGuildBattle*);
                (org_ptr(0x1403eb040L))(this);
            };
            void dtor_CGuildBattle()
            {
                using org_ptr = void (WINAPIV*)(struct CGuildBattle*);
                (org_ptr(0x1403eb040L))(this);
            };
        };
    }; // end namespace GUILD_BATTLE
END_ATF_NAMESPACE
