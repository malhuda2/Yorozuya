// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"


START_ATF_NAMESPACE
    struct _INVEN_DB_BASE
    {
        struct  _LIST
        {
            _INVENKEY Key;
            unsigned __int64 dwDur;
            unsigned int dwUpt;
            unsigned int dwItemETSerial;
            unsigned __int64 lnUID;
            char byCsMethod;
            unsigned int dwT;
            unsigned int dwLendRegdTime;
        public:
            void Init()
            {
                using org_ptr = void (WINAPIV*)(struct _LIST*);
                (org_ptr(0x140075cf0L))(this);
            };
            bool Release()
            {
                using org_ptr = bool (WINAPIV*)(struct _LIST*);
                return (org_ptr(0x1401207c0L))(this);
            };
            bool Set(struct _STORAGE_LIST::_db_con* pItem)
            {
                using org_ptr = bool (WINAPIV*)(struct _LIST*, struct _STORAGE_LIST::_db_con*);
                return (org_ptr(0x140120110L))(this, pItem);
            };
            _LIST()
            {
                using org_ptr = void (WINAPIV*)(struct _LIST*);
                (org_ptr(0x140075c80L))(this);
            };
            void ctor__LIST()
            {
                using org_ptr = void (WINAPIV*)(struct _LIST*);
                (org_ptr(0x140075c80L))(this);
            };
        };
        _LIST m_List[100];
    public:
        void Init()
        {
            using org_ptr = void (WINAPIV*)(struct _INVEN_DB_BASE*);
            (org_ptr(0x140075dc0L))(this);
        };
        _INVEN_DB_BASE()
        {
            using org_ptr = void (WINAPIV*)(struct _INVEN_DB_BASE*);
            (org_ptr(0x140075c10L))(this);
        };
        void ctor__INVEN_DB_BASE()
        {
            using org_ptr = void (WINAPIV*)(struct _INVEN_DB_BASE*);
            (org_ptr(0x140075c10L))(this);
        };
    };
END_ATF_NAMESPACE
