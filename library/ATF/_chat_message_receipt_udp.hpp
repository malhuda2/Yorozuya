// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"


START_ATF_NAMESPACE
    #pragma pack(push, 1)
    struct  _chat_message_receipt_udp
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
        _chat_message_receipt_udp()
        {
            using org_ptr = void (WINAPIV*)(struct _chat_message_receipt_udp*);
            (org_ptr(0x140094e90L))(this);
        };
        void ctor__chat_message_receipt_udp()
        {
            using org_ptr = void (WINAPIV*)(struct _chat_message_receipt_udp*);
            (org_ptr(0x140094e90L))(this);
        };
        int size()
        {
            using org_ptr = int (WINAPIV*)(struct _chat_message_receipt_udp*);
            return (org_ptr(0x140094eb0L))(this);
        };
    };
    #pragma pack(pop)
END_ATF_NAMESPACE
