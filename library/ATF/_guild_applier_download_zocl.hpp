// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"


START_ATF_NAMESPACE
    struct _guild_applier_download_zocl
    {
        unsigned __int16 wDataSize;
        char sData[10000];
    public:
        _guild_applier_download_zocl()
        {
            using org_ptr = void (WINAPIV*)(struct _guild_applier_download_zocl*);
            (org_ptr(0x14025cdd0L))(this);
        };
        void ctor__guild_applier_download_zocl()
        {
            using org_ptr = void (WINAPIV*)(struct _guild_applier_download_zocl*);
            (org_ptr(0x14025cdd0L))(this);
        };
        int size()
        {
            using org_ptr = int (WINAPIV*)(struct _guild_applier_download_zocl*);
            return (org_ptr(0x14025d3e0L))(this);
        };
    };
END_ATF_NAMESPACE
