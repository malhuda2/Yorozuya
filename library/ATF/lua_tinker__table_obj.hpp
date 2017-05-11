// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"


START_ATF_NAMESPACE
    namespace lua_tinker
    {
        #pragma pack(push, 8)
        struct table_obj
        {
            struct lua_State *m_L;
            int m_index;
            const void *m_pointer;
            int m_ref;
        public:
            void dec_ref()
            {
                using org_ptr = void (WINAPIV*)(struct table_obj*);
                (org_ptr(0x140446260L))(this);
            };
            void inc_ref()
            {
                using org_ptr = void (WINAPIV*)(struct table_obj*);
                (org_ptr(0x140446230L))(this);
            };
            table_obj(lua_State* L, int index)
            {
                using org_ptr = void (WINAPIV*)(struct table_obj*, lua_State*, int);
                (org_ptr(0x140446140L))(this, L, index);
            };
            void ctor_table_obj(lua_State* L, int index)
            {
                using org_ptr = void (WINAPIV*)(struct table_obj*, lua_State*, int);
                (org_ptr(0x140446140L))(this, L, index);
            };
            bool validate()
            {
                using org_ptr = bool (WINAPIV*)(struct table_obj*);
                return (org_ptr(0x1404462f0L))(this);
            };
            ~table_obj()
            {
                using org_ptr = void (WINAPIV*)(struct table_obj*);
                (org_ptr(0x1404461d0L))(this);
            };
            void dtor_table_obj()
            {
                using org_ptr = void (WINAPIV*)(struct table_obj*);
                (org_ptr(0x1404461d0L))(this);
            };
        };
        #pragma pack(pop)
    }; // end namespace lua_tinker
END_ATF_NAMESPACE
