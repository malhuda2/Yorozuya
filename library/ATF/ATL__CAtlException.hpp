// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "HRESULT.hpp"


START_ATF_NAMESPACE
    namespace ATL
    {
        struct CAtlException
        {
            HRESULT m_hr;
        public:
            CAtlException(HRESULT hr)
            {
                using org_ptr = void (WINAPIV*)(struct CAtlException*, HRESULT);
                (org_ptr(0x14066dd10L))(this, hr);
            };
            void ctor_CAtlException(HRESULT hr)
            {
                using org_ptr = void (WINAPIV*)(struct CAtlException*, HRESULT);
                (org_ptr(0x14066dd10L))(this, hr);
            };
        };
    }; // end namespace ATL
END_ATF_NAMESPACE
