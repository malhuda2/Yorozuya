// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "GUILD_BATTLE__CNormalGuildBattleStateRoundStart_info.hpp"


START_ATF_NAMESPACE
    namespace GUILD_BATTLE
    {
        namespace detail
        {
            info::GUILD_BATTLE__CNormalGuildBattleStateRoundStartctor_CNormalGuildBattleStateRoundStart2_ptr GUILD_BATTLE__CNormalGuildBattleStateRoundStartctor_CNormalGuildBattleStateRoundStart2_next(nullptr);
            info::GUILD_BATTLE__CNormalGuildBattleStateRoundStartctor_CNormalGuildBattleStateRoundStart2_clbk GUILD_BATTLE__CNormalGuildBattleStateRoundStartctor_CNormalGuildBattleStateRoundStart2_user(nullptr);
            info::GUILD_BATTLE__CNormalGuildBattleStateRoundStartEnter4_ptr GUILD_BATTLE__CNormalGuildBattleStateRoundStartEnter4_next(nullptr);
            info::GUILD_BATTLE__CNormalGuildBattleStateRoundStartEnter4_clbk GUILD_BATTLE__CNormalGuildBattleStateRoundStartEnter4_user(nullptr);
            info::GUILD_BATTLE__CNormalGuildBattleStateRoundStartFin6_ptr GUILD_BATTLE__CNormalGuildBattleStateRoundStartFin6_next(nullptr);
            info::GUILD_BATTLE__CNormalGuildBattleStateRoundStartFin6_clbk GUILD_BATTLE__CNormalGuildBattleStateRoundStartFin6_user(nullptr);
            info::GUILD_BATTLE__CNormalGuildBattleStateRoundStartLoop8_ptr GUILD_BATTLE__CNormalGuildBattleStateRoundStartLoop8_next(nullptr);
            info::GUILD_BATTLE__CNormalGuildBattleStateRoundStartLoop8_clbk GUILD_BATTLE__CNormalGuildBattleStateRoundStartLoop8_user(nullptr);
            info::GUILD_BATTLE__CNormalGuildBattleStateRoundStartdtor_CNormalGuildBattleStateRoundStart10_ptr GUILD_BATTLE__CNormalGuildBattleStateRoundStartdtor_CNormalGuildBattleStateRoundStart10_next(nullptr);
            info::GUILD_BATTLE__CNormalGuildBattleStateRoundStartdtor_CNormalGuildBattleStateRoundStart10_clbk GUILD_BATTLE__CNormalGuildBattleStateRoundStartdtor_CNormalGuildBattleStateRoundStart10_user(nullptr);
            
            void GUILD_BATTLE__CNormalGuildBattleStateRoundStartctor_CNormalGuildBattleStateRoundStart2_wrapper(struct GUILD_BATTLE::CNormalGuildBattleStateRoundStart* _this)
            {
               GUILD_BATTLE__CNormalGuildBattleStateRoundStartctor_CNormalGuildBattleStateRoundStart2_user(_this, GUILD_BATTLE__CNormalGuildBattleStateRoundStartctor_CNormalGuildBattleStateRoundStart2_next);
            };
            int GUILD_BATTLE__CNormalGuildBattleStateRoundStartEnter4_wrapper(struct GUILD_BATTLE::CNormalGuildBattleStateRoundStart* _this, struct GUILD_BATTLE::CNormalGuildBattle* pkBattle)
            {
               return GUILD_BATTLE__CNormalGuildBattleStateRoundStartEnter4_user(_this, pkBattle, GUILD_BATTLE__CNormalGuildBattleStateRoundStartEnter4_next);
            };
            int GUILD_BATTLE__CNormalGuildBattleStateRoundStartFin6_wrapper(struct GUILD_BATTLE::CNormalGuildBattleStateRoundStart* _this, struct GUILD_BATTLE::CNormalGuildBattle* pkBattle)
            {
               return GUILD_BATTLE__CNormalGuildBattleStateRoundStartFin6_user(_this, pkBattle, GUILD_BATTLE__CNormalGuildBattleStateRoundStartFin6_next);
            };
            int GUILD_BATTLE__CNormalGuildBattleStateRoundStartLoop8_wrapper(struct GUILD_BATTLE::CNormalGuildBattleStateRoundStart* _this, struct GUILD_BATTLE::CNormalGuildBattle* pkBattle)
            {
               return GUILD_BATTLE__CNormalGuildBattleStateRoundStartLoop8_user(_this, pkBattle, GUILD_BATTLE__CNormalGuildBattleStateRoundStartLoop8_next);
            };
            void GUILD_BATTLE__CNormalGuildBattleStateRoundStartdtor_CNormalGuildBattleStateRoundStart10_wrapper(struct GUILD_BATTLE::CNormalGuildBattleStateRoundStart* _this)
            {
               GUILD_BATTLE__CNormalGuildBattleStateRoundStartdtor_CNormalGuildBattleStateRoundStart10_user(_this, GUILD_BATTLE__CNormalGuildBattleStateRoundStartdtor_CNormalGuildBattleStateRoundStart10_next);
            };
            
            hook_record CNormalGuildBattleStateRoundStart_functions[] = {
            {   (LPVOID)0x1403f1350L,
                (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleStateRoundStartctor_CNormalGuildBattleStateRoundStart2_user,
                (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleStateRoundStartctor_CNormalGuildBattleStateRoundStart2_next,
                (LPVOID)cast_pointer_function(GUILD_BATTLE__CNormalGuildBattleStateRoundStartctor_CNormalGuildBattleStateRoundStart2_wrapper),
                (LPVOID)cast_pointer_function((void(GUILD_BATTLE::CNormalGuildBattleStateRoundStart::*)())&GUILD_BATTLE::CNormalGuildBattleStateRoundStart::ctor_CNormalGuildBattleStateRoundStart) },
            {   (LPVOID)0x1403f1550L,
                (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleStateRoundStartEnter4_user,
                (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleStateRoundStartEnter4_next,
                (LPVOID)cast_pointer_function(GUILD_BATTLE__CNormalGuildBattleStateRoundStartEnter4_wrapper),
                (LPVOID)cast_pointer_function((int(GUILD_BATTLE::CNormalGuildBattleStateRoundStart::*)(struct GUILD_BATTLE::CNormalGuildBattle*))&GUILD_BATTLE::CNormalGuildBattleStateRoundStart::Enter) },
            {   (LPVOID)0x1403f1660L,
                (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleStateRoundStartFin6_user,
                (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleStateRoundStartFin6_next,
                (LPVOID)cast_pointer_function(GUILD_BATTLE__CNormalGuildBattleStateRoundStartFin6_wrapper),
                (LPVOID)cast_pointer_function((int(GUILD_BATTLE::CNormalGuildBattleStateRoundStart::*)(struct GUILD_BATTLE::CNormalGuildBattle*))&GUILD_BATTLE::CNormalGuildBattleStateRoundStart::Fin) },
            {   (LPVOID)0x1403f15e0L,
                (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleStateRoundStartLoop8_user,
                (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleStateRoundStartLoop8_next,
                (LPVOID)cast_pointer_function(GUILD_BATTLE__CNormalGuildBattleStateRoundStartLoop8_wrapper),
                (LPVOID)cast_pointer_function((int(GUILD_BATTLE::CNormalGuildBattleStateRoundStart::*)(struct GUILD_BATTLE::CNormalGuildBattle*))&GUILD_BATTLE::CNormalGuildBattleStateRoundStart::Loop) },
            {   (LPVOID)0x1403f1470L,
                (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleStateRoundStartdtor_CNormalGuildBattleStateRoundStart10_user,
                (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleStateRoundStartdtor_CNormalGuildBattleStateRoundStart10_next,
                (LPVOID)cast_pointer_function(GUILD_BATTLE__CNormalGuildBattleStateRoundStartdtor_CNormalGuildBattleStateRoundStart10_wrapper),
                (LPVOID)cast_pointer_function((void(GUILD_BATTLE::CNormalGuildBattleStateRoundStart::*)())&GUILD_BATTLE::CNormalGuildBattleStateRoundStart::dtor_CNormalGuildBattleStateRoundStart) },
            
            };
            
        }; // end namespace detail
    }; // end namespace GUILD_BATTLE
END_ATF_NAMESPACE
