// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "_economy_history_data_info.hpp"


START_ATF_NAMESPACE
    namespace detail
    {
        info::_economy_history_dataInit2_ptr _economy_history_dataInit2_next(nullptr);
        info::_economy_history_dataInit2_clbk _economy_history_dataInit2_user(nullptr);
        info::_economy_history_datactor__economy_history_data4_ptr _economy_history_datactor__economy_history_data4_next(nullptr);
        info::_economy_history_datactor__economy_history_data4_clbk _economy_history_datactor__economy_history_data4_user(nullptr);
        
        void _economy_history_dataInit2_wrapper(struct _economy_history_data* _this)
        {
           _economy_history_dataInit2_user(_this, _economy_history_dataInit2_next);
        };
        void _economy_history_datactor__economy_history_data4_wrapper(struct _economy_history_data* _this)
        {
           _economy_history_datactor__economy_history_data4_user(_this, _economy_history_datactor__economy_history_data4_next);
        };
        
        hook_record _economy_history_data_functions[] = {
        {   (LPVOID)0x1402058c0L,
            (LPVOID *)&_economy_history_dataInit2_user,
            (LPVOID *)&_economy_history_dataInit2_next,
            (LPVOID)cast_pointer_function(_economy_history_dataInit2_wrapper),
            (LPVOID)cast_pointer_function((void(_economy_history_data::*)())&_economy_history_data::Init) },
        {   (LPVOID)0x140205870L,
            (LPVOID *)&_economy_history_datactor__economy_history_data4_user,
            (LPVOID *)&_economy_history_datactor__economy_history_data4_next,
            (LPVOID)cast_pointer_function(_economy_history_datactor__economy_history_data4_wrapper),
            (LPVOID)cast_pointer_function((void(_economy_history_data::*)())&_economy_history_data::ctor__economy_history_data) },
        
        };
        
    }; // end namespace detail
END_ATF_NAMESPACE
