// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "_qry_case_unmandtrader_cheat_updateregisttime_info.hpp"


START_ATF_NAMESPACE
    namespace detail
    {
        info::_qry_case_unmandtrader_cheat_updateregisttimesize2_ptr _qry_case_unmandtrader_cheat_updateregisttimesize2_next(nullptr);
        info::_qry_case_unmandtrader_cheat_updateregisttimesize2_clbk _qry_case_unmandtrader_cheat_updateregisttimesize2_user(nullptr);
        
        int _qry_case_unmandtrader_cheat_updateregisttimesize2_wrapper(struct _qry_case_unmandtrader_cheat_updateregisttime* _this)
        {
           return _qry_case_unmandtrader_cheat_updateregisttimesize2_user(_this, _qry_case_unmandtrader_cheat_updateregisttimesize2_next);
        };
        
        hook_record _qry_case_unmandtrader_cheat_updateregisttime_functions[] = {
        {   (LPVOID)0x140360ad0L,
            (LPVOID *)&_qry_case_unmandtrader_cheat_updateregisttimesize2_user,
            (LPVOID *)&_qry_case_unmandtrader_cheat_updateregisttimesize2_next,
            (LPVOID)cast_pointer_function(_qry_case_unmandtrader_cheat_updateregisttimesize2_wrapper),
            (LPVOID)cast_pointer_function((int(_qry_case_unmandtrader_cheat_updateregisttime::*)())&_qry_case_unmandtrader_cheat_updateregisttime::size) },
        
        };
        
    }; // end namespace detail
END_ATF_NAMESPACE
