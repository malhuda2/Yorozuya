// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "CCheckSumBaseConverter.hpp"
#include "CCheckSumGuildData.hpp"


START_ATF_NAMESPACE
    struct  CCheckSumGuildConverter : CCheckSumBaseConverter
    {
    public:
        void Convert(long double dDalant, long double dGold, struct CCheckSumGuildData* pkCheckSum)
        {
            using org_ptr = void (WINAPIV*)(struct CCheckSumGuildConverter*, long double, long double, struct CCheckSumGuildData*);
            (org_ptr(0x1402c1760L))(this, dDalant, dGold, pkCheckSum);
        };
    };
END_ATF_NAMESPACE
