// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "_REGED_AVATOR_DB.hpp"


START_ATF_NAMESPACE
    #pragma pack(push, 1)
    struct  _alive_char_result_zocl
    {
        char byRetCode;
        unsigned int dwSerial;
        _REGED_AVATOR_DB AliveChar;
    public:
        _alive_char_result_zocl()
        {
            using org_ptr = void (WINAPIV*)(struct _alive_char_result_zocl*);
            (org_ptr(0x140120dd0L))(this);
        };
        void ctor__alive_char_result_zocl()
        {
            using org_ptr = void (WINAPIV*)(struct _alive_char_result_zocl*);
            (org_ptr(0x140120dd0L))(this);
        };
    };
    #pragma pack(pop)
END_ATF_NAMESPACE
