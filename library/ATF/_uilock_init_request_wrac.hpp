// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"


START_ATF_NAMESPACE
    #pragma pack(push, 1)
    struct  _uilock_init_request_wrac
    {
        unsigned __int16 wUserIndex;
        unsigned int dwAccountSerial;
        char uszUILockPW[13];
        char byHintIndex;
        char uszHintAnswer[17];
    };
    #pragma pack(pop)
END_ATF_NAMESPACE
