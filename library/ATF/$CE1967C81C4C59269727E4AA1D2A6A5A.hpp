// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "HBITMAP__.hpp"
#include "HENHMETAFILE__.hpp"
#include "IStorage.hpp"
#include "IStream.hpp"
#include "wchar_t.hpp"


START_ATF_NAMESPACE
    union $CE1967C81C4C59269727E4AA1D2A6A5A
    {
        HBITMAP__ *hBitmap;
        void *hMetaFilePict;
        HENHMETAFILE__ *hEnhMetaFile;
        void *hGlobal;
        wchar_t *lpszFileName;
        IStream *pstm;
        IStorage *pstg;
    };
END_ATF_NAMESPACE
