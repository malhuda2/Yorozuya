// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "CWeeklyGuildRankOwnerInfo_info.hpp"


START_ATF_NAMESPACE
    namespace detail
    {
        info::CWeeklyGuildRankOwnerInfoctor_CWeeklyGuildRankOwnerInfo2_ptr CWeeklyGuildRankOwnerInfoctor_CWeeklyGuildRankOwnerInfo2_next(nullptr);
        info::CWeeklyGuildRankOwnerInfoctor_CWeeklyGuildRankOwnerInfo2_clbk CWeeklyGuildRankOwnerInfoctor_CWeeklyGuildRankOwnerInfo2_user(nullptr);
        info::CWeeklyGuildRankOwnerInfoClear4_ptr CWeeklyGuildRankOwnerInfoClear4_next(nullptr);
        info::CWeeklyGuildRankOwnerInfoClear4_clbk CWeeklyGuildRankOwnerInfoClear4_user(nullptr);
        info::CWeeklyGuildRankOwnerInfoIsEmpty6_ptr CWeeklyGuildRankOwnerInfoIsEmpty6_next(nullptr);
        info::CWeeklyGuildRankOwnerInfoIsEmpty6_clbk CWeeklyGuildRankOwnerInfoIsEmpty6_user(nullptr);
        info::CWeeklyGuildRankOwnerInfodtor_CWeeklyGuildRankOwnerInfo8_ptr CWeeklyGuildRankOwnerInfodtor_CWeeklyGuildRankOwnerInfo8_next(nullptr);
        info::CWeeklyGuildRankOwnerInfodtor_CWeeklyGuildRankOwnerInfo8_clbk CWeeklyGuildRankOwnerInfodtor_CWeeklyGuildRankOwnerInfo8_user(nullptr);
        
        void CWeeklyGuildRankOwnerInfoctor_CWeeklyGuildRankOwnerInfo2_wrapper(struct CWeeklyGuildRankOwnerInfo* _this)
        {
           CWeeklyGuildRankOwnerInfoctor_CWeeklyGuildRankOwnerInfo2_user(_this, CWeeklyGuildRankOwnerInfoctor_CWeeklyGuildRankOwnerInfo2_next);
        };
        void CWeeklyGuildRankOwnerInfoClear4_wrapper(struct CWeeklyGuildRankOwnerInfo* _this)
        {
           CWeeklyGuildRankOwnerInfoClear4_user(_this, CWeeklyGuildRankOwnerInfoClear4_next);
        };
        bool CWeeklyGuildRankOwnerInfoIsEmpty6_wrapper(struct CWeeklyGuildRankOwnerInfo* _this)
        {
           return CWeeklyGuildRankOwnerInfoIsEmpty6_user(_this, CWeeklyGuildRankOwnerInfoIsEmpty6_next);
        };
        void CWeeklyGuildRankOwnerInfodtor_CWeeklyGuildRankOwnerInfo8_wrapper(struct CWeeklyGuildRankOwnerInfo* _this)
        {
           CWeeklyGuildRankOwnerInfodtor_CWeeklyGuildRankOwnerInfo8_user(_this, CWeeklyGuildRankOwnerInfodtor_CWeeklyGuildRankOwnerInfo8_next);
        };
        
        hook_record CWeeklyGuildRankOwnerInfo_functions[] = {
        {   (LPVOID)0x1402cf7c0L,
            (LPVOID *)&CWeeklyGuildRankOwnerInfoctor_CWeeklyGuildRankOwnerInfo2_user,
            (LPVOID *)&CWeeklyGuildRankOwnerInfoctor_CWeeklyGuildRankOwnerInfo2_next,
            (LPVOID)cast_pointer_function(CWeeklyGuildRankOwnerInfoctor_CWeeklyGuildRankOwnerInfo2_wrapper),
            (LPVOID)cast_pointer_function((void(CWeeklyGuildRankOwnerInfo::*)())&CWeeklyGuildRankOwnerInfo::ctor_CWeeklyGuildRankOwnerInfo) },
        {   (LPVOID)0x1402ca5a0L,
            (LPVOID *)&CWeeklyGuildRankOwnerInfoClear4_user,
            (LPVOID *)&CWeeklyGuildRankOwnerInfoClear4_next,
            (LPVOID)cast_pointer_function(CWeeklyGuildRankOwnerInfoClear4_wrapper),
            (LPVOID)cast_pointer_function((void(CWeeklyGuildRankOwnerInfo::*)())&CWeeklyGuildRankOwnerInfo::Clear) },
        {   (LPVOID)0x1402cf9f0L,
            (LPVOID *)&CWeeklyGuildRankOwnerInfoIsEmpty6_user,
            (LPVOID *)&CWeeklyGuildRankOwnerInfoIsEmpty6_next,
            (LPVOID)cast_pointer_function(CWeeklyGuildRankOwnerInfoIsEmpty6_wrapper),
            (LPVOID)cast_pointer_function((bool(CWeeklyGuildRankOwnerInfo::*)())&CWeeklyGuildRankOwnerInfo::IsEmpty) },
        {   (LPVOID)0x1402cf810L,
            (LPVOID *)&CWeeklyGuildRankOwnerInfodtor_CWeeklyGuildRankOwnerInfo8_user,
            (LPVOID *)&CWeeklyGuildRankOwnerInfodtor_CWeeklyGuildRankOwnerInfo8_next,
            (LPVOID)cast_pointer_function(CWeeklyGuildRankOwnerInfodtor_CWeeklyGuildRankOwnerInfo8_wrapper),
            (LPVOID)cast_pointer_function((void(CWeeklyGuildRankOwnerInfo::*)())&CWeeklyGuildRankOwnerInfo::dtor_CWeeklyGuildRankOwnerInfo) },
        
        };
        
    }; // end namespace detail
END_ATF_NAMESPACE
