// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"


START_ATF_NAMESPACE
    #pragma pack(push, 1)
    struct  _suggested_matter_change_taxrate
    {
        char byMatterType;
        unsigned int dwMatterDst;
        char wszMatterDst[64];
        unsigned int dwNext;
        unsigned int dwSuggestedTime;
    public:
        _suggested_matter_change_taxrate()
        {
            using org_ptr = void (WINAPIV*)(struct _suggested_matter_change_taxrate*);
            (org_ptr(0x1402d97c0L))(this);
        };
        void ctor__suggested_matter_change_taxrate()
        {
            using org_ptr = void (WINAPIV*)(struct _suggested_matter_change_taxrate*);
            (org_ptr(0x1402d97c0L))(this);
        };
        void init()
        {
            using org_ptr = void (WINAPIV*)(struct _suggested_matter_change_taxrate*);
            (org_ptr(0x1402d9810L))(this);
        };
    };
    #pragma pack(pop)
END_ATF_NAMESPACE
