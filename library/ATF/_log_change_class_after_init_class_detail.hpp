// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "_log_change_class_after_init_class_info.hpp"


START_ATF_NAMESPACE
    namespace detail
    {
        info::_log_change_class_after_init_classsize2_ptr _log_change_class_after_init_classsize2_next(nullptr);
        info::_log_change_class_after_init_classsize2_clbk _log_change_class_after_init_classsize2_user(nullptr);
        
        int _log_change_class_after_init_classsize2_wrapper(struct _log_change_class_after_init_class* _this)
        {
           return _log_change_class_after_init_classsize2_user(_this, _log_change_class_after_init_classsize2_next);
        };
        
        hook_record _log_change_class_after_init_class_functions[] = {
        {   (LPVOID)0x140120e20L,
            (LPVOID *)&_log_change_class_after_init_classsize2_user,
            (LPVOID *)&_log_change_class_after_init_classsize2_next,
            (LPVOID)cast_pointer_function(_log_change_class_after_init_classsize2_wrapper),
            (LPVOID)cast_pointer_function((int(_log_change_class_after_init_class::*)())&_log_change_class_after_init_class::size) },
        
        };
        
    }; // end namespace detail
END_ATF_NAMESPACE
