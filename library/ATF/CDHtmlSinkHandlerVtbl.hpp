// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"


START_ATF_NAMESPACE
    struct CDHtmlSinkHandlerVtbl
    {
        HRESULT (WINAPIV *CDHtmlSinkHandlerQueryInterface)(CDHtmlSinkHandler *_this, _GUID *, void **);
        unsigned int (WINAPIV *AddRef)(CDHtmlSinkHandler *_this);
        unsigned int (WINAPIV *Release)(CDHtmlSinkHandler *_this);
        HRESULT (WINAPIV *GetTypeInfoCount)(CDHtmlSinkHandler *_this, unsigned int *);
        HRESULT (WINAPIV *GetTypeInfo)(CDHtmlSinkHandler *_this, unsigned int, unsigned int, ITypeInfo **);
        HRESULT (WINAPIV *GetIDsOfNames)(CDHtmlSinkHandler *_this, _GUID *, wchar_t **, unsigned int, unsigned int, int *);
        HRESULT (WINAPIV *Invoke)(CDHtmlSinkHandler *_this, int, _GUID *, unsigned int, unsigned __int16, tagDISPPARAMS *, tagVARIANT *, tagEXCEPINFO *, unsigned int *);
        DHtmlEventMapEntry *(WINAPIV *GetDHtmlEventMap)(CDHtmlSinkHandler *_this);
    };
END_ATF_NAMESPACE
