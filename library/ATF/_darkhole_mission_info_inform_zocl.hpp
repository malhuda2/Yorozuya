// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"


START_ATF_NAMESPACE
    #pragma pack(push, 1)
    struct  _darkhole_mission_info_inform_zocl
    {
        struct  __job
        {
            char byType;
            char byTableCode;
            unsigned __int16 wRecordIndex;
            __int16 zNeedCount;
            char szDescirptCode[17];
            bool bPass;
            unsigned __int16 wCurCount;
            bool bDisable;
        };
        char szDescirptCode[17];
        unsigned int dwLimTimeSec;
        unsigned int dwPassTimeSec;
        char byOrder;
        char byJobNum;
        __job Job[128];
    public:
        _darkhole_mission_info_inform_zocl()
        {
            using org_ptr = void (WINAPIV*)(struct _darkhole_mission_info_inform_zocl*);
            (org_ptr(0x14026f500L))(this);
        };
        void ctor__darkhole_mission_info_inform_zocl()
        {
            using org_ptr = void (WINAPIV*)(struct _darkhole_mission_info_inform_zocl*);
            (org_ptr(0x14026f500L))(this);
        };
        int size()
        {
            using org_ptr = int (WINAPIV*)(struct _darkhole_mission_info_inform_zocl*);
            return (org_ptr(0x14026f520L))(this);
        };
    };
    #pragma pack(pop)
END_ATF_NAMESPACE
