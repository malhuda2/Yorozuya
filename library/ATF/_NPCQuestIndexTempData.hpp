// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"


START_ATF_NAMESPACE
    struct _NPCQuestIndexTempData
    {
        struct _IndexData
        {
            unsigned int dwQuestHappenIndex;
            unsigned int dwQuestIndex;
        };
        int nQuestNum;
        _IndexData IndexData[30];
    public:
        void Init()
        {
            using org_ptr = void (WINAPIV*)(struct _NPCQuestIndexTempData*);
            (org_ptr(0x140073ef0L))(this);
        };
        _NPCQuestIndexTempData()
        {
            using org_ptr = void (WINAPIV*)(struct _NPCQuestIndexTempData*);
            (org_ptr(0x140073ea0L))(this);
        };
        void ctor__NPCQuestIndexTempData()
        {
            using org_ptr = void (WINAPIV*)(struct _NPCQuestIndexTempData*);
            (org_ptr(0x140073ea0L))(this);
        };
    };
END_ATF_NAMESPACE
