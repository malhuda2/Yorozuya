// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "HMENU__.hpp"
#include "HWND__.hpp"
#include "IShellFolder.hpp"
#include "IUnknown.hpp"
#include "_ITEMIDLIST.hpp"


START_ATF_NAMESPACE
    struct tagSMDATA
    {
        unsigned int dwMask;
        unsigned int dwFlags;
        HMENU__ *hmenu;
        HWND__ *hwnd;
        unsigned int uId;
        unsigned int uIdParent;
        unsigned int uIdAncestor;
        IUnknown *punk;
        _ITEMIDLIST *pidlFolder;
        _ITEMIDLIST *pidlItem;
        IShellFolder *psf;
        void *pvUserData;
    };
END_ATF_NAMESPACE
