// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "std___Deque_iterator_info.hpp"


START_ATF_NAMESPACE
    namespace std
    {
        namespace detail
        {
            info::std___Deque_iteratorctor__Deque_iterator2_ptr std___Deque_iteratorctor__Deque_iterator2_next(nullptr);
            info::std___Deque_iteratorctor__Deque_iterator2_clbk std___Deque_iteratorctor__Deque_iterator2_user(nullptr);
            info::std___Deque_iteratorctor__Deque_iterator4_ptr std___Deque_iteratorctor__Deque_iterator4_next(nullptr);
            info::std___Deque_iteratorctor__Deque_iterator4_clbk std___Deque_iteratorctor__Deque_iterator4_user(nullptr);
            info::std___Deque_iteratordtor__Deque_iterator20_ptr std___Deque_iteratordtor__Deque_iterator20_next(nullptr);
            info::std___Deque_iteratordtor__Deque_iterator20_clbk std___Deque_iteratordtor__Deque_iterator20_user(nullptr);
            
            void std___Deque_iteratorctor__Deque_iterator2_wrapper(struct std::_Deque_iterator<RECV_DATA,std::allocator<RECV_DATA>,0>* _this, struct std::_Deque_iterator<RECV_DATA,std::allocator<RECV_DATA>,0>* __that)
            {
               std___Deque_iteratorctor__Deque_iterator2_user(_this, __that);
            };
            void std___Deque_iteratorctor__Deque_iterator4_wrapper(struct std::_Deque_iterator<RECV_DATA,std::allocator<RECV_DATA>,0>* _this, uint64_t _Off, struct std::_Container_base* _Pdeque)
            {
               std___Deque_iteratorctor__Deque_iterator4_user(_this, _Off, _Pdeque);
            };
            void std___Deque_iteratordtor__Deque_iterator20_wrapper(struct std::_Deque_iterator<RECV_DATA,std::allocator<RECV_DATA>,0>* _this)
            {
               std___Deque_iteratordtor__Deque_iterator20_user(_this);
            };
            
            hook_record _Deque_iterator<RECV_DATA,std::allocator<RECV_DATA>,0>_functions[] = {
            {   (LPVOID)0x14031d540L,
                (LPVOID *)&std___Deque_iteratorctor__Deque_iterator2_user,
                (LPVOID *)&std___Deque_iteratorctor__Deque_iterator2_next,
                (LPVOID)cast_pointer_function(std___Deque_iteratorctor__Deque_iterator2_wrapper),
                (LPVOID)cast_pointer_function((void(std::_Deque_iterator<RECV_DATA,std::allocator<RECV_DATA>,0>::*)(struct std::_Deque_iterator<RECV_DATA,std::allocator<RECV_DATA>,0>*))&std::_Deque_iterator<RECV_DATA,std::allocator<RECV_DATA>,0>::ctor__Deque_iterator) },
            {   (LPVOID)0x14031e370L,
                (LPVOID *)&std___Deque_iteratorctor__Deque_iterator4_user,
                (LPVOID *)&std___Deque_iteratorctor__Deque_iterator4_next,
                (LPVOID)cast_pointer_function(std___Deque_iteratorctor__Deque_iterator4_wrapper),
                (LPVOID)cast_pointer_function((void(std::_Deque_iterator<RECV_DATA,std::allocator<RECV_DATA>,0>::*)(uint64_t, struct std::_Container_base*))&std::_Deque_iterator<RECV_DATA,std::allocator<RECV_DATA>,0>::ctor__Deque_iterator) },
            {   (LPVOID)0x14031d480L,
                (LPVOID *)&std___Deque_iteratordtor__Deque_iterator20_user,
                (LPVOID *)&std___Deque_iteratordtor__Deque_iterator20_next,
                (LPVOID)cast_pointer_function(std___Deque_iteratordtor__Deque_iterator20_wrapper),
                (LPVOID)cast_pointer_function((void(std::_Deque_iterator<RECV_DATA,std::allocator<RECV_DATA>,0>::*)())&std::_Deque_iterator<RECV_DATA,std::allocator<RECV_DATA>,0>::dtor__Deque_iterator) },
            
            };
            
        }; // end namespace detail
    }; // end namespace std
END_ATF_NAMESPACE
