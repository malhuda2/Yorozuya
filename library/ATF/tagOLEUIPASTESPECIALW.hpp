// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "HINSTANCE__.hpp"
#include "HRSRC__.hpp"
#include "HWND__.hpp"
#include "IDataObject.hpp"
#include "_GUID.hpp"
#include "tagOLEUIPASTEENTRYW.hpp"
#include "tagSIZE.hpp"


START_ATF_NAMESPACE
    struct tagOLEUIPASTESPECIALW
    {
        unsigned int cbStruct;
        unsigned int dwFlags;
        HWND__ *hWndOwner;
        const wchar_t *lpszCaption;
        unsigned int (WINAPIV *lpfnHook)(HWND__ *, unsigned int, unsigned __int64, __int64);
        __int64 lCustData;
        HINSTANCE__ *hInstance;
        const wchar_t *lpszTemplate;
        HRSRC__ *hResource;
        IDataObject *lpSrcDataObj;
        tagOLEUIPASTEENTRYW *arrPasteEntries;
        int cPasteEntries;
        unsigned int *arrLinkTypes;
        int cLinkTypes;
        unsigned int cClsidExclude;
        _GUID *lpClsidExclude;
        int nSelectedIndex;
        int fLink;
        void *hMetaPict;
        tagSIZE sizel;
    };
END_ATF_NAMESPACE
