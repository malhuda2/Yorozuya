// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "CFile.hpp"
#include "CSocket.hpp"


START_ATF_NAMESPACE
    #pragma pack(push, 8)
    struct  CSocketFile : CFile
    {
        CSocket *m_pSocket;
        int m_bArchiveCompatible;
    };
    #pragma pack(pop)
END_ATF_NAMESPACE
