// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "_guild_battle_suggest_request_result_zocl_info.hpp"


START_ATF_NAMESPACE
    namespace detail
    {
        info::_guild_battle_suggest_request_result_zoclsize2_ptr _guild_battle_suggest_request_result_zoclsize2_next(nullptr);
        info::_guild_battle_suggest_request_result_zoclsize2_clbk _guild_battle_suggest_request_result_zoclsize2_user(nullptr);
        
        int _guild_battle_suggest_request_result_zoclsize2_wrapper(struct _guild_battle_suggest_request_result_zocl* _this)
        {
           return _guild_battle_suggest_request_result_zoclsize2_user(_this, _guild_battle_suggest_request_result_zoclsize2_next);
        };
        
        hook_record _guild_battle_suggest_request_result_zocl_functions[] = {
        {   (LPVOID)0x14025d5f0L,
            (LPVOID *)&_guild_battle_suggest_request_result_zoclsize2_user,
            (LPVOID *)&_guild_battle_suggest_request_result_zoclsize2_next,
            (LPVOID)cast_pointer_function(_guild_battle_suggest_request_result_zoclsize2_wrapper),
            (LPVOID)cast_pointer_function((int(_guild_battle_suggest_request_result_zocl::*)())&_guild_battle_suggest_request_result_zocl::size) },
        
        };
        
    }; // end namespace detail
END_ATF_NAMESPACE
