// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"


START_ATF_NAMESPACE
    struct _qry_case_insert_orelog
    {
        char byType;
        char szLogDate[17];
        int nLiveUsercnt;
        unsigned int dwOreRemain;
        unsigned int dwTAmount;
    public:
        _qry_case_insert_orelog()
        {
            using org_ptr = void (WINAPIV*)(struct _qry_case_insert_orelog*);
            (org_ptr(0x1403fa190L))(this);
        };
        void ctor__qry_case_insert_orelog()
        {
            using org_ptr = void (WINAPIV*)(struct _qry_case_insert_orelog*);
            (org_ptr(0x1403fa190L))(this);
        };
    };
END_ATF_NAMESPACE
