// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "ATL__CFileTimeSpan.hpp"
#include "_FILETIME.hpp"


START_ATF_NAMESPACE
    namespace ATL
    {
        struct  CFileTime : _FILETIME
        {
        public:
            CFileTime(struct _FILETIME* ft)
            {
                using org_ptr = void (WINAPIV*)(struct CFileTime*, struct _FILETIME*);
                (org_ptr(0x140673920L))(this, ft);
            };
            void ctor_CFileTime(struct _FILETIME* ft)
            {
                using org_ptr = void (WINAPIV*)(struct CFileTime*, struct _FILETIME*);
                (org_ptr(0x140673920L))(this, ft);
            };
            CFileTime(uint64_t nTime)
            {
                using org_ptr = void (WINAPIV*)(struct CFileTime*, uint64_t);
                (org_ptr(0x140673960L))(this, nTime);
            };
            void ctor_CFileTime(uint64_t nTime)
            {
                using org_ptr = void (WINAPIV*)(struct CFileTime*, uint64_t);
                (org_ptr(0x140673960L))(this, nTime);
            };
            CFileTime()
            {
                using org_ptr = void (WINAPIV*)(struct CFileTime*);
                (org_ptr(0x1406738f0L))(this);
            };
            void ctor_CFileTime()
            {
                using org_ptr = void (WINAPIV*)(struct CFileTime*);
                (org_ptr(0x1406738f0L))(this);
            };
            static struct CFileTime* GetTickCount(struct CFileTime* result)
            {
                using org_ptr = struct CFileTime* (WINAPIV*)(struct CFileTime*);
                return (org_ptr(0x1406739e0L))(result);
            };
            uint64_t GetTime()
            {
                using org_ptr = uint64_t (WINAPIV*)(struct CFileTime*);
                return (org_ptr(0x140673e20L))(this);
            };
            struct CFileTime* LocalToUTC(struct CFileTime* result)
            {
                using org_ptr = struct CFileTime* (WINAPIV*)(struct CFileTime*, struct CFileTime*);
                return (org_ptr(0x140673ed0L))(this, result);
            };
            void SetTime(uint64_t nTime)
            {
                using org_ptr = void (WINAPIV*)(struct CFileTime*, uint64_t);
                (org_ptr(0x140673e50L))(this, nTime);
            };
            struct CFileTime* UTCToLocal(struct CFileTime* result)
            {
                using org_ptr = struct CFileTime* (WINAPIV*)(struct CFileTime*, struct CFileTime*);
                return (org_ptr(0x140673e80L))(this, result);
            };
        };
    }; // end namespace ATL
END_ATF_NAMESPACE
