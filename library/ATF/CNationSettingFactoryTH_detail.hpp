// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "CNationSettingFactoryTH_info.hpp"


START_ATF_NAMESPACE
    namespace detail
    {
        info::CNationSettingFactoryTHctor_CNationSettingFactoryTH2_ptr CNationSettingFactoryTHctor_CNationSettingFactoryTH2_next(nullptr);
        info::CNationSettingFactoryTHctor_CNationSettingFactoryTH2_clbk CNationSettingFactoryTHctor_CNationSettingFactoryTH2_user(nullptr);
        info::CNationSettingFactoryTHCreate4_ptr CNationSettingFactoryTHCreate4_next(nullptr);
        info::CNationSettingFactoryTHCreate4_clbk CNationSettingFactoryTHCreate4_user(nullptr);
        
        void CNationSettingFactoryTHctor_CNationSettingFactoryTH2_wrapper(struct CNationSettingFactoryTH* _this)
        {
           CNationSettingFactoryTHctor_CNationSettingFactoryTH2_user(_this, CNationSettingFactoryTHctor_CNationSettingFactoryTH2_next);
        };
        struct CNationSettingData* CNationSettingFactoryTHCreate4_wrapper(struct CNationSettingFactoryTH* _this, int iNationCode, char* szNationCodeStr, bool bServiceMode)
        {
           return CNationSettingFactoryTHCreate4_user(_this, iNationCode, szNationCodeStr, bServiceMode, CNationSettingFactoryTHCreate4_next);
        };
        
        hook_record CNationSettingFactoryTH_functions[] = {
        {   (LPVOID)0x1402198e0L,
            (LPVOID *)&CNationSettingFactoryTHctor_CNationSettingFactoryTH2_user,
            (LPVOID *)&CNationSettingFactoryTHctor_CNationSettingFactoryTH2_next,
            (LPVOID)cast_pointer_function(CNationSettingFactoryTHctor_CNationSettingFactoryTH2_wrapper),
            (LPVOID)cast_pointer_function((void(CNationSettingFactoryTH::*)())&CNationSettingFactoryTH::ctor_CNationSettingFactoryTH) },
        {   (LPVOID)0x140231e40L,
            (LPVOID *)&CNationSettingFactoryTHCreate4_user,
            (LPVOID *)&CNationSettingFactoryTHCreate4_next,
            (LPVOID)cast_pointer_function(CNationSettingFactoryTHCreate4_wrapper),
            (LPVOID)cast_pointer_function((struct CNationSettingData*(CNationSettingFactoryTH::*)(int, char*, bool))&CNationSettingFactoryTH::Create) },
        
        };
        
    }; // end namespace detail
END_ATF_NAMESPACE
