// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "CNoTrackObject.hpp"
#include "IFont.hpp"


START_ATF_NAMESPACE
    #pragma pack(push, 8)
    struct  _AFXCTL_AMBIENT_CACHE : CNoTrackObject
    {
        int m_bValid;
        unsigned int m_dwAmbientFlags;
        unsigned int m_colorFore;
        unsigned int m_colorBack;
        IFont *m_pFont;
        void *m_pReserved;
        unsigned int m_dwAppearance;
    };
    #pragma pack(pop)
END_ATF_NAMESPACE
