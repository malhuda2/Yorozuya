// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"


START_ATF_NAMESPACE
    #pragma pack(push, 1)
    struct  _guildroom_enter_result_zocl
    {
        char byRetCode;
        char byRetSubCode;
        char byMapIndex;
        unsigned __int16 wMapLayerIndex;
        __int16 sNewPos[3];
        int restTime;
    public:
        int size()
        {
            using org_ptr = int (WINAPIV*)(struct _guildroom_enter_result_zocl*);
            return (org_ptr(0x1400f03a0L))(this);
        };
    };
    #pragma pack(pop)
END_ATF_NAMESPACE
