// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"


START_ATF_NAMESPACE
    struct _map_rate
    {
        float fSide[2];
        int nStandard;
        int nPartner;
    public:
        void Setting(int x, int y)
        {
            using org_ptr = void (WINAPIV*)(struct _map_rate*, int, int);
            (org_ptr(0x1401a2700L))(this, x, y);
        };
    };
END_ATF_NAMESPACE
