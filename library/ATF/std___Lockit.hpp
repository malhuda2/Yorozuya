// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"


START_ATF_NAMESPACE
    namespace std
    {
        struct _Lockit
        {
            int _Locktype;
        public:
            _Lockit(int arg_0)
            {
                using org_ptr = int64_t (WINAPIV*)(struct _Lockit*, int);
                (org_ptr(0x1404dbafcL))(this, arg_0);
            };
            int64_t ctor__Lockit(int arg_0)
            {
                using org_ptr = int64_t (WINAPIV*)(struct _Lockit*, int);
                return (org_ptr(0x1404dbafcL))(this, arg_0);
            };
            ~_Lockit()
            {
                using org_ptr = int64_t (WINAPIV*)(struct _Lockit*);
                (org_ptr(0x1404dbaf6L))(this);
            };
            int64_t dtor__Lockit()
            {
                using org_ptr = int64_t (WINAPIV*)(struct _Lockit*);
                return (org_ptr(0x1404dbaf6L))(this);
            };
        };
    }; // end namespace std
END_ATF_NAMESPACE
