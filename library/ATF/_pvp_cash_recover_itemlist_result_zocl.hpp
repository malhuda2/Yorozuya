// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"


START_ATF_NAMESPACE
    #pragma pack(push, 1)
    struct  _pvp_cash_recover_itemlist_result_zocl
    {
        char byItemNum;
        int nTalikInfo[14];
    public:
        _pvp_cash_recover_itemlist_result_zocl()
        {
            using org_ptr = void (WINAPIV*)(struct _pvp_cash_recover_itemlist_result_zocl*);
            (org_ptr(0x1403f6d70L))(this);
        };
        void ctor__pvp_cash_recover_itemlist_result_zocl()
        {
            using org_ptr = void (WINAPIV*)(struct _pvp_cash_recover_itemlist_result_zocl*);
            (org_ptr(0x1403f6d70L))(this);
        };
        int size()
        {
            using org_ptr = int (WINAPIV*)(struct _pvp_cash_recover_itemlist_result_zocl*);
            return (org_ptr(0x1403f6dc0L))(this);
        };
    };
    #pragma pack(pop)
END_ATF_NAMESPACE
