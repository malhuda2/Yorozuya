// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "CNationSettingDataES.hpp"


START_ATF_NAMESPACE
    namespace info
    {
        using CNationSettingDataESctor_CNationSettingDataES2_ptr = void (WINAPIV*)(struct CNationSettingDataES*);
        using CNationSettingDataESctor_CNationSettingDataES2_clbk = void (WINAPIV*)(struct CNationSettingDataES*, CNationSettingDataESctor_CNationSettingDataES2_ptr);
        using CNationSettingDataESCreateWorker4_ptr = struct CashDbWorker* (WINAPIV*)(struct CNationSettingDataES*);
        using CNationSettingDataESCreateWorker4_clbk = struct CashDbWorker* (WINAPIV*)(struct CNationSettingDataES*, CNationSettingDataESCreateWorker4_ptr);
        using CNationSettingDataESGetCashItemPrice6_ptr = int (WINAPIV*)(struct CNationSettingDataES*, struct _CashShop_str_fld*);
        using CNationSettingDataESGetCashItemPrice6_clbk = int (WINAPIV*)(struct CNationSettingDataES*, struct _CashShop_str_fld*, CNationSettingDataESGetCashItemPrice6_ptr);
        using CNationSettingDataESGetItemName8_ptr = char* (WINAPIV*)(struct CNationSettingDataES*, struct _NameTxt_fld*);
        using CNationSettingDataESGetItemName8_clbk = char* (WINAPIV*)(struct CNationSettingDataES*, struct _NameTxt_fld*, CNationSettingDataESGetItemName8_ptr);
        using CNationSettingDataESInit10_ptr = int (WINAPIV*)(struct CNationSettingDataES*);
        using CNationSettingDataESInit10_clbk = int (WINAPIV*)(struct CNationSettingDataES*, CNationSettingDataESInit10_ptr);
        using CNationSettingDataESReadSystemPass12_ptr = bool (WINAPIV*)(struct CNationSettingDataES*);
        using CNationSettingDataESReadSystemPass12_clbk = bool (WINAPIV*)(struct CNationSettingDataES*, CNationSettingDataESReadSystemPass12_ptr);
        
    }; // end namespace info
END_ATF_NAMESPACE
