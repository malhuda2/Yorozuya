// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"


START_ATF_NAMESPACE
    #pragma pack(push, 8)
    struct _qry_case_outputgmoney
    {
        unsigned int in_poperserial;
        char in_w_popername[17];
        unsigned int tmp_guildindex;
        unsigned int in_guildserial;
        unsigned int dwSubGold;
        unsigned int dwSubDalant;
        char in_date[4];
        long double out_totalgold;
        long double out_totaldalant;
        char byProcRet;
    public:
        int size()
        {
            using org_ptr = int (WINAPIV*)(struct _qry_case_outputgmoney*);
            return (org_ptr(0x1400ad4c0L))(this);
        };
    };
    #pragma pack(pop)
END_ATF_NAMESPACE
