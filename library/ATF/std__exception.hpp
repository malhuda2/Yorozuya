// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "std__exceptionVtbl.hpp"


START_ATF_NAMESPACE
    namespace std
    {
        #pragma pack(push, 8)
        struct exception
        {
            exceptionVtbl *vfptr;
            const char *_m_what;
            int _m_doFree;
        public:
            exception(char** arg_0)
            {
                using org_ptr = int64_t (WINAPIV*)(struct exception*, char**);
                (org_ptr(0x1404dcea2L))(this, arg_0);
            };
            int64_t ctor_exception(char** arg_0)
            {
                using org_ptr = int64_t (WINAPIV*)(struct exception*, char**);
                return (org_ptr(0x1404dcea2L))(this, arg_0);
            };
            exception(char** arg_0, int arg_1)
            {
                using org_ptr = int64_t (WINAPIV*)(struct exception*, char**, int);
                (org_ptr(0x140676d98L))(this, arg_0, arg_1);
            };
            int64_t ctor_exception(char** arg_0, int arg_1)
            {
                using org_ptr = int64_t (WINAPIV*)(struct exception*, char**, int);
                return (org_ptr(0x140676d98L))(this, arg_0, arg_1);
            };
            exception(struct exception* arg_0)
            {
                using org_ptr = int64_t (WINAPIV*)(struct exception*, struct exception*);
                (org_ptr(0x1404dce8aL))(this, arg_0);
            };
            int64_t ctor_exception(struct exception* arg_0)
            {
                using org_ptr = int64_t (WINAPIV*)(struct exception*, struct exception*);
                return (org_ptr(0x1404dce8aL))(this, arg_0);
            };
            exception()
            {
                using org_ptr = int64_t (WINAPIV*)(struct exception*);
                (org_ptr(0x1404dce96L))(this);
            };
            int64_t ctor_exception()
            {
                using org_ptr = int64_t (WINAPIV*)(struct exception*);
                return (org_ptr(0x1404dce96L))(this);
            };
            char* what()
            {
                using org_ptr = char* (WINAPIV*)(struct exception*);
                return (org_ptr(0x1404dcea8L))(this);
            };
        };
        #pragma pack(pop)
    }; // end namespace std
END_ATF_NAMESPACE
