// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"


START_ATF_NAMESPACE
    #pragma pack(push, 1)
    struct  _apex_send_ip
    {
        char m_byOnce;
        unsigned int m_dwIp;
    public:
        _apex_send_ip()
        {
            using org_ptr = void (WINAPIV*)(struct _apex_send_ip*);
            (org_ptr(0x140410c00L))(this);
        };
        void ctor__apex_send_ip()
        {
            using org_ptr = void (WINAPIV*)(struct _apex_send_ip*);
            (org_ptr(0x140410c00L))(this);
        };
        int size()
        {
            using org_ptr = int (WINAPIV*)(struct _apex_send_ip*);
            return (org_ptr(0x140410c20L))(this);
        };
    };
    #pragma pack(pop)
END_ATF_NAMESPACE
