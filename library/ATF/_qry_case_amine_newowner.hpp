// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"


START_ATF_NAMESPACE
    #pragma pack(push, 1)
    struct  _qry_case_amine_newowner
    {
        char bySubQryCase;
        char byCollisionType;
        char byRace;
        unsigned int dwGuildSerial;
    public:
        _qry_case_amine_newowner()
        {
            using org_ptr = void (WINAPIV*)(struct _qry_case_amine_newowner*);
            (org_ptr(0x1402d41d0L))(this);
        };
        void ctor__qry_case_amine_newowner()
        {
            using org_ptr = void (WINAPIV*)(struct _qry_case_amine_newowner*);
            (org_ptr(0x1402d41d0L))(this);
        };
        int size()
        {
            using org_ptr = int (WINAPIV*)(struct _qry_case_amine_newowner*);
            return (org_ptr(0x1402d41f0L))(this);
        };
    };
    #pragma pack(pop)
END_ATF_NAMESPACE
