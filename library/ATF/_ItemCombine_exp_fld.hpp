// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "_base_fld.hpp"


START_ATF_NAMESPACE
    struct  _ItemCombine_exp_fld : _base_fld
    {
        struct _material
        {
            char m_itmPdMat[8];
            unsigned int m_dwUpt;
            int m_nDur;
        };
        struct _output_list
        {
            char m_itmPdOutput[8];
            unsigned int m_dwUpt;
            int m_dwEffectType;
            unsigned int m_dwResultEffectMsgCode;
            unsigned int m_dwPdProp;
            int m_nOutNum;
        };
        unsigned int m_dwCommit;
        char m_strCivil[64];
        int m_bCombineExist;
        char m_strCombineType[64];
        int m_nFailOutItem;
        _material m_Material[5];
        int m_bSelectItem;
        int m_nOperationCount;
        _output_list m_listOutput[24];
    };
END_ATF_NAMESPACE
