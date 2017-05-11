// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "_STORAGE_LIST.hpp"


START_ATF_NAMESPACE
    #pragma pack(push, 1)
    struct  AP_BatterySlot
    {
        bool m_bFill;
        _STORAGE_LIST::_db_con battery_;
    public:
        AP_BatterySlot()
        {
            using org_ptr = void (WINAPIV*)(struct AP_BatterySlot*);
            (org_ptr(0x1402d9c10L))(this);
        };
        void ctor_AP_BatterySlot()
        {
            using org_ptr = void (WINAPIV*)(struct AP_BatterySlot*);
            (org_ptr(0x1402d9c10L))(this);
        };
        void clear()
        {
            using org_ptr = void (WINAPIV*)(struct AP_BatterySlot*);
            (org_ptr(0x1402d9f80L))(this);
        };
        bool extract(struct _STORAGE_LIST::_db_con* pout_item)
        {
            using org_ptr = bool (WINAPIV*)(struct AP_BatterySlot*, struct _STORAGE_LIST::_db_con*);
            return (org_ptr(0x1402d9e20L))(this, pout_item);
        };
        struct _STORAGE_LIST::_db_con* get_battery()
        {
            using org_ptr = struct _STORAGE_LIST::_db_con* (WINAPIV*)(struct AP_BatterySlot*);
            return (org_ptr(0x1402dde60L))(this);
        };
        unsigned int get_dur()
        {
            using org_ptr = unsigned int (WINAPIV*)(struct AP_BatterySlot*);
            return (org_ptr(0x1402d9f50L))(this);
        };
        int insert(struct _STORAGE_LIST::_db_con* pItem)
        {
            using org_ptr = int (WINAPIV*)(struct AP_BatterySlot*, struct _STORAGE_LIST::_db_con*);
            return (org_ptr(0x1402d9d70L))(this, pItem);
        };
        bool is_private_item(struct _STORAGE_LIST::_db_con* pItem)
        {
            using org_ptr = bool (WINAPIV*)(struct AP_BatterySlot*, struct _STORAGE_LIST::_db_con*);
            return (org_ptr(0x1402d9c70L))(this, pItem);
        };
        unsigned int sub_dur(unsigned int dwSub)
        {
            using org_ptr = unsigned int (WINAPIV*)(struct AP_BatterySlot*, unsigned int);
            return (org_ptr(0x1402d9ea0L))(this, dwSub);
        };
        ~AP_BatterySlot()
        {
            using org_ptr = void (WINAPIV*)(struct AP_BatterySlot*);
            (org_ptr(0x1402d9c60L))(this);
        };
        void dtor_AP_BatterySlot()
        {
            using org_ptr = void (WINAPIV*)(struct AP_BatterySlot*);
            (org_ptr(0x1402d9c60L))(this);
        };
    };
    #pragma pack(pop)
END_ATF_NAMESPACE
