// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "_qry_case_select_timelimit_info_info.hpp"


START_ATF_NAMESPACE
    namespace detail
    {
        info::_qry_case_select_timelimit_infosize2_ptr _qry_case_select_timelimit_infosize2_next(nullptr);
        info::_qry_case_select_timelimit_infosize2_clbk _qry_case_select_timelimit_infosize2_user(nullptr);
        
        int _qry_case_select_timelimit_infosize2_wrapper(struct _qry_case_select_timelimit_info* _this)
        {
           return _qry_case_select_timelimit_infosize2_user(_this, _qry_case_select_timelimit_infosize2_next);
        };
        
        hook_record _qry_case_select_timelimit_info_functions[] = {
        {   (LPVOID)0x1401d9510L,
            (LPVOID *)&_qry_case_select_timelimit_infosize2_user,
            (LPVOID *)&_qry_case_select_timelimit_infosize2_next,
            (LPVOID)cast_pointer_function(_qry_case_select_timelimit_infosize2_wrapper),
            (LPVOID)cast_pointer_function((int(_qry_case_select_timelimit_info::*)())&_qry_case_select_timelimit_info::size) },
        
        };
        
    }; // end namespace detail
END_ATF_NAMESPACE
