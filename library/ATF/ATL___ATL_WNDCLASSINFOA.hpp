// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>
#include <tagWNDCLASSEXA.hpp>


START_ATF_NAMESPACE
    namespace ATL
    {
        #pragma pack(push, 8)
        struct _ATL_WNDCLASSINFOA
        {
            tagWNDCLASSEXA m_wc;
            const char *m_lpszOrigName;
            __int64 (WINAPIV *pWndProc)(HWND__ *, unsigned int, unsigned __int64, __int64);
            const char *m_lpszCursorID;
            int m_bSystemCursor;
            unsigned __int16 m_atom;
            char m_szAutoName[69];
        };
        #pragma pack(pop)
    }; // end namespace ATL
END_ATF_NAMESPACE
