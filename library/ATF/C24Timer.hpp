// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"


START_ATF_NAMESPACE
    struct C24Timer
    {
        unsigned int m_dwBaseTickTime;
        unsigned int m_dwBase24Time;
    public:
        C24Timer()
        {
            using org_ptr = void (WINAPIV*)(struct C24Timer*);
            (org_ptr(0x140284dc0L))(this);
        };
        void ctor_C24Timer()
        {
            using org_ptr = void (WINAPIV*)(struct C24Timer*);
            (org_ptr(0x140284dc0L))(this);
        };
        unsigned int Get24TimeFromTickTime(unsigned int dwTickTime)
        {
            using org_ptr = unsigned int (WINAPIV*)(struct C24Timer*, unsigned int);
            return (org_ptr(0x140284d30L))(this, dwTickTime);
        };
        void Init()
        {
            using org_ptr = void (WINAPIV*)(struct C24Timer*);
            (org_ptr(0x140284e10L))(this);
        };
        ~C24Timer()
        {
            using org_ptr = void (WINAPIV*)(struct C24Timer*);
            (org_ptr(0x140284e80L))(this);
        };
        void dtor_C24Timer()
        {
            using org_ptr = void (WINAPIV*)(struct C24Timer*);
            (org_ptr(0x140284e80L))(this);
        };
    };
END_ATF_NAMESPACE
