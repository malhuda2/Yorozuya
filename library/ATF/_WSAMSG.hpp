// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "_WSABUF.hpp"
#include "sockaddr.hpp"


START_ATF_NAMESPACE
    #pragma pack(push, 8)
    struct _WSAMSG
    {
        sockaddr *name;
        int namelen;
        _WSABUF *lpBuffers;
        unsigned int dwBufferCount;
        _WSABUF Control;
        unsigned int dwFlags;
    };
    #pragma pack(pop)
END_ATF_NAMESPACE
