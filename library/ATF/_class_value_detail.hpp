// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "_class_value_info.hpp"


START_ATF_NAMESPACE
    namespace detail
    {
        info::_class_valuector__class_value2_ptr _class_valuector__class_value2_next(nullptr);
        info::_class_valuector__class_value2_clbk _class_valuector__class_value2_user(nullptr);
        info::_class_valueinit4_ptr _class_valueinit4_next(nullptr);
        info::_class_valueinit4_clbk _class_valueinit4_user(nullptr);
        info::_class_valuesize6_ptr _class_valuesize6_next(nullptr);
        info::_class_valuesize6_clbk _class_valuesize6_user(nullptr);
        
        void _class_valuector__class_value2_wrapper(struct _class_value* _this)
        {
           _class_valuector__class_value2_user(_this, _class_valuector__class_value2_next);
        };
        void _class_valueinit4_wrapper(struct _class_value* _this)
        {
           _class_valueinit4_user(_this, _class_valueinit4_next);
        };
        int _class_valuesize6_wrapper(struct _class_value* _this)
        {
           return _class_valuesize6_user(_this, _class_valuesize6_next);
        };
        
        hook_record _class_value_functions[] = {
        {   (LPVOID)0x1403f6f80L,
            (LPVOID *)&_class_valuector__class_value2_user,
            (LPVOID *)&_class_valuector__class_value2_next,
            (LPVOID)cast_pointer_function(_class_valuector__class_value2_wrapper),
            (LPVOID)cast_pointer_function((void(_class_value::*)())&_class_value::ctor__class_value) },
        {   (LPVOID)0x1403f6fd0L,
            (LPVOID *)&_class_valueinit4_user,
            (LPVOID *)&_class_valueinit4_next,
            (LPVOID)cast_pointer_function(_class_valueinit4_wrapper),
            (LPVOID)cast_pointer_function((void(_class_value::*)())&_class_value::init) },
        {   (LPVOID)0x1403f7030L,
            (LPVOID *)&_class_valuesize6_user,
            (LPVOID *)&_class_valuesize6_next,
            (LPVOID)cast_pointer_function(_class_valuesize6_wrapper),
            (LPVOID)cast_pointer_function((int(_class_value::*)())&_class_value::size) },
        
        };
        
    }; // end namespace detail
END_ATF_NAMESPACE
