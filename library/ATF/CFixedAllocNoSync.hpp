// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "CPlex.hpp"


START_ATF_NAMESPACE
    struct CFixedAllocNoSync
    {
        struct CNode
        {
            CNode *pNext;
        };
        unsigned int m_nAllocSize;
        unsigned int m_nBlockSize;
        CPlex *m_pBlocks;
        CNode *m_pNodeFree;
    };
END_ATF_NAMESPACE
