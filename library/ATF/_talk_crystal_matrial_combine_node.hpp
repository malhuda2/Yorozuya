// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"


START_ATF_NAMESPACE
    #pragma pack(push, 2)
    struct _talk_crystal_matrial_combine_node
    {
        struct _matrialinfo
        {
            _STORAGE_LIST::_db_con *m_pMatrial;
            char m_byConsume;
            char m_byUseCount;
            char m_byClientIndex;
        public:
            void Init()
            {
                using org_ptr = void (WINAPIV*)(struct _matrialinfo*);
                (org_ptr(0x140432070L))(this);
            };
            _matrialinfo()
            {
                using org_ptr = void (WINAPIV*)(struct _matrialinfo*);
                (org_ptr(0x1404321a0L))(this);
            };
            void ctor__matrialinfo()
            {
                using org_ptr = void (WINAPIV*)(struct _matrialinfo*);
                (org_ptr(0x1404321a0L))(this);
            };
        };
        int m_nMixIndex;
        char m_byTableCode;
        unsigned __int16 m_wItemIndex;
        int m_nNeedItemNum;
        int m_nRequiredSlotCount;
        _matrialinfo m_matrialList[24];
        int m_nMatrialCount;
        int m_nMatrialOverlapCount;
        int m_nMakeCount;
        bool m_bUse;
         _STORAGE_LIST::_db_con m_MakeItem;
    public:
        void Consume(int nConsumeCount)
        {
            using org_ptr = void (WINAPIV*)(struct _talk_crystal_matrial_combine_node*, int);
            (org_ptr(0x140430a90L))(this, nConsumeCount);
        };
        int GetMixNeedNum()
        {
            using org_ptr = int (WINAPIV*)(struct _talk_crystal_matrial_combine_node*);
            return (org_ptr(0x1404321f0L))(this);
        };
        int GetRequiredSlotCount()
        {
            using org_ptr = int (WINAPIV*)(struct _talk_crystal_matrial_combine_node*);
            return (org_ptr(0x140432210L))(this);
        };
        void Init()
        {
            using org_ptr = void (WINAPIV*)(struct _talk_crystal_matrial_combine_node*);
            (org_ptr(0x1404307f0L))(this);
        };
        void Make(int nMakeCount)
        {
            using org_ptr = void (WINAPIV*)(struct _talk_crystal_matrial_combine_node*, int);
            (org_ptr(0x140430b70L))(this, nMakeCount);
        };
        bool Push(struct _STORAGE_LIST::_db_con* pItem, char byUseCount, char byClientIndex)
        {
            using org_ptr = bool (WINAPIV*)(struct _talk_crystal_matrial_combine_node*, struct _STORAGE_LIST::_db_con*, char, char);
            return (org_ptr(0x1404309c0L))(this, pItem, byUseCount, byClientIndex);
        };
        bool Set(int nMixIndex, int nNeedItemNum, char byTableCode, uint16_t wItemIndex)
        {
            using org_ptr = bool (WINAPIV*)(struct _talk_crystal_matrial_combine_node*, int, int, char, uint16_t);
            return (org_ptr(0x1404308f0L))(this, nMixIndex, nNeedItemNum, byTableCode, wItemIndex);
        };
        _talk_crystal_matrial_combine_node()
        {
            using org_ptr = void (WINAPIV*)(struct _talk_crystal_matrial_combine_node*);
            (org_ptr(0x140432110L))(this);
        };
        void ctor__talk_crystal_matrial_combine_node()
        {
            using org_ptr = void (WINAPIV*)(struct _talk_crystal_matrial_combine_node*);
            (org_ptr(0x140432110L))(this);
        };
    };
    #pragma pack(pop)
END_ATF_NAMESPACE
