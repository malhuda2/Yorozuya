// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "CNationSettingData.hpp"
#include "CashDbWorker.hpp"
#include "_CashShop_str_fld.hpp"
#include "_NameTxt_fld.hpp"


START_ATF_NAMESPACE
    struct  CNationSettingDataTH : CNationSettingData
    {
    public:
        CNationSettingDataTH()
        {
            using org_ptr = void (WINAPIV*)(struct CNationSettingDataTH*);
            (org_ptr(0x140232000L))(this);
        };
        void ctor_CNationSettingDataTH()
        {
            using org_ptr = void (WINAPIV*)(struct CNationSettingDataTH*);
            (org_ptr(0x140232000L))(this);
        };
        struct CashDbWorker* CreateWorker()
        {
            using org_ptr = struct CashDbWorker* (WINAPIV*)(struct CNationSettingDataTH*);
            return (org_ptr(0x1402321c0L))(this);
        };
        int GetCashItemPrice(struct _CashShop_str_fld* pFld)
        {
            using org_ptr = int (WINAPIV*)(struct CNationSettingDataTH*, struct _CashShop_str_fld*);
            return (org_ptr(0x140232270L))(this, pFld);
        };
        char* GetItemName(struct _NameTxt_fld* pFld)
        {
            using org_ptr = char* (WINAPIV*)(struct CNationSettingDataTH*, struct _NameTxt_fld*);
            return (org_ptr(0x140232170L))(this, pFld);
        };
        int Init()
        {
            using org_ptr = int (WINAPIV*)(struct CNationSettingDataTH*);
            return (org_ptr(0x140232060L))(this);
        };
        void Loop()
        {
            using org_ptr = void (WINAPIV*)(struct CNationSettingDataTH*);
            (org_ptr(0x140232160L))(this);
        };
        bool ReadSystemPass()
        {
            using org_ptr = bool (WINAPIV*)(struct CNationSettingDataTH*);
            return (org_ptr(0x140232290L))(this);
        };
        void SetUnitPassiveValue(float* fUnitPv_DefFc)
        {
            using org_ptr = void (WINAPIV*)(struct CNationSettingDataTH*, float*);
            (org_ptr(0x140232190L))(this, fUnitPv_DefFc);
        };
    };
END_ATF_NAMESPACE
