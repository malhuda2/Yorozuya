// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"


START_ATF_NAMESPACE
    #pragma pack(push, 2)
    struct  _notify_race_boss_winrate_zocl
    {
        char byTotalCnt;
        char byCurWinCnt;
        unsigned int dwAccTotalCnt;
        unsigned int dwAccWinCnt;
    public:
        int size()
        {
            using org_ptr = int (WINAPIV*)(struct _notify_race_boss_winrate_zocl*);
            return (org_ptr(0x14024d4c0L))(this);
        };
    };
    #pragma pack(pop)
END_ATF_NAMESPACE
