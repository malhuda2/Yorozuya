// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"


START_ATF_NAMESPACE
    #pragma pack(push, 4)
    struct _qry_case_updatereservedschedule
    {
        unsigned int dwMapID;
        unsigned int dwSLID;
        char byLoadDataStartPosition;
    public:
        int size()
        {
            using org_ptr = int (WINAPIV*)(struct _qry_case_updatereservedschedule*);
            return (org_ptr(0x1403d0b30L))(this);
        };
    };
    #pragma pack(pop)
END_ATF_NAMESPACE
