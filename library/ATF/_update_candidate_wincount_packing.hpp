// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"


START_ATF_NAMESPACE
    #pragma pack(push, 4)
    struct _update_candidate_wincount_packing
    {
        char byRace;
        unsigned int dwWinCnt;
        char wszdName[17];
    public:
        _update_candidate_wincount_packing()
        {
            using org_ptr = void (WINAPIV*)(struct _update_candidate_wincount_packing*);
            (org_ptr(0x1402b65e0L))(this);
        };
        void ctor__update_candidate_wincount_packing()
        {
            using org_ptr = void (WINAPIV*)(struct _update_candidate_wincount_packing*);
            (org_ptr(0x1402b65e0L))(this);
        };
    };
    #pragma pack(pop)
END_ATF_NAMESPACE
