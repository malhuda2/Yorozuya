// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "CSyncObject.hpp"


START_ATF_NAMESPACE
    #pragma pack(push, 8)
    struct CSingleLock
    {
        CSyncObject *m_pObject;
        void *m_hObject;
        int m_bAcquired;
    };
    #pragma pack(pop)
END_ATF_NAMESPACE
