// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"


START_ATF_NAMESPACE
    struct _detected_char_list
    {
        struct _char_info
        {
            char m_byCharType;
            float m_fPos[2];
        };
        int nSize;
        _char_info CharInfoList[50];
    public:
        int AddCharInfo(char byCharType, float* fPos)
        {
            using org_ptr = int (WINAPIV*)(struct _detected_char_list*, char, float*);
            return (org_ptr(0x1402e5860L))(this, byCharType, fPos);
        };
        _detected_char_list()
        {
            using org_ptr = void (WINAPIV*)(struct _detected_char_list*);
            (org_ptr(0x1402e57c0L))(this);
        };
        void ctor__detected_char_list()
        {
            using org_ptr = void (WINAPIV*)(struct _detected_char_list*);
            (org_ptr(0x1402e57c0L))(this);
        };
        void init()
        {
            using org_ptr = void (WINAPIV*)(struct _detected_char_list*);
            (org_ptr(0x1402e5810L))(this);
        };
    };
END_ATF_NAMESPACE
