// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"


START_ATF_NAMESPACE
    struct _apex_id
    {
        char m_byID;
    public:
        _apex_id(char byID)
        {
            using org_ptr = void (WINAPIV*)(struct _apex_id*, char);
            (org_ptr(0x140410bb0L))(this, byID);
        };
        void ctor__apex_id(char byID)
        {
            using org_ptr = void (WINAPIV*)(struct _apex_id*, char);
            (org_ptr(0x140410bb0L))(this, byID);
        };
    };
END_ATF_NAMESPACE
