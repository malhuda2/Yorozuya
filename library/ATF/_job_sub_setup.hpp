// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "_base_fld.hpp"


START_ATF_NAMESPACE
    struct _job_sub_setup
    {
        _base_fld *pEventFld;
        char byTable;
        int nEventCount;
    public:
        _job_sub_setup()
        {
            using org_ptr = void (WINAPIV*)(struct _job_sub_setup*);
            (org_ptr(0x140272af0L))(this);
        };
        void ctor__job_sub_setup()
        {
            using org_ptr = void (WINAPIV*)(struct _job_sub_setup*);
            (org_ptr(0x140272af0L))(this);
        };
    };
END_ATF_NAMESPACE
