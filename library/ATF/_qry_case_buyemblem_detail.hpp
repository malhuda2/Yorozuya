// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "_qry_case_buyemblem_info.hpp"


START_ATF_NAMESPACE
    namespace detail
    {
        info::_qry_case_buyemblemsize2_ptr _qry_case_buyemblemsize2_next(nullptr);
        info::_qry_case_buyemblemsize2_clbk _qry_case_buyemblemsize2_user(nullptr);
        
        int _qry_case_buyemblemsize2_wrapper(struct _qry_case_buyemblem* _this)
        {
           return _qry_case_buyemblemsize2_user(_this, _qry_case_buyemblemsize2_next);
        };
        
        hook_record _qry_case_buyemblem_functions[] = {
        {   (LPVOID)0x14025d660L,
            (LPVOID *)&_qry_case_buyemblemsize2_user,
            (LPVOID *)&_qry_case_buyemblemsize2_next,
            (LPVOID)cast_pointer_function(_qry_case_buyemblemsize2_wrapper),
            (LPVOID)cast_pointer_function((int(_qry_case_buyemblem::*)())&_qry_case_buyemblem::size) },
        
        };
        
    }; // end namespace detail
END_ATF_NAMESPACE
