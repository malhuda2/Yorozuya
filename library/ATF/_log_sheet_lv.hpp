// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"


START_ATF_NAMESPACE
    struct _log_sheet_lv
    {
        unsigned int dwAvatorSerial;
        char byLv;
        unsigned int dwTotalPlayMin;
    public:
        int size()
        {
            using org_ptr = int (WINAPIV*)(struct _log_sheet_lv*);
            return (org_ptr(0x14011fbe0L))(this);
        };
    };
END_ATF_NAMESPACE
