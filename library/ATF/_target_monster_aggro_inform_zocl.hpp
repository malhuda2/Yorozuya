// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"


START_ATF_NAMESPACE
    #pragma pack(push, 1)
    struct  _target_monster_aggro_inform_zocl
    {
        struct  _aggro_node
        {
            char m_IsData;
            char m_Name[32];
            int m_nAggroData;
            int m_nDamageData;
            int m_nKingPowerDamage;
        };
        unsigned int dwSerial;
        _aggro_node m_AggroNode[10];
        float fTimer;
    public:
        void Init()
        {
            using org_ptr = void (WINAPIV*)(struct _target_monster_aggro_inform_zocl*);
            (org_ptr(0x1400f0060L))(this);
        };
        _target_monster_aggro_inform_zocl()
        {
            using org_ptr = void (WINAPIV*)(struct _target_monster_aggro_inform_zocl*);
            (org_ptr(0x1400f0010L))(this);
        };
        void ctor__target_monster_aggro_inform_zocl()
        {
            using org_ptr = void (WINAPIV*)(struct _target_monster_aggro_inform_zocl*);
            (org_ptr(0x1400f0010L))(this);
        };
    };
    #pragma pack(pop)
END_ATF_NAMESPACE
