// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"


START_ATF_NAMESPACE
    #pragma pack(push, 1)
    struct  _chat_steal_message_gm_zocl
    {
        char byMessageType;
        unsigned int dwSenderSerial;
        char wszSenderName[17];
        char byRaceCode;
        bool bFiltering;
        char byPvpGrade;
        char bySize;
        char wszChatData[256];
    public:
        _chat_steal_message_gm_zocl()
        {
            using org_ptr = void (WINAPIV*)(struct _chat_steal_message_gm_zocl*);
            (org_ptr(0x1403f8d30L))(this);
        };
        void ctor__chat_steal_message_gm_zocl()
        {
            using org_ptr = void (WINAPIV*)(struct _chat_steal_message_gm_zocl*);
            (org_ptr(0x1403f8d30L))(this);
        };
        int size()
        {
            using org_ptr = int (WINAPIV*)(struct _chat_steal_message_gm_zocl*);
            return (org_ptr(0x1403f8d50L))(this);
        };
    };
    #pragma pack(pop)
END_ATF_NAMESPACE
