// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"


START_ATF_NAMESPACE
    struct _pt_inform_appoint_zocl
    {
        char byClassType;
        char wszAvatorName[17];
    public:
        _pt_inform_appoint_zocl()
        {
            using org_ptr = void (WINAPIV*)(struct _pt_inform_appoint_zocl*);
            (org_ptr(0x1402bd6c0L))(this);
        };
        void ctor__pt_inform_appoint_zocl()
        {
            using org_ptr = void (WINAPIV*)(struct _pt_inform_appoint_zocl*);
            (org_ptr(0x1402bd6c0L))(this);
        };
        int size()
        {
            using org_ptr = int (WINAPIV*)(struct _pt_inform_appoint_zocl*);
            return (org_ptr(0x1402bd710L))(this);
        };
    };
END_ATF_NAMESPACE
