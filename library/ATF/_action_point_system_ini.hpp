// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"


START_ATF_NAMESPACE
    #pragma pack(push, 4)
    struct _action_point_system_ini
    {
        bool m_bUse_event;
        bool m_bReset;
        int m_wYear[2];
        int m_byMonth[2];
        int m_byDay[2];
        int m_byHour[2];
        int m_byMinute[2];
        int m_EventTime[2];
        char m_byActionCode;
    public:
        _action_point_system_ini()
        {
            using org_ptr = void (WINAPIV*)(struct _action_point_system_ini*);
            (org_ptr(0x140411de0L))(this);
        };
        void ctor__action_point_system_ini()
        {
            using org_ptr = void (WINAPIV*)(struct _action_point_system_ini*);
            (org_ptr(0x140411de0L))(this);
        };
    };
    #pragma pack(pop)
END_ATF_NAMESPACE
