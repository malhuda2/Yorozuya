// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "_starting_vote_inform_zocl_info.hpp"


START_ATF_NAMESPACE
    namespace detail
    {
        info::_starting_vote_inform_zoclctor__starting_vote_inform_zocl2_ptr _starting_vote_inform_zoclctor__starting_vote_inform_zocl2_next(nullptr);
        info::_starting_vote_inform_zoclctor__starting_vote_inform_zocl2_clbk _starting_vote_inform_zoclctor__starting_vote_inform_zocl2_user(nullptr);
        info::_starting_vote_inform_zoclsize4_ptr _starting_vote_inform_zoclsize4_next(nullptr);
        info::_starting_vote_inform_zoclsize4_clbk _starting_vote_inform_zoclsize4_user(nullptr);
        
        void _starting_vote_inform_zoclctor__starting_vote_inform_zocl2_wrapper(struct _starting_vote_inform_zocl* _this)
        {
           _starting_vote_inform_zoclctor__starting_vote_inform_zocl2_user(_this, _starting_vote_inform_zoclctor__starting_vote_inform_zocl2_next);
        };
        int _starting_vote_inform_zoclsize4_wrapper(struct _starting_vote_inform_zocl* _this)
        {
           return _starting_vote_inform_zoclsize4_user(_this, _starting_vote_inform_zoclsize4_next);
        };
        
        hook_record _starting_vote_inform_zocl_functions[] = {
        {   (LPVOID)0x1402b0ed0L,
            (LPVOID *)&_starting_vote_inform_zoclctor__starting_vote_inform_zocl2_user,
            (LPVOID *)&_starting_vote_inform_zoclctor__starting_vote_inform_zocl2_next,
            (LPVOID)cast_pointer_function(_starting_vote_inform_zoclctor__starting_vote_inform_zocl2_wrapper),
            (LPVOID)cast_pointer_function((void(_starting_vote_inform_zocl::*)())&_starting_vote_inform_zocl::ctor__starting_vote_inform_zocl) },
        {   (LPVOID)0x1402b0ef0L,
            (LPVOID *)&_starting_vote_inform_zoclsize4_user,
            (LPVOID *)&_starting_vote_inform_zoclsize4_next,
            (LPVOID)cast_pointer_function(_starting_vote_inform_zoclsize4_wrapper),
            (LPVOID)cast_pointer_function((int(_starting_vote_inform_zocl::*)())&_starting_vote_inform_zocl::size) },
        
        };
        
    }; // end namespace detail
END_ATF_NAMESPACE
