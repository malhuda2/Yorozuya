// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"


START_ATF_NAMESPACE
    #pragma pack(push, 1)
    struct  _RETURNPOST_DB_BASE
    {
        bool m_bUpdate;
        int m_nMax;
        int m_nCum;
        unsigned int m_RetSerials[30];
    public:
        void Init()
        {
            using org_ptr = void (WINAPIV*)(struct _RETURNPOST_DB_BASE*);
            (org_ptr(0x140077570L))(this);
        };
        _RETURNPOST_DB_BASE()
        {
            using org_ptr = void (WINAPIV*)(struct _RETURNPOST_DB_BASE*);
            (org_ptr(0x140077520L))(this);
        };
        void ctor__RETURNPOST_DB_BASE()
        {
            using org_ptr = void (WINAPIV*)(struct _RETURNPOST_DB_BASE*);
            (org_ptr(0x140077520L))(this);
        };
    };
    #pragma pack(pop)
END_ATF_NAMESPACE
