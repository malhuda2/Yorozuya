// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"


START_ATF_NAMESPACE
    struct _a_trade_adjust_price_result_zocl
    {
        char byRetCode;
        char byTaxRate;
         __declspec(align(1)) unsigned int dwLeftDalant;
         __declspec(align(1)) unsigned int dwTax;
        unsigned __int16 wItemSerial;
        unsigned int dwNewPrice;
        unsigned int dwRegistSerial;
    public:
        int size()
        {
            using org_ptr = int (WINAPIV*)(struct _a_trade_adjust_price_result_zocl*);
            return (org_ptr(0x14035fd90L))(this);
        };
    };
END_ATF_NAMESPACE
