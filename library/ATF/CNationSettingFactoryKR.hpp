// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "CNationSettingData.hpp"
#include "CNationSettingFactory.hpp"


START_ATF_NAMESPACE
    struct  CNationSettingFactoryKR : CNationSettingFactory
    {
    public:
        CNationSettingFactoryKR()
			: CNationSettingFactory(410)
        {
            using org_ptr = void (WINAPIV*)(struct CNationSettingFactoryKR*);
            (org_ptr(0x140219480L))(this);
        };
        void ctor_CNationSettingFactoryKR()
        {
            using org_ptr = void (WINAPIV*)(struct CNationSettingFactoryKR*);
            (org_ptr(0x140219480L))(this);
        };
        struct CNationSettingData* Create(int iNationCode, char* szNationCodeStr, bool bServiceMode)
        {
            using org_ptr = struct CNationSettingData* (WINAPIV*)(struct CNationSettingFactoryKR*, int, char*, bool);
            return (org_ptr(0x14022ae30L))(this, iNationCode, szNationCodeStr, bServiceMode);
        };
    };
END_ATF_NAMESPACE
