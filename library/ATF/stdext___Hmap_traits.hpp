// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>
#include <std___Container_base.hpp>
#include <stdext__hash_compare.hpp>


START_ATF_NAMESPACE
    namespace stdext
    {
        #pragma pack(push, 8)
        template<typename _Kty, // key type
            typename _Ty,       // mapped type
            typename _Tr,       // comparator predicate type
            typename _Alloc,    // actual allocator type (should be value allocator)
            bool _Mfl>          // true if multiple equivalent keys are permitted
            struct  _Hmap_traits : std::_Container_base
        {
            _Tr comp;
        };
        #pragma pack(pop)
    }; // end namespace stdext
END_ATF_NAMESPACE
