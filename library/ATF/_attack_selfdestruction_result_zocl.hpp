// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "_attack_gen_result_zocl.hpp"


START_ATF_NAMESPACE
    #pragma pack(push, 1)
    struct  _attack_selfdestruction_result_zocl
    {
        char byAtterID;
        unsigned int dwAtterSerial;
        char byAttackPart;
        unsigned __int16 wBulletIndex;
        bool bCritical;
        char byListNum;
        _attack_gen_result_zocl::_dam_list DamList[32];
    public:
        _attack_selfdestruction_result_zocl()
        {
            using org_ptr = void (WINAPIV*)(struct _attack_selfdestruction_result_zocl*);
            (org_ptr(0x1400eef50L))(this);
        };
        void ctor__attack_selfdestruction_result_zocl()
        {
            using org_ptr = void (WINAPIV*)(struct _attack_selfdestruction_result_zocl*);
            (org_ptr(0x1400eef50L))(this);
        };
        int size()
        {
            using org_ptr = int (WINAPIV*)(struct _attack_selfdestruction_result_zocl*);
            return (org_ptr(0x1400eef70L))(this);
        };
    };
    #pragma pack(pop)
END_ATF_NAMESPACE
