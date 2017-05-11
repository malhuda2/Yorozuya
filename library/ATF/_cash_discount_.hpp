// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "CLogFile.hpp"
#include "CNetTimer.hpp"
#include "_FILETIME.hpp"
#include "_cash_discount_ini_.hpp"


START_ATF_NAMESPACE
    #pragma pack(push, 8)
    struct _cash_discount_
    {
        char m_cde_status;
        CNetTimer m_cde_timer;
        _FILETIME m_cde_ini_file_time;
        CLogFile m_cde_log;
        int m_cde_inform_before[2];
        _cash_discount_ini_ m_ini;
    public:
        _cash_discount_()
        {
            using org_ptr = void (WINAPIV*)(struct _cash_discount_*);
            (org_ptr(0x1403043f0L))(this);
        };
        void ctor__cash_discount_()
        {
            using org_ptr = void (WINAPIV*)(struct _cash_discount_*);
            (org_ptr(0x1403043f0L))(this);
        };
        ~_cash_discount_()
        {
            using org_ptr = void (WINAPIV*)(struct _cash_discount_*);
            (org_ptr(0x1403046d0L))(this);
        };
        void dtor__cash_discount_()
        {
            using org_ptr = void (WINAPIV*)(struct _cash_discount_*);
            (org_ptr(0x1403046d0L))(this);
        };
    };
    #pragma pack(pop)
END_ATF_NAMESPACE
