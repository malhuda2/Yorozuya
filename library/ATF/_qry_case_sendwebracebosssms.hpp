// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"


START_ATF_NAMESPACE
    #pragma pack(push, 4)
    struct _qry_case_sendwebracebosssms
    {
        unsigned int dwWebSendDBID;
        char wszMsg[255];
        char szCharacterName[17];
        unsigned int dwCharactSerial;
        char byRace;
    public:
        int size()
        {
            using org_ptr = int (WINAPIV*)(struct _qry_case_sendwebracebosssms*);
            return (org_ptr(0x1401dab00L))(this);
        };
    };
    #pragma pack(pop)
END_ATF_NAMESPACE
