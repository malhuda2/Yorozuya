// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "_STORAGE_LIST.hpp"


START_ATF_NAMESPACE
    struct  _animus_db_load : _STORAGE_LIST
    {
        _STORAGE_LIST::_db_con m_List[4];
    public:
        _animus_db_load()
        {
            using org_ptr = void (WINAPIV*)(struct _animus_db_load*);
            (org_ptr(0x14010dd50L))(this);
        };
        void ctor__animus_db_load()
        {
            using org_ptr = void (WINAPIV*)(struct _animus_db_load*);
            (org_ptr(0x14010dd50L))(this);
        };
    };
END_ATF_NAMESPACE
