// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "_cash_event_info.hpp"


START_ATF_NAMESPACE
    namespace detail
    {
        info::_cash_eventctor__cash_event2_ptr _cash_eventctor__cash_event2_next(nullptr);
        info::_cash_eventctor__cash_event2_clbk _cash_eventctor__cash_event2_user(nullptr);
        info::_cash_eventdtor__cash_event4_ptr _cash_eventdtor__cash_event4_next(nullptr);
        info::_cash_eventdtor__cash_event4_clbk _cash_eventdtor__cash_event4_user(nullptr);
        
        void _cash_eventctor__cash_event2_wrapper(struct _cash_event* _this)
        {
           _cash_eventctor__cash_event2_user(_this, _cash_eventctor__cash_event2_next);
        };
        void _cash_eventdtor__cash_event4_wrapper(struct _cash_event* _this)
        {
           _cash_eventdtor__cash_event4_user(_this, _cash_eventdtor__cash_event4_next);
        };
        
        hook_record _cash_event_functions[] = {
        {   (LPVOID)0x140304540L,
            (LPVOID *)&_cash_eventctor__cash_event2_user,
            (LPVOID *)&_cash_eventctor__cash_event2_next,
            (LPVOID)cast_pointer_function(_cash_eventctor__cash_event2_wrapper),
            (LPVOID)cast_pointer_function((void(_cash_event::*)())&_cash_event::ctor__cash_event) },
        {   (LPVOID)0x140304720L,
            (LPVOID *)&_cash_eventdtor__cash_event4_user,
            (LPVOID *)&_cash_eventdtor__cash_event4_next,
            (LPVOID)cast_pointer_function(_cash_eventdtor__cash_event4_wrapper),
            (LPVOID)cast_pointer_function((void(_cash_event::*)())&_cash_event::dtor__cash_event) },
        
        };
        
    }; // end namespace detail
END_ATF_NAMESPACE
