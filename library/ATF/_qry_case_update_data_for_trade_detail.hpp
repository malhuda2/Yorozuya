// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "_qry_case_update_data_for_trade_info.hpp"


START_ATF_NAMESPACE
    namespace detail
    {
        info::_qry_case_update_data_for_tradector__qry_case_update_data_for_trade2_ptr _qry_case_update_data_for_tradector__qry_case_update_data_for_trade2_next(nullptr);
        info::_qry_case_update_data_for_tradector__qry_case_update_data_for_trade2_clbk _qry_case_update_data_for_tradector__qry_case_update_data_for_trade2_user(nullptr);
        info::_qry_case_update_data_for_tradesize4_ptr _qry_case_update_data_for_tradesize4_next(nullptr);
        info::_qry_case_update_data_for_tradesize4_clbk _qry_case_update_data_for_tradesize4_user(nullptr);
        
        void _qry_case_update_data_for_tradector__qry_case_update_data_for_trade2_wrapper(struct _qry_case_update_data_for_trade* _this)
        {
           _qry_case_update_data_for_tradector__qry_case_update_data_for_trade2_user(_this, _qry_case_update_data_for_tradector__qry_case_update_data_for_trade2_next);
        };
        int _qry_case_update_data_for_tradesize4_wrapper(struct _qry_case_update_data_for_trade* _this)
        {
           return _qry_case_update_data_for_tradesize4_user(_this, _qry_case_update_data_for_tradesize4_next);
        };
        
        hook_record _qry_case_update_data_for_trade_functions[] = {
        {   (LPVOID)0x1400f7be0L,
            (LPVOID *)&_qry_case_update_data_for_tradector__qry_case_update_data_for_trade2_user,
            (LPVOID *)&_qry_case_update_data_for_tradector__qry_case_update_data_for_trade2_next,
            (LPVOID)cast_pointer_function(_qry_case_update_data_for_tradector__qry_case_update_data_for_trade2_wrapper),
            (LPVOID)cast_pointer_function((void(_qry_case_update_data_for_trade::*)())&_qry_case_update_data_for_trade::ctor__qry_case_update_data_for_trade) },
        {   (LPVOID)0x1400f7bd0L,
            (LPVOID *)&_qry_case_update_data_for_tradesize4_user,
            (LPVOID *)&_qry_case_update_data_for_tradesize4_next,
            (LPVOID)cast_pointer_function(_qry_case_update_data_for_tradesize4_wrapper),
            (LPVOID)cast_pointer_function((int(_qry_case_update_data_for_trade::*)())&_qry_case_update_data_for_trade::size) },
        
        };
        
    }; // end namespace detail
END_ATF_NAMESPACE
