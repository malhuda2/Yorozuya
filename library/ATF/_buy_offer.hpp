// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>
#include <_STORAGE_LIST.hpp>


START_ATF_NAMESPACE
    struct _buy_offer
    {
        char byGoodIndex;
        char byGoodAmount;
        char byStorageCode;
        _STORAGE_LIST::_db_con Item;
        unsigned __int16 wSerial;
    public:
        _buy_offer();
        void ctor__buy_offer();
    };
END_ATF_NAMESPACE
