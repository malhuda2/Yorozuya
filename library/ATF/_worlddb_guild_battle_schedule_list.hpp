// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"


START_ATF_NAMESPACE
    struct _worlddb_guild_battle_schedule_list
    {
        struct __list
        {
            unsigned int dwID;
            unsigned int dwSLID;
            char ucState;
            __int64 tStartTime;
            unsigned __int16 wTumeMin;
            char byNumber;
        };
        unsigned __int16 wCount;
        __list list[23];
    };
END_ATF_NAMESPACE
