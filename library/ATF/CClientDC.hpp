// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "CDC.hpp"
#include "HWND__.hpp"


START_ATF_NAMESPACE
    struct  CClientDC : CDC
    {
        HWND__ *m_hWnd;
    public:
        ~CClientDC()
        {
            using org_ptr = int64_t (WINAPIV*)(struct CClientDC*);
            (org_ptr(0x1404dc282L))(this);
        };
        int64_t dtor_CClientDC()
        {
            using org_ptr = int64_t (WINAPIV*)(struct CClientDC*);
            return (org_ptr(0x1404dc282L))(this);
        };
    };
END_ATF_NAMESPACE
