// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "ATL__CStringT.hpp"
#include "$D758732FF3E19653CF047F6272AB0FBD.hpp"


START_ATF_NAMESPACE
    struct CRecentFileListVtbl
    {
        void (WINAPIV *Remove)(struct CRecentFileList *_this, int);
        void (WINAPIV *Add)(struct CRecentFileList *_this, const char *);
        int (WINAPIV *GetDisplayName)(struct CRecentFileList *_this, ATL::CStringT<char> *, int, const char *, int, int);
        void (WINAPIV *UpdateMenu)(struct CRecentFileList *_this, struct CCmdUI *);
        void (WINAPIV *ReadList)(struct CRecentFileList *_this);
        void (WINAPIV *WriteList)(struct CRecentFileList *_this);
        $D758732FF3E19653CF047F6272AB0FBD ___u6;
    };
END_ATF_NAMESPACE
