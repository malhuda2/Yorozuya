// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "_react_area.hpp"
#include "_react_obj.hpp"


START_ATF_NAMESPACE
    struct __respawn_monster
    {
        _react_obj ReactObj;
        _react_area ReactArea;
        unsigned int dwTermMSec;
        int nLim;
        bool bCallEvent;
        char *pszDefineCode;
    public:
        __respawn_monster()
        {
            using org_ptr = void (WINAPIV*)(struct __respawn_monster*);
            (org_ptr(0x14027a450L))(this);
        };
        void ctor___respawn_monster()
        {
            using org_ptr = void (WINAPIV*)(struct __respawn_monster*);
            (org_ptr(0x14027a450L))(this);
        };
    };
END_ATF_NAMESPACE
