// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"


START_ATF_NAMESPACE
    struct _cash_event_ini
    {
        struct _cash_limited_sale
        {
            char m_szLimcode[64];
            unsigned __int16 m_wLimcount;
        };
        int m_bUseCashEvent;
        int m_bRepeat;
        char m_byRepeatDay;
        int m_NextEventTime[3];
        int m_wYear[3];
        int m_byMonth[3];
        int m_byDay[3];
        int m_byHour[3];
        int m_byMinute[3];
        int m_EventTime[3];
        char m_byDiscout[4];
        char m_byLimDiscout;
        char m_byDCK;
        char m_byLimited_sale_num;
        _cash_limited_sale m_Limited_sale[20];
    public:
        _cash_event_ini()
        {
            using org_ptr = void (WINAPIV*)(struct _cash_event_ini*);
            (org_ptr(0x140304610L))(this);
        };
        void ctor__cash_event_ini()
        {
            using org_ptr = void (WINAPIV*)(struct _cash_event_ini*);
            (org_ptr(0x140304610L))(this);
        };
    };
END_ATF_NAMESPACE
