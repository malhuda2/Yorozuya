// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "_sf_continous_info.hpp"


START_ATF_NAMESPACE
    namespace detail
    {
        info::_sf_continousGetSFContCurTime2_ptr _sf_continousGetSFContCurTime2_next(nullptr);
        info::_sf_continousGetSFContCurTime2_clbk _sf_continousGetSFContCurTime2_user(nullptr);
        info::_sf_continousctor__sf_continous4_ptr _sf_continousctor__sf_continous4_next(nullptr);
        info::_sf_continousctor__sf_continous4_clbk _sf_continousctor__sf_continous4_user(nullptr);
        
        unsigned int _sf_continousGetSFContCurTime2_wrapper()
        {
           return _sf_continousGetSFContCurTime2_user(_sf_continousGetSFContCurTime2_next);
        };
        void _sf_continousctor__sf_continous4_wrapper(struct _sf_continous* _this)
        {
           _sf_continousctor__sf_continous4_user(_this, _sf_continousctor__sf_continous4_next);
        };
        
        hook_record _sf_continous_functions[] = {
        {   (LPVOID)0x140034970L,
            (LPVOID *)&_sf_continousGetSFContCurTime2_user,
            (LPVOID *)&_sf_continousGetSFContCurTime2_next,
            (LPVOID)cast_pointer_function(_sf_continousGetSFContCurTime2_wrapper),
            (LPVOID)cast_pointer_function((unsigned int(*)())&_sf_continous::GetSFContCurTime) },
        {   (LPVOID)0x14017a3f0L,
            (LPVOID *)&_sf_continousctor__sf_continous4_user,
            (LPVOID *)&_sf_continousctor__sf_continous4_next,
            (LPVOID)cast_pointer_function(_sf_continousctor__sf_continous4_wrapper),
            (LPVOID)cast_pointer_function((void(_sf_continous::*)())&_sf_continous::ctor__sf_continous) },
        
        };
        
    }; // end namespace detail
END_ATF_NAMESPACE
