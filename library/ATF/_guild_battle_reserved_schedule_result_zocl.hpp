// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"


START_ATF_NAMESPACE
    #pragma pack(push, 1)
    struct  _guild_battle_reserved_schedule_result_zocl
    {
        struct __list
        {
            char wsz1PName[17];
            char by1PRace;
            char wsz2PName[17];
            char by2PRace;
            char byStartHour;
            char byStartMin;
            char byEndHour;
            char byEndMin;
        };
        unsigned int dwVer;
        char byToDay;
        char byTomorrow;
        char byDate;
        char byPage;
        char byMaxPage;
        char bySelfScheduleInx;
        char byCnt;
        __list List[5];
    public:
        int size()
        {
            using org_ptr = int (WINAPIV*)(struct _guild_battle_reserved_schedule_result_zocl*);
            return (org_ptr(0x1403d0970L))(this);
        };
    };
    #pragma pack(pop)
END_ATF_NAMESPACE
