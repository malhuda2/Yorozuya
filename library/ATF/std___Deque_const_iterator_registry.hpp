// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "./common/ATFCore.hpp"
#include "std___Deque_const_iterator_detail.hpp"


START_ATF_NAMESPACE
    namespace registry
    {
        class std::_Deque_const_iterator<RECV_DATA,std::allocator<RECV_DATA>,0>_registry : public IRegistry
        {
            public: virtual void registry() {
                auto& hook_core = CATFCore::get_instance();
                for (auto& r : std::detailstd::_Deque_const_iterator<RECV_DATA,std::allocator<RECV_DATA>,0>_functions)
                    hook_core.reg_wrapper(r.pBind, r);
            }
        };
        
    }; // end namespace registry
END_ATF_NAMESPACE
