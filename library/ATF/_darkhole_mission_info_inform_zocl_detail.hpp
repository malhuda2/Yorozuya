// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "_darkhole_mission_info_inform_zocl_info.hpp"


START_ATF_NAMESPACE
    namespace detail
    {
        info::_darkhole_mission_info_inform_zoclctor__darkhole_mission_info_inform_zocl2_ptr _darkhole_mission_info_inform_zoclctor__darkhole_mission_info_inform_zocl2_next(nullptr);
        info::_darkhole_mission_info_inform_zoclctor__darkhole_mission_info_inform_zocl2_clbk _darkhole_mission_info_inform_zoclctor__darkhole_mission_info_inform_zocl2_user(nullptr);
        info::_darkhole_mission_info_inform_zoclsize4_ptr _darkhole_mission_info_inform_zoclsize4_next(nullptr);
        info::_darkhole_mission_info_inform_zoclsize4_clbk _darkhole_mission_info_inform_zoclsize4_user(nullptr);
        
        void _darkhole_mission_info_inform_zoclctor__darkhole_mission_info_inform_zocl2_wrapper(struct _darkhole_mission_info_inform_zocl* _this)
        {
           _darkhole_mission_info_inform_zoclctor__darkhole_mission_info_inform_zocl2_user(_this, _darkhole_mission_info_inform_zoclctor__darkhole_mission_info_inform_zocl2_next);
        };
        int _darkhole_mission_info_inform_zoclsize4_wrapper(struct _darkhole_mission_info_inform_zocl* _this)
        {
           return _darkhole_mission_info_inform_zoclsize4_user(_this, _darkhole_mission_info_inform_zoclsize4_next);
        };
        
        hook_record _darkhole_mission_info_inform_zocl_functions[] = {
        {   (LPVOID)0x14026f500L,
            (LPVOID *)&_darkhole_mission_info_inform_zoclctor__darkhole_mission_info_inform_zocl2_user,
            (LPVOID *)&_darkhole_mission_info_inform_zoclctor__darkhole_mission_info_inform_zocl2_next,
            (LPVOID)cast_pointer_function(_darkhole_mission_info_inform_zoclctor__darkhole_mission_info_inform_zocl2_wrapper),
            (LPVOID)cast_pointer_function((void(_darkhole_mission_info_inform_zocl::*)())&_darkhole_mission_info_inform_zocl::ctor__darkhole_mission_info_inform_zocl) },
        {   (LPVOID)0x14026f520L,
            (LPVOID *)&_darkhole_mission_info_inform_zoclsize4_user,
            (LPVOID *)&_darkhole_mission_info_inform_zoclsize4_next,
            (LPVOID)cast_pointer_function(_darkhole_mission_info_inform_zoclsize4_wrapper),
            (LPVOID)cast_pointer_function((int(_darkhole_mission_info_inform_zocl::*)())&_darkhole_mission_info_inform_zocl::size) },
        
        };
        
    }; // end namespace detail
END_ATF_NAMESPACE
