// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "IShellFolder.hpp"
#include "IShellFolderViewCB.hpp"
#include "IShellView.hpp"


START_ATF_NAMESPACE
    struct _SFV_CREATE
    {
        unsigned int cbSize;
        IShellFolder *pshf;
        IShellView *psvOuter;
        IShellFolderViewCB *psfvcb;
    };
END_ATF_NAMESPACE
