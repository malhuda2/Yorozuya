// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "CNationSettingData.hpp"
#include "CNationSettingFactory.hpp"


START_ATF_NAMESPACE
    struct  CNationSettingFactoryPH : CNationSettingFactory
    {
    public:
        CNationSettingFactoryPH()
			: CNationSettingFactory(608)
        {
            using org_ptr = void (WINAPIV*)(struct CNationSettingFactoryPH*);
            (org_ptr(0x140219640L))(this);
        };
        void ctor_CNationSettingFactoryPH()
        {
            using org_ptr = void (WINAPIV*)(struct CNationSettingFactoryPH*);
            (org_ptr(0x140219640L))(this);
        };
        struct CNationSettingData* Create(int iNationCode, char* szNationCodeStr, bool bServiceMode)
        {
            using org_ptr = struct CNationSettingData* (WINAPIV*)(struct CNationSettingFactoryPH*, int, char*, bool);
            return (org_ptr(0x14022d890L))(this, iNationCode, szNationCodeStr, bServiceMode);
        };
    };
END_ATF_NAMESPACE
