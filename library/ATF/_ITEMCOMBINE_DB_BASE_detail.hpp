// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "_ITEMCOMBINE_DB_BASE_info.hpp"


START_ATF_NAMESPACE
    namespace detail
    {
        info::_ITEMCOMBINE_DB_BASEInit2_ptr _ITEMCOMBINE_DB_BASEInit2_next(nullptr);
        info::_ITEMCOMBINE_DB_BASEInit2_clbk _ITEMCOMBINE_DB_BASEInit2_user(nullptr);
        info::_ITEMCOMBINE_DB_BASEIsCombineData4_ptr _ITEMCOMBINE_DB_BASEIsCombineData4_next(nullptr);
        info::_ITEMCOMBINE_DB_BASEIsCombineData4_clbk _ITEMCOMBINE_DB_BASEIsCombineData4_user(nullptr);
        info::_ITEMCOMBINE_DB_BASEctor__ITEMCOMBINE_DB_BASE6_ptr _ITEMCOMBINE_DB_BASEctor__ITEMCOMBINE_DB_BASE6_next(nullptr);
        info::_ITEMCOMBINE_DB_BASEctor__ITEMCOMBINE_DB_BASE6_clbk _ITEMCOMBINE_DB_BASEctor__ITEMCOMBINE_DB_BASE6_user(nullptr);
        
        info::_ITEMCOMBINE_DB_BASE___LISTInit2_ptr _ITEMCOMBINE_DB_BASE___LISTInit2_next(nullptr);
        info::_ITEMCOMBINE_DB_BASE___LISTInit2_clbk _ITEMCOMBINE_DB_BASE___LISTInit2_user(nullptr);
        info::_ITEMCOMBINE_DB_BASE___LISTctor__LIST4_ptr _ITEMCOMBINE_DB_BASE___LISTctor__LIST4_next(nullptr);
        info::_ITEMCOMBINE_DB_BASE___LISTctor__LIST4_clbk _ITEMCOMBINE_DB_BASE___LISTctor__LIST4_user(nullptr);
        
        void _ITEMCOMBINE_DB_BASEInit2_wrapper(struct _ITEMCOMBINE_DB_BASE* _this)
        {
           _ITEMCOMBINE_DB_BASEInit2_user(_this, _ITEMCOMBINE_DB_BASEInit2_next);
        };
        bool _ITEMCOMBINE_DB_BASEIsCombineData4_wrapper(struct _ITEMCOMBINE_DB_BASE* _this)
        {
           return _ITEMCOMBINE_DB_BASEIsCombineData4_user(_this, _ITEMCOMBINE_DB_BASEIsCombineData4_next);
        };
        void _ITEMCOMBINE_DB_BASEctor__ITEMCOMBINE_DB_BASE6_wrapper(struct _ITEMCOMBINE_DB_BASE* _this)
        {
           _ITEMCOMBINE_DB_BASEctor__ITEMCOMBINE_DB_BASE6_user(_this, _ITEMCOMBINE_DB_BASEctor__ITEMCOMBINE_DB_BASE6_next);
        };
        
        void _ITEMCOMBINE_DB_BASE___LISTInit2_wrapper(struct _ITEMCOMBINE_DB_BASE::_LIST* _this)
        {
           _ITEMCOMBINE_DB_BASE___LISTInit2_user(_this, _ITEMCOMBINE_DB_BASE___LISTInit2_next);
        };
        void _ITEMCOMBINE_DB_BASE___LISTctor__LIST4_wrapper(struct _ITEMCOMBINE_DB_BASE::_LIST* _this)
        {
           _ITEMCOMBINE_DB_BASE___LISTctor__LIST4_user(_this, _ITEMCOMBINE_DB_BASE___LISTctor__LIST4_next);
        };
        
        hook_record _ITEMCOMBINE_DB_BASE_functions[] = {
        {   (LPVOID)0x1400772d0L,
            (LPVOID *)&_ITEMCOMBINE_DB_BASEInit2_user,
            (LPVOID *)&_ITEMCOMBINE_DB_BASEInit2_next,
            (LPVOID)cast_pointer_function(_ITEMCOMBINE_DB_BASEInit2_wrapper),
            (LPVOID)cast_pointer_function((void(_ITEMCOMBINE_DB_BASE::*)())&_ITEMCOMBINE_DB_BASE::Init) },
        {   (LPVOID)0x1402af610L,
            (LPVOID *)&_ITEMCOMBINE_DB_BASEIsCombineData4_user,
            (LPVOID *)&_ITEMCOMBINE_DB_BASEIsCombineData4_next,
            (LPVOID)cast_pointer_function(_ITEMCOMBINE_DB_BASEIsCombineData4_wrapper),
            (LPVOID)cast_pointer_function((bool(_ITEMCOMBINE_DB_BASE::*)())&_ITEMCOMBINE_DB_BASE::IsCombineData) },
        {   (LPVOID)0x140077180L,
            (LPVOID *)&_ITEMCOMBINE_DB_BASEctor__ITEMCOMBINE_DB_BASE6_user,
            (LPVOID *)&_ITEMCOMBINE_DB_BASEctor__ITEMCOMBINE_DB_BASE6_next,
            (LPVOID)cast_pointer_function(_ITEMCOMBINE_DB_BASEctor__ITEMCOMBINE_DB_BASE6_wrapper),
            (LPVOID)cast_pointer_function((void(_ITEMCOMBINE_DB_BASE::*)())&_ITEMCOMBINE_DB_BASE::ctor__ITEMCOMBINE_DB_BASE) },
        
        {   (LPVOID)0x140077250L,
            (LPVOID *)&_ITEMCOMBINE_DB_BASE___LISTInit2_user,
            (LPVOID *)&_ITEMCOMBINE_DB_BASE___LISTInit2_next,
            (LPVOID)cast_pointer_function(_ITEMCOMBINE_DB_BASE___LISTInit2_wrapper),
            (LPVOID)cast_pointer_function((void(_ITEMCOMBINE_DB_BASE::_LIST::*)())&_ITEMCOMBINE_DB_BASE::_LIST::Init) },
        {   (LPVOID)0x140077200L,
            (LPVOID *)&_ITEMCOMBINE_DB_BASE___LISTctor__LIST4_user,
            (LPVOID *)&_ITEMCOMBINE_DB_BASE___LISTctor__LIST4_next,
            (LPVOID)cast_pointer_function(_ITEMCOMBINE_DB_BASE___LISTctor__LIST4_wrapper),
            (LPVOID)cast_pointer_function((void(_ITEMCOMBINE_DB_BASE::_LIST::*)())&_ITEMCOMBINE_DB_BASE::_LIST::ctor__LIST) },
        
        };
        
    }; // end namespace detail
END_ATF_NAMESPACE
