// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "GUILD_BATTLE__CNormalGuildBattleStateRoundProcess_info.hpp"


START_ATF_NAMESPACE
    namespace GUILD_BATTLE
    {
        namespace detail
        {
            info::GUILD_BATTLE__CNormalGuildBattleStateRoundProcessctor_CNormalGuildBattleStateRoundProcess2_ptr GUILD_BATTLE__CNormalGuildBattleStateRoundProcessctor_CNormalGuildBattleStateRoundProcess2_next(nullptr);
            info::GUILD_BATTLE__CNormalGuildBattleStateRoundProcessctor_CNormalGuildBattleStateRoundProcess2_clbk GUILD_BATTLE__CNormalGuildBattleStateRoundProcessctor_CNormalGuildBattleStateRoundProcess2_user(nullptr);
            info::GUILD_BATTLE__CNormalGuildBattleStateRoundProcessEnter4_ptr GUILD_BATTLE__CNormalGuildBattleStateRoundProcessEnter4_next(nullptr);
            info::GUILD_BATTLE__CNormalGuildBattleStateRoundProcessEnter4_clbk GUILD_BATTLE__CNormalGuildBattleStateRoundProcessEnter4_user(nullptr);
            info::GUILD_BATTLE__CNormalGuildBattleStateRoundProcessLoop6_ptr GUILD_BATTLE__CNormalGuildBattleStateRoundProcessLoop6_next(nullptr);
            info::GUILD_BATTLE__CNormalGuildBattleStateRoundProcessLoop6_clbk GUILD_BATTLE__CNormalGuildBattleStateRoundProcessLoop6_user(nullptr);
            info::GUILD_BATTLE__CNormalGuildBattleStateRoundProcessdtor_CNormalGuildBattleStateRoundProcess8_ptr GUILD_BATTLE__CNormalGuildBattleStateRoundProcessdtor_CNormalGuildBattleStateRoundProcess8_next(nullptr);
            info::GUILD_BATTLE__CNormalGuildBattleStateRoundProcessdtor_CNormalGuildBattleStateRoundProcess8_clbk GUILD_BATTLE__CNormalGuildBattleStateRoundProcessdtor_CNormalGuildBattleStateRoundProcess8_user(nullptr);
            
            void GUILD_BATTLE__CNormalGuildBattleStateRoundProcessctor_CNormalGuildBattleStateRoundProcess2_wrapper(struct GUILD_BATTLE::CNormalGuildBattleStateRoundProcess* _this)
            {
               GUILD_BATTLE__CNormalGuildBattleStateRoundProcessctor_CNormalGuildBattleStateRoundProcess2_user(_this, GUILD_BATTLE__CNormalGuildBattleStateRoundProcessctor_CNormalGuildBattleStateRoundProcess2_next);
            };
            int GUILD_BATTLE__CNormalGuildBattleStateRoundProcessEnter4_wrapper(struct GUILD_BATTLE::CNormalGuildBattleStateRoundProcess* _this, struct GUILD_BATTLE::CNormalGuildBattle* pkBattle)
            {
               return GUILD_BATTLE__CNormalGuildBattleStateRoundProcessEnter4_user(_this, pkBattle, GUILD_BATTLE__CNormalGuildBattleStateRoundProcessEnter4_next);
            };
            int GUILD_BATTLE__CNormalGuildBattleStateRoundProcessLoop6_wrapper(struct GUILD_BATTLE::CNormalGuildBattleStateRoundProcess* _this, struct GUILD_BATTLE::CNormalGuildBattle* pkBattle)
            {
               return GUILD_BATTLE__CNormalGuildBattleStateRoundProcessLoop6_user(_this, pkBattle, GUILD_BATTLE__CNormalGuildBattleStateRoundProcessLoop6_next);
            };
            void GUILD_BATTLE__CNormalGuildBattleStateRoundProcessdtor_CNormalGuildBattleStateRoundProcess8_wrapper(struct GUILD_BATTLE::CNormalGuildBattleStateRoundProcess* _this)
            {
               GUILD_BATTLE__CNormalGuildBattleStateRoundProcessdtor_CNormalGuildBattleStateRoundProcess8_user(_this, GUILD_BATTLE__CNormalGuildBattleStateRoundProcessdtor_CNormalGuildBattleStateRoundProcess8_next);
            };
            
            hook_record CNormalGuildBattleStateRoundProcess_functions[] = {
            {   (LPVOID)0x1403f1770L,
                (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleStateRoundProcessctor_CNormalGuildBattleStateRoundProcess2_user,
                (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleStateRoundProcessctor_CNormalGuildBattleStateRoundProcess2_next,
                (LPVOID)cast_pointer_function(GUILD_BATTLE__CNormalGuildBattleStateRoundProcessctor_CNormalGuildBattleStateRoundProcess2_wrapper),
                (LPVOID)cast_pointer_function((void(GUILD_BATTLE::CNormalGuildBattleStateRoundProcess::*)())&GUILD_BATTLE::CNormalGuildBattleStateRoundProcess::ctor_CNormalGuildBattleStateRoundProcess) },
            {   (LPVOID)0x1403f1970L,
                (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleStateRoundProcessEnter4_user,
                (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleStateRoundProcessEnter4_next,
                (LPVOID)cast_pointer_function(GUILD_BATTLE__CNormalGuildBattleStateRoundProcessEnter4_wrapper),
                (LPVOID)cast_pointer_function((int(GUILD_BATTLE::CNormalGuildBattleStateRoundProcess::*)(struct GUILD_BATTLE::CNormalGuildBattle*))&GUILD_BATTLE::CNormalGuildBattleStateRoundProcess::Enter) },
            {   (LPVOID)0x1403f1a00L,
                (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleStateRoundProcessLoop6_user,
                (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleStateRoundProcessLoop6_next,
                (LPVOID)cast_pointer_function(GUILD_BATTLE__CNormalGuildBattleStateRoundProcessLoop6_wrapper),
                (LPVOID)cast_pointer_function((int(GUILD_BATTLE::CNormalGuildBattleStateRoundProcess::*)(struct GUILD_BATTLE::CNormalGuildBattle*))&GUILD_BATTLE::CNormalGuildBattleStateRoundProcess::Loop) },
            {   (LPVOID)0x1403f1890L,
                (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleStateRoundProcessdtor_CNormalGuildBattleStateRoundProcess8_user,
                (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleStateRoundProcessdtor_CNormalGuildBattleStateRoundProcess8_next,
                (LPVOID)cast_pointer_function(GUILD_BATTLE__CNormalGuildBattleStateRoundProcessdtor_CNormalGuildBattleStateRoundProcess8_wrapper),
                (LPVOID)cast_pointer_function((void(GUILD_BATTLE::CNormalGuildBattleStateRoundProcess::*)())&GUILD_BATTLE::CNormalGuildBattleStateRoundProcess::dtor_CNormalGuildBattleStateRoundProcess) },
            
            };
            
        }; // end namespace detail
    }; // end namespace GUILD_BATTLE
END_ATF_NAMESPACE
