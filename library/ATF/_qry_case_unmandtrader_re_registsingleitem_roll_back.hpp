// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"


START_ATF_NAMESPACE
    struct _qry_case_unmandtrader_re_registsingleitem_roll_back
    {
        struct __list
        {
            char byProcRet;
            char byState;
            unsigned int dwRegistSerial;
        };
        char byType;
        char byNum;
        unsigned __int16 wInx;
        bool bAllSuccess;
        unsigned int dwOwnerSerial;
        __list List[10];
    };
END_ATF_NAMESPACE
