// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"


START_ATF_NAMESPACE
    namespace ATL
    {
        struct IAtlMemMgrVtbl
        {
            void *(WINAPIV *Allocate)(IAtlMemMgr *_this, unsigned __int64);
            void (WINAPIV *Free)(IAtlMemMgr *_this, void *);
            void *(WINAPIV *Reallocate)(IAtlMemMgr *_this, void *, unsigned __int64);
            unsigned __int64 (WINAPIV *GetSize)(IAtlMemMgr *_this, void *);
        };
    }; // end namespace ATL
END_ATF_NAMESPACE
