// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "_FORCE_DB_BASE_info.hpp"


START_ATF_NAMESPACE
    namespace detail
    {
        info::_FORCE_DB_BASEInit2_ptr _FORCE_DB_BASEInit2_next(nullptr);
        info::_FORCE_DB_BASEInit2_clbk _FORCE_DB_BASEInit2_user(nullptr);
        info::_FORCE_DB_BASEctor__FORCE_DB_BASE4_ptr _FORCE_DB_BASEctor__FORCE_DB_BASE4_next(nullptr);
        info::_FORCE_DB_BASEctor__FORCE_DB_BASE4_clbk _FORCE_DB_BASEctor__FORCE_DB_BASE4_user(nullptr);
        
        info::_FORCE_DB_BASE___LISTInit2_ptr _FORCE_DB_BASE___LISTInit2_next(nullptr);
        info::_FORCE_DB_BASE___LISTInit2_clbk _FORCE_DB_BASE___LISTInit2_user(nullptr);
        info::_FORCE_DB_BASE___LISTRelease4_ptr _FORCE_DB_BASE___LISTRelease4_next(nullptr);
        info::_FORCE_DB_BASE___LISTRelease4_clbk _FORCE_DB_BASE___LISTRelease4_user(nullptr);
        info::_FORCE_DB_BASE___LISTSet6_ptr _FORCE_DB_BASE___LISTSet6_next(nullptr);
        info::_FORCE_DB_BASE___LISTSet6_clbk _FORCE_DB_BASE___LISTSet6_user(nullptr);
        info::_FORCE_DB_BASE___LISTctor__LIST8_ptr _FORCE_DB_BASE___LISTctor__LIST8_next(nullptr);
        info::_FORCE_DB_BASE___LISTctor__LIST8_clbk _FORCE_DB_BASE___LISTctor__LIST8_user(nullptr);
        
        void _FORCE_DB_BASEInit2_wrapper(struct _FORCE_DB_BASE* _this)
        {
           _FORCE_DB_BASEInit2_user(_this, _FORCE_DB_BASEInit2_next);
        };
        void _FORCE_DB_BASEctor__FORCE_DB_BASE4_wrapper(struct _FORCE_DB_BASE* _this)
        {
           _FORCE_DB_BASEctor__FORCE_DB_BASE4_user(_this, _FORCE_DB_BASEctor__FORCE_DB_BASE4_next);
        };
        
        void _FORCE_DB_BASE___LISTInit2_wrapper(struct _FORCE_DB_BASE::_LIST* _this)
        {
           _FORCE_DB_BASE___LISTInit2_user(_this, _FORCE_DB_BASE___LISTInit2_next);
        };
        bool _FORCE_DB_BASE___LISTRelease4_wrapper(struct _FORCE_DB_BASE::_LIST* _this)
        {
           return _FORCE_DB_BASE___LISTRelease4_user(_this, _FORCE_DB_BASE___LISTRelease4_next);
        };
        bool _FORCE_DB_BASE___LISTSet6_wrapper(struct _FORCE_DB_BASE::_LIST* _this, struct _STORAGE_LIST::_db_con* pItem)
        {
           return _FORCE_DB_BASE___LISTSet6_user(_this, pItem, _FORCE_DB_BASE___LISTSet6_next);
        };
        void _FORCE_DB_BASE___LISTctor__LIST8_wrapper(struct _FORCE_DB_BASE::_LIST* _this)
        {
           _FORCE_DB_BASE___LISTctor__LIST8_user(_this, _FORCE_DB_BASE___LISTctor__LIST8_next);
        };
        
        hook_record _FORCE_DB_BASE_functions[] = {
        {   (LPVOID)0x140076160L,
            (LPVOID *)&_FORCE_DB_BASEInit2_user,
            (LPVOID *)&_FORCE_DB_BASEInit2_next,
            (LPVOID)cast_pointer_function(_FORCE_DB_BASEInit2_wrapper),
            (LPVOID)cast_pointer_function((void(_FORCE_DB_BASE::*)())&_FORCE_DB_BASE::Init) },
        {   (LPVOID)0x140075ff0L,
            (LPVOID *)&_FORCE_DB_BASEctor__FORCE_DB_BASE4_user,
            (LPVOID *)&_FORCE_DB_BASEctor__FORCE_DB_BASE4_next,
            (LPVOID)cast_pointer_function(_FORCE_DB_BASEctor__FORCE_DB_BASE4_wrapper),
            (LPVOID)cast_pointer_function((void(_FORCE_DB_BASE::*)())&_FORCE_DB_BASE::ctor__FORCE_DB_BASE) },
        
        {   (LPVOID)0x1400760b0L,
            (LPVOID *)&_FORCE_DB_BASE___LISTInit2_user,
            (LPVOID *)&_FORCE_DB_BASE___LISTInit2_next,
            (LPVOID)cast_pointer_function(_FORCE_DB_BASE___LISTInit2_wrapper),
            (LPVOID)cast_pointer_function((void(_FORCE_DB_BASE::_LIST::*)())&_FORCE_DB_BASE::_LIST::Init) },
        {   (LPVOID)0x1401208b0L,
            (LPVOID *)&_FORCE_DB_BASE___LISTRelease4_user,
            (LPVOID *)&_FORCE_DB_BASE___LISTRelease4_next,
            (LPVOID)cast_pointer_function(_FORCE_DB_BASE___LISTRelease4_wrapper),
            (LPVOID)cast_pointer_function((bool(_FORCE_DB_BASE::_LIST::*)())&_FORCE_DB_BASE::_LIST::Release) },
        {   (LPVOID)0x1401202d0L,
            (LPVOID *)&_FORCE_DB_BASE___LISTSet6_user,
            (LPVOID *)&_FORCE_DB_BASE___LISTSet6_next,
            (LPVOID)cast_pointer_function(_FORCE_DB_BASE___LISTSet6_wrapper),
            (LPVOID)cast_pointer_function((bool(_FORCE_DB_BASE::_LIST::*)(struct _STORAGE_LIST::_db_con*))&_FORCE_DB_BASE::_LIST::Set) },
        {   (LPVOID)0x140076060L,
            (LPVOID *)&_FORCE_DB_BASE___LISTctor__LIST8_user,
            (LPVOID *)&_FORCE_DB_BASE___LISTctor__LIST8_next,
            (LPVOID)cast_pointer_function(_FORCE_DB_BASE___LISTctor__LIST8_wrapper),
            (LPVOID)cast_pointer_function((void(_FORCE_DB_BASE::_LIST::*)())&_FORCE_DB_BASE::_LIST::ctor__LIST) },
        
        };
        
    }; // end namespace detail
END_ATF_NAMESPACE
