// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "std__length_error_info.hpp"


START_ATF_NAMESPACE
    namespace std
    {
        namespace detail
        {
            info::std__length_errorctor_length_error5_ptr std__length_errorctor_length_error5_next(nullptr);
            info::std__length_errorctor_length_error5_clbk std__length_errorctor_length_error5_user(nullptr);
            info::std__length_errorctor_length_error7_ptr std__length_errorctor_length_error7_next(nullptr);
            info::std__length_errorctor_length_error7_clbk std__length_errorctor_length_error7_user(nullptr);
            info::std__length_errordtor_length_error9_ptr std__length_errordtor_length_error9_next(nullptr);
            info::std__length_errordtor_length_error9_clbk std__length_errordtor_length_error9_user(nullptr);
            
            void std__length_errorctor_length_error5_wrapper(struct std::length_error* _this, struct std::basic_string<char,std::char_traits<char>,std::allocator<char> >* _Message)
            {
               std__length_errorctor_length_error5_user(_this, _Message, std__length_errorctor_length_error5_next);
            };
            void std__length_errorctor_length_error7_wrapper(struct std::length_error* _this, struct std::length_error* __that)
            {
               std__length_errorctor_length_error7_user(_this, __that, std__length_errorctor_length_error7_next);
            };
            void std__length_errordtor_length_error9_wrapper(struct std::length_error* _this)
            {
               std__length_errordtor_length_error9_user(_this, std__length_errordtor_length_error9_next);
            };
            
            hook_record length_error_functions[] = {
            {   (LPVOID)0x14007e780L,
                (LPVOID *)&std__length_errorctor_length_error5_user,
                (LPVOID *)&std__length_errorctor_length_error5_next,
                (LPVOID)cast_pointer_function(std__length_errorctor_length_error5_wrapper),
                (LPVOID)cast_pointer_function((void(std::length_error::*)(struct std::basic_string<char,std::char_traits<char>,std::allocator<char> >*))&std::length_error::ctor_length_error) },
            {   (LPVOID)0x14007eb70L,
                (LPVOID *)&std__length_errorctor_length_error7_user,
                (LPVOID *)&std__length_errorctor_length_error7_next,
                (LPVOID)cast_pointer_function(std__length_errorctor_length_error7_wrapper),
                (LPVOID)cast_pointer_function((void(std::length_error::*)(struct std::length_error*))&std::length_error::ctor_length_error) },
            {   (LPVOID)0x14007e9e0L,
                (LPVOID *)&std__length_errordtor_length_error9_user,
                (LPVOID *)&std__length_errordtor_length_error9_next,
                (LPVOID)cast_pointer_function(std__length_errordtor_length_error9_wrapper),
                (LPVOID)cast_pointer_function((void(std::length_error::*)())&std::length_error::dtor_length_error) },
            
            };
            
        }; // end namespace detail
    }; // end namespace std
END_ATF_NAMESPACE
