// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"


START_ATF_NAMESPACE
    namespace lua_tinker
    {
        template<>
        struct  constructor<int,int,int,void>
        {
        public:
            static void invoke(struct constructor<int,int,int,void>* _this, lua_State* L)
            {
                using org_ptr = void (WINAPIV*)(struct constructor<int,int,int,void>*, lua_State*);
                (org_ptr(0x140408f00L))(_this, L);
            };
        };
    }; // end namespace lua_tinker
END_ATF_NAMESPACE
