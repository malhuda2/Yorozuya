// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "CDocTemplate.hpp"
#include "CPtrList.hpp"
#include "HACCEL__.hpp"
#include "HMENU__.hpp"


START_ATF_NAMESPACE
    #pragma pack(push, 8)
    struct  CMultiDocTemplate : CDocTemplate
    {
        HMENU__ *m_hMenuShared;
        HACCEL__ *m_hAccelTable;
        CPtrList m_docList;
        unsigned int m_nUntitledCount;
    };
    #pragma pack(pop)
END_ATF_NAMESPACE
