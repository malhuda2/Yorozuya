// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"


START_ATF_NAMESPACE
    #pragma pack(push, 2)
    struct  _darkhole_destroy_zocl
    {
        unsigned __int16 wIndex;
        unsigned int dwSerial;
    public:
        int size()
        {
            using org_ptr = int (WINAPIV*)(struct _darkhole_destroy_zocl*);
            return (org_ptr(0x1401648e0L))(this);
        };
    };
    #pragma pack(pop)
END_ATF_NAMESPACE
