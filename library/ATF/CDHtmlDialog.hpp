// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "ATL__CComPtr.hpp"
#include "ATL__CSimpleArray.hpp"
#include "ATL__CStringT.hpp"
#include "CDHtmlEventSink.hpp"
#include "CDialog.hpp"
#include "CWnd.hpp"


START_ATF_NAMESPACE
    struct  CDHtmlDialog : CDialog, CDHtmlEventSink
    {
        ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char> > > m_strCurrentUrl;
        char *m_szHtmlResID;
        unsigned int m_nHtmlResID;
        ATL::CComPtr<IWebBrowser2> m_pBrowserApp;
        ATL::CComPtr<IHTMLDocument2> m_spHtmlDoc;
        int m_bUseHtmlTitle;
        int m_bAttachedControl;
        ATL::CStringT<char,StrTraitMFC_DLL<char,ATL::ChTraitsCRT<char> > > m_strDlgCaption;
        CWnd m_wndBrowser;
        unsigned int m_dwDHtmlEventSinkCookie;
        ATL::CSimpleArray<CDHtmlControlSink *,ATL::CSimpleArrayEqualHelper<CDHtmlControlSink *> > m_ControlSinks;
        ATL::CSimpleArray<CDHtmlElementEventSink *,ATL::CSimpleArrayEqualHelper<CDHtmlElementEventSink *> > m_SinkedElements;
        unsigned int m_dwHostFlags;
        ATL::CComPtr<IDispatch> m_spExternalDisp;
    };
END_ATF_NAMESPACE
