// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "CUnmannedTraderGroupVersionInfo_info.hpp"


START_ATF_NAMESPACE
    namespace detail
    {
        info::CUnmannedTraderGroupVersionInfoctor_CUnmannedTraderGroupVersionInfo2_ptr CUnmannedTraderGroupVersionInfoctor_CUnmannedTraderGroupVersionInfo2_next(nullptr);
        info::CUnmannedTraderGroupVersionInfoctor_CUnmannedTraderGroupVersionInfo2_clbk CUnmannedTraderGroupVersionInfoctor_CUnmannedTraderGroupVersionInfo2_user(nullptr);
        info::CUnmannedTraderGroupVersionInfoGetVersion4_ptr CUnmannedTraderGroupVersionInfoGetVersion4_next(nullptr);
        info::CUnmannedTraderGroupVersionInfoGetVersion4_clbk CUnmannedTraderGroupVersionInfoGetVersion4_user(nullptr);
        info::CUnmannedTraderGroupVersionInfoIncreaseVersion6_ptr CUnmannedTraderGroupVersionInfoIncreaseVersion6_next(nullptr);
        info::CUnmannedTraderGroupVersionInfoIncreaseVersion6_clbk CUnmannedTraderGroupVersionInfoIncreaseVersion6_user(nullptr);
        info::CUnmannedTraderGroupVersionInfoInit8_ptr CUnmannedTraderGroupVersionInfoInit8_next(nullptr);
        info::CUnmannedTraderGroupVersionInfoInit8_clbk CUnmannedTraderGroupVersionInfoInit8_user(nullptr);
        info::CUnmannedTraderGroupVersionInfodtor_CUnmannedTraderGroupVersionInfo10_ptr CUnmannedTraderGroupVersionInfodtor_CUnmannedTraderGroupVersionInfo10_next(nullptr);
        info::CUnmannedTraderGroupVersionInfodtor_CUnmannedTraderGroupVersionInfo10_clbk CUnmannedTraderGroupVersionInfodtor_CUnmannedTraderGroupVersionInfo10_user(nullptr);
        
        void CUnmannedTraderGroupVersionInfoctor_CUnmannedTraderGroupVersionInfo2_wrapper(struct CUnmannedTraderGroupVersionInfo* _this)
        {
           CUnmannedTraderGroupVersionInfoctor_CUnmannedTraderGroupVersionInfo2_user(_this, CUnmannedTraderGroupVersionInfoctor_CUnmannedTraderGroupVersionInfo2_next);
        };
        bool CUnmannedTraderGroupVersionInfoGetVersion4_wrapper(struct CUnmannedTraderGroupVersionInfo* _this, char byDivision, char byClass, unsigned int* dwVer)
        {
           return CUnmannedTraderGroupVersionInfoGetVersion4_user(_this, byDivision, byClass, dwVer, CUnmannedTraderGroupVersionInfoGetVersion4_next);
        };
        bool CUnmannedTraderGroupVersionInfoIncreaseVersion6_wrapper(struct CUnmannedTraderGroupVersionInfo* _this, char byDivision, char byClass)
        {
           return CUnmannedTraderGroupVersionInfoIncreaseVersion6_user(_this, byDivision, byClass, CUnmannedTraderGroupVersionInfoIncreaseVersion6_next);
        };
        bool CUnmannedTraderGroupVersionInfoInit8_wrapper(struct CUnmannedTraderGroupVersionInfo* _this, struct std::vector<std::pair<unsigned long,unsigned long>,std::allocator<std::pair<unsigned long,unsigned long> > >* vecInfo)
        {
           return CUnmannedTraderGroupVersionInfoInit8_user(_this, vecInfo, CUnmannedTraderGroupVersionInfoInit8_next);
        };
        void CUnmannedTraderGroupVersionInfodtor_CUnmannedTraderGroupVersionInfo10_wrapper(struct CUnmannedTraderGroupVersionInfo* _this)
        {
           CUnmannedTraderGroupVersionInfodtor_CUnmannedTraderGroupVersionInfo10_user(_this, CUnmannedTraderGroupVersionInfodtor_CUnmannedTraderGroupVersionInfo10_next);
        };
        
        hook_record CUnmannedTraderGroupVersionInfo_functions[] = {
        {   (LPVOID)0x14036bc90L,
            (LPVOID *)&CUnmannedTraderGroupVersionInfoctor_CUnmannedTraderGroupVersionInfo2_user,
            (LPVOID *)&CUnmannedTraderGroupVersionInfoctor_CUnmannedTraderGroupVersionInfo2_next,
            (LPVOID)cast_pointer_function(CUnmannedTraderGroupVersionInfoctor_CUnmannedTraderGroupVersionInfo2_wrapper),
            (LPVOID)cast_pointer_function((void(CUnmannedTraderGroupVersionInfo::*)())&CUnmannedTraderGroupVersionInfo::ctor_CUnmannedTraderGroupVersionInfo) },
        {   (LPVOID)0x140360900L,
            (LPVOID *)&CUnmannedTraderGroupVersionInfoGetVersion4_user,
            (LPVOID *)&CUnmannedTraderGroupVersionInfoGetVersion4_next,
            (LPVOID)cast_pointer_function(CUnmannedTraderGroupVersionInfoGetVersion4_wrapper),
            (LPVOID)cast_pointer_function((bool(CUnmannedTraderGroupVersionInfo::*)(char, char, unsigned int*))&CUnmannedTraderGroupVersionInfo::GetVersion) },
        {   (LPVOID)0x14036bd90L,
            (LPVOID *)&CUnmannedTraderGroupVersionInfoIncreaseVersion6_user,
            (LPVOID *)&CUnmannedTraderGroupVersionInfoIncreaseVersion6_next,
            (LPVOID)cast_pointer_function(CUnmannedTraderGroupVersionInfoIncreaseVersion6_wrapper),
            (LPVOID)cast_pointer_function((bool(CUnmannedTraderGroupVersionInfo::*)(char, char))&CUnmannedTraderGroupVersionInfo::IncreaseVersion) },
        {   (LPVOID)0x140397a60L,
            (LPVOID *)&CUnmannedTraderGroupVersionInfoInit8_user,
            (LPVOID *)&CUnmannedTraderGroupVersionInfoInit8_next,
            (LPVOID)cast_pointer_function(CUnmannedTraderGroupVersionInfoInit8_wrapper),
            (LPVOID)cast_pointer_function((bool(CUnmannedTraderGroupVersionInfo::*)(struct std::vector<std::pair<unsigned long,unsigned long>,std::allocator<std::pair<unsigned long,unsigned long> > >*))&CUnmannedTraderGroupVersionInfo::Init) },
        {   (LPVOID)0x14036bce0L,
            (LPVOID *)&CUnmannedTraderGroupVersionInfodtor_CUnmannedTraderGroupVersionInfo10_user,
            (LPVOID *)&CUnmannedTraderGroupVersionInfodtor_CUnmannedTraderGroupVersionInfo10_next,
            (LPVOID)cast_pointer_function(CUnmannedTraderGroupVersionInfodtor_CUnmannedTraderGroupVersionInfo10_wrapper),
            (LPVOID)cast_pointer_function((void(CUnmannedTraderGroupVersionInfo::*)())&CUnmannedTraderGroupVersionInfo::dtor_CUnmannedTraderGroupVersionInfo) },
        
        };
        
    }; // end namespace detail
END_ATF_NAMESPACE
