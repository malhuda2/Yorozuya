// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "CObject.hpp"
#include "CPlex.hpp"


START_ATF_NAMESPACE
    struct  CStringList : CObject
    {
        struct CNode
        {
            CNode *pNext;
            CNode *pPrev;
            ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char> > > data;
        };
        CNode *m_pNodeHead;
        CNode *m_pNodeTail;
        __int64 m_nCount;
        CNode *m_pNodeFree;
        CPlex *m_pBlocks;
        __int64 m_nBlockSize;
    };
END_ATF_NAMESPACE
