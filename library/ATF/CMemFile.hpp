// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "CFile.hpp"


START_ATF_NAMESPACE
    #pragma pack(push, 8)
    struct  CMemFile : CFile
    {
        unsigned __int64 m_nGrowBytes;
        unsigned __int64 m_nPosition;
        unsigned __int64 m_nBufferSize;
        unsigned __int64 m_nFileSize;
        char *m_lpBuffer;
        int m_bAutoDelete;
    };
    #pragma pack(pop)
END_ATF_NAMESPACE
