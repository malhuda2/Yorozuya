// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"


START_ATF_NAMESPACE
    struct _qry_case_post_storage_list_get
    {
        struct __list
        {
            unsigned int dwSerial;
            char byIndex;
            char byState;
            char wszSendName[17];
            char wszTitle[21];
            _INVENKEY key;
            unsigned __int64 dwDur;
            unsigned int dwUpt;
            unsigned __int64 lnUID;
            unsigned int dwGold;
            unsigned __int16 wStorageIndex;
        public:
            __list()
            {
                using org_ptr = void (WINAPIV*)(struct __list*);
                (org_ptr(0x1400ca6e0L))(this);
            };
            void ctor___list()
            {
                using org_ptr = void (WINAPIV*)(struct __list*);
                (org_ptr(0x1400ca6e0L))(this);
            };
        };
        unsigned int dwMasterSerial;
        char byProcRet;
        unsigned int dwCount;
        __declspec(align(8)) __list List[50];
    public:
        _qry_case_post_storage_list_get()
        {
            using org_ptr = void (WINAPIV*)(struct _qry_case_post_storage_list_get*);
            (org_ptr(0x1400ca650L))(this);
        };
        void ctor__qry_case_post_storage_list_get()
        {
            using org_ptr = void (WINAPIV*)(struct _qry_case_post_storage_list_get*);
            (org_ptr(0x1400ca650L))(this);
        };
        int size()
        {
            using org_ptr = int (WINAPIV*)(struct _qry_case_post_storage_list_get*);
            return (org_ptr(0x1400ca6d0L))(this);
        };
    };
END_ATF_NAMESPACE
