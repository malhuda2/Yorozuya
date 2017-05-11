// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"


START_ATF_NAMESPACE
    struct _INVENKEY
    {
        char bySlotIndex;
        char byTableCode;
        unsigned __int16 wItemIndex;
    public:
        int CovDBKey()
        {
            using org_ptr = int (WINAPIV*)(struct _INVENKEY*);
            return (org_ptr(0x1400ca7b0L))(this);
        };
        bool IsFilled()
        {
            using org_ptr = bool (WINAPIV*)(struct _INVENKEY*);
            return (org_ptr(0x1400ca790L))(this);
        };
        int IsOverlapItem()
        {
            using org_ptr = int (WINAPIV*)(struct _INVENKEY*);
            return (org_ptr(0x1402d4bf0L))(this);
        };
        void LoadDBKey(int pl_nKey)
        {
            using org_ptr = void (WINAPIV*)(struct _INVENKEY*, int);
            (org_ptr(0x1401bf0b0L))(this, pl_nKey);
        };
        void SetRelease()
        {
            using org_ptr = void (WINAPIV*)(struct _INVENKEY*);
            (org_ptr(0x140075da0L))(this);
        };
        _INVENKEY(char byInSlotIndex, char byInTableCode, uint16_t wInItemIndex)
        {
            using org_ptr = void (WINAPIV*)(struct _INVENKEY*, char, char, uint16_t);
            (org_ptr(0x140304bc0L))(this, byInSlotIndex, byInTableCode, wInItemIndex);
        };
        void ctor__INVENKEY(char byInSlotIndex, char byInTableCode, uint16_t wInItemIndex)
        {
            using org_ptr = void (WINAPIV*)(struct _INVENKEY*, char, char, uint16_t);
            (org_ptr(0x140304bc0L))(this, byInSlotIndex, byInTableCode, wInItemIndex);
        };
        _INVENKEY()
        {
            using org_ptr = void (WINAPIV*)(struct _INVENKEY*);
            (org_ptr(0x140075ce0L))(this);
        };
        void ctor__INVENKEY()
        {
            using org_ptr = void (WINAPIV*)(struct _INVENKEY*);
            (org_ptr(0x140075ce0L))(this);
        };
    };
END_ATF_NAMESPACE
