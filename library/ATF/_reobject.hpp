// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "IOleClientSite.hpp"
#include "IOleObject.hpp"
#include "IStorage.hpp"
#include "_GUID.hpp"
#include "tagSIZE.hpp"


START_ATF_NAMESPACE
    #pragma pack(push, 8)
    struct _reobject
    {
        unsigned int cbStruct;
        int cp;
        _GUID clsid;
        IOleObject *poleobj;
        IStorage *pstg;
        IOleClientSite *polesite;
        tagSIZE sizel;
        unsigned int dvaspect;
        unsigned int dwFlags;
        unsigned int dwUser;
    };
    #pragma pack(pop)
END_ATF_NAMESPACE
