// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"


START_ATF_NAMESPACE
    struct _move_to_own_stonemap_result_zocl
    {
        char byRetCode;
        char byMapIndex;
        __int16 sNewPos[3];
    public:
        int size()
        {
            using org_ptr = int (WINAPIV*)(struct _move_to_own_stonemap_result_zocl*);
            return (org_ptr(0x1400f03c0L))(this);
        };
    };
END_ATF_NAMESPACE
