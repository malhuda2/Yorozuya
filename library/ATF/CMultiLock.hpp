// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"


START_ATF_NAMESPACE
    #pragma pack(push, 8)
    struct CMultiLock
    {
        void *m_hPreallocated[8];
        int m_bPreallocated[8];
        CSyncObject *const *m_ppObjectArray;
        void **m_pHandleArray;
        int *m_bLockedArray;
        unsigned int m_dwCount;
    };
    #pragma pack(pop)
END_ATF_NAMESPACE
