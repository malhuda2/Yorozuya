// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "_dummy_position.hpp"


START_ATF_NAMESPACE
    struct __dummy_block
    {
        char *pszBlockName;
        int nSubDummyNum;
        _dummy_position *pSubDummy[32];
    public:
        __dummy_block()
        {
            using org_ptr = void (WINAPIV*)(struct __dummy_block*);
            (org_ptr(0x140279f80L))(this);
        };
        void ctor___dummy_block()
        {
            using org_ptr = void (WINAPIV*)(struct __dummy_block*);
            (org_ptr(0x140279f80L))(this);
        };
    };
END_ATF_NAMESPACE
