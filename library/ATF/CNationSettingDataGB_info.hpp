// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "CNationSettingDataGB.hpp"


START_ATF_NAMESPACE
    namespace info
    {
        using CNationSettingDataGBctor_CNationSettingDataGB2_ptr = void (WINAPIV*)(struct CNationSettingDataGB*);
        using CNationSettingDataGBctor_CNationSettingDataGB2_clbk = void (WINAPIV*)(struct CNationSettingDataGB*, CNationSettingDataGBctor_CNationSettingDataGB2_ptr);
        using CNationSettingDataGBCreateWorker4_ptr = struct CashDbWorker* (WINAPIV*)(struct CNationSettingDataGB*);
        using CNationSettingDataGBCreateWorker4_clbk = struct CashDbWorker* (WINAPIV*)(struct CNationSettingDataGB*, CNationSettingDataGBCreateWorker4_ptr);
        using CNationSettingDataGBGetCashItemPrice6_ptr = int (WINAPIV*)(struct CNationSettingDataGB*, struct _CashShop_str_fld*);
        using CNationSettingDataGBGetCashItemPrice6_clbk = int (WINAPIV*)(struct CNationSettingDataGB*, struct _CashShop_str_fld*, CNationSettingDataGBGetCashItemPrice6_ptr);
        using CNationSettingDataGBGetItemName8_ptr = char* (WINAPIV*)(struct CNationSettingDataGB*, struct _NameTxt_fld*);
        using CNationSettingDataGBGetItemName8_clbk = char* (WINAPIV*)(struct CNationSettingDataGB*, struct _NameTxt_fld*, CNationSettingDataGBGetItemName8_ptr);
        using CNationSettingDataGBInit10_ptr = int (WINAPIV*)(struct CNationSettingDataGB*);
        using CNationSettingDataGBInit10_clbk = int (WINAPIV*)(struct CNationSettingDataGB*, CNationSettingDataGBInit10_ptr);
        using CNationSettingDataGBLoop12_ptr = void (WINAPIV*)(struct CNationSettingDataGB*);
        using CNationSettingDataGBLoop12_clbk = void (WINAPIV*)(struct CNationSettingDataGB*, CNationSettingDataGBLoop12_ptr);
        using CNationSettingDataGBReadSystemPass14_ptr = bool (WINAPIV*)(struct CNationSettingDataGB*);
        using CNationSettingDataGBReadSystemPass14_clbk = bool (WINAPIV*)(struct CNationSettingDataGB*, CNationSettingDataGBReadSystemPass14_ptr);
        using CNationSettingDataGBSendCashDBDSNRequest16_ptr = void (WINAPIV*)(struct CNationSettingDataGB*);
        using CNationSettingDataGBSendCashDBDSNRequest16_clbk = void (WINAPIV*)(struct CNationSettingDataGB*, CNationSettingDataGBSendCashDBDSNRequest16_ptr);
        
    }; // end namespace info
END_ATF_NAMESPACE
