// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "std___Vector_val.hpp"
#include "std__allocator.hpp"

START_ATF_NAMESPACE
    namespace std
    {
		template<typename _Ty, typename _Alloc = allocator<_Ty>>
        struct vector : _Vector_val<_Ty, _Alloc>
        {
			_Ty* _Myfirst;
			_Ty* _Mylast;
			_Ty* _Myend;
        };
    }; // end namespace std
END_ATF_NAMESPACE
