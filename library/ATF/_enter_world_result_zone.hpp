// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"


START_ATF_NAMESPACE
    struct _enter_world_result_zone
    {
        char byResult;
        char byUserGrade;
        char bySvrType;
    public:
        int size()
        {
            using org_ptr = int (WINAPIV*)(struct _enter_world_result_zone*);
            return (org_ptr(0x14011f250L))(this);
        };
    };
END_ATF_NAMESPACE
