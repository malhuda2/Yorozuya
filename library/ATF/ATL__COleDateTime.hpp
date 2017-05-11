// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"


START_ATF_NAMESPACE
    namespace ATL
    {
        #pragma pack(push, 8)
        struct COleDateTime
        {
            enum DateTimeStatus
            {
                error = 0xFFFFFFFF,
                valid = 0x0,
                invalid = 0x1,
                null = 0x2,
            };
            long double m_dt;
            DateTimeStatus m_status;
        };
        #pragma pack(pop)
    }; // end namespace ATL
END_ATF_NAMESPACE
