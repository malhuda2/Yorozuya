// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"


START_ATF_NAMESPACE
    struct _LINKKEY
    {
        unsigned __int16 wEffectCode;
    public:
        int16_t CovDBKey()
        {
            using org_ptr = int16_t (WINAPIV*)(struct _LINKKEY*);
            return (org_ptr(0x1401bf300L))(this);
        };
        uint16_t GetCode()
        {
            using org_ptr = uint16_t (WINAPIV*)(struct _LINKKEY*);
            return (org_ptr(0x1400ef990L))(this);
        };
        uint16_t GetIndex()
        {
            using org_ptr = uint16_t (WINAPIV*)(struct _LINKKEY*);
            return (org_ptr(0x1400ef9b0L))(this);
        };
        bool IsFilled()
        {
            using org_ptr = bool (WINAPIV*)(struct _LINKKEY*);
            return (org_ptr(0x1400ef920L))(this);
        };
        void LoadDBKey(int16_t pl_zKey)
        {
            using org_ptr = void (WINAPIV*)(struct _LINKKEY*, int16_t);
            (org_ptr(0x1401bf110L))(this, pl_zKey);
        };
        void SetData(uint16_t wCode, uint16_t wIndex)
        {
            using org_ptr = void (WINAPIV*)(struct _LINKKEY*, uint16_t, uint16_t);
            (org_ptr(0x1400ef950L))(this, wCode, wIndex);
        };
        void SetRelease()
        {
            using org_ptr = void (WINAPIV*)(struct _LINKKEY*);
            (org_ptr(0x140075970L))(this);
        };
    };
END_ATF_NAMESPACE
