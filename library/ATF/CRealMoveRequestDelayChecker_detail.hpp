// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "CRealMoveRequestDelayChecker_info.hpp"


START_ATF_NAMESPACE
    namespace detail
    {
        info::CRealMoveRequestDelayCheckerctor_CRealMoveRequestDelayChecker2_ptr CRealMoveRequestDelayCheckerctor_CRealMoveRequestDelayChecker2_next(nullptr);
        info::CRealMoveRequestDelayCheckerctor_CRealMoveRequestDelayChecker2_clbk CRealMoveRequestDelayCheckerctor_CRealMoveRequestDelayChecker2_user(nullptr);
        info::CRealMoveRequestDelayCheckerCheck4_ptr CRealMoveRequestDelayCheckerCheck4_next(nullptr);
        info::CRealMoveRequestDelayCheckerCheck4_clbk CRealMoveRequestDelayCheckerCheck4_user(nullptr);
        info::CRealMoveRequestDelayCheckerCheckDelay6_ptr CRealMoveRequestDelayCheckerCheckDelay6_next(nullptr);
        info::CRealMoveRequestDelayCheckerCheckDelay6_clbk CRealMoveRequestDelayCheckerCheckDelay6_user(nullptr);
        info::CRealMoveRequestDelayCheckerGetCurInx8_ptr CRealMoveRequestDelayCheckerGetCurInx8_next(nullptr);
        info::CRealMoveRequestDelayCheckerGetCurInx8_clbk CRealMoveRequestDelayCheckerGetCurInx8_user(nullptr);
        info::CRealMoveRequestDelayCheckerIncNodeIndex10_ptr CRealMoveRequestDelayCheckerIncNodeIndex10_next(nullptr);
        info::CRealMoveRequestDelayCheckerIncNodeIndex10_clbk CRealMoveRequestDelayCheckerIncNodeIndex10_user(nullptr);
        info::CRealMoveRequestDelayCheckerInit12_ptr CRealMoveRequestDelayCheckerInit12_next(nullptr);
        info::CRealMoveRequestDelayCheckerInit12_clbk CRealMoveRequestDelayCheckerInit12_user(nullptr);
        info::CRealMoveRequestDelayCheckerReset14_ptr CRealMoveRequestDelayCheckerReset14_next(nullptr);
        info::CRealMoveRequestDelayCheckerReset14_clbk CRealMoveRequestDelayCheckerReset14_user(nullptr);
        info::CRealMoveRequestDelayCheckerdtor_CRealMoveRequestDelayChecker16_ptr CRealMoveRequestDelayCheckerdtor_CRealMoveRequestDelayChecker16_next(nullptr);
        info::CRealMoveRequestDelayCheckerdtor_CRealMoveRequestDelayChecker16_clbk CRealMoveRequestDelayCheckerdtor_CRealMoveRequestDelayChecker16_user(nullptr);
        
        void CRealMoveRequestDelayCheckerctor_CRealMoveRequestDelayChecker2_wrapper(struct CRealMoveRequestDelayChecker* _this)
        {
           CRealMoveRequestDelayCheckerctor_CRealMoveRequestDelayChecker2_user(_this, CRealMoveRequestDelayCheckerctor_CRealMoveRequestDelayChecker2_next);
        };
        bool CRealMoveRequestDelayCheckerCheck4_wrapper(struct CRealMoveRequestDelayChecker* _this, struct CPlayer* pkUser)
        {
           return CRealMoveRequestDelayCheckerCheck4_user(_this, pkUser, CRealMoveRequestDelayCheckerCheck4_next);
        };
        bool CRealMoveRequestDelayCheckerCheckDelay6_wrapper(struct CRealMoveRequestDelayChecker* _this, unsigned int dwCurTime, unsigned int dwIndex)
        {
           return CRealMoveRequestDelayCheckerCheckDelay6_user(_this, dwCurTime, dwIndex, CRealMoveRequestDelayCheckerCheckDelay6_next);
        };
        bool CRealMoveRequestDelayCheckerGetCurInx8_wrapper(struct CRealMoveRequestDelayChecker* _this, unsigned int* pInx)
        {
           return CRealMoveRequestDelayCheckerGetCurInx8_user(_this, pInx, CRealMoveRequestDelayCheckerGetCurInx8_next);
        };
        void CRealMoveRequestDelayCheckerIncNodeIndex10_wrapper(struct CRealMoveRequestDelayChecker* _this)
        {
           CRealMoveRequestDelayCheckerIncNodeIndex10_user(_this, CRealMoveRequestDelayCheckerIncNodeIndex10_next);
        };
        bool CRealMoveRequestDelayCheckerInit12_wrapper(struct CRealMoveRequestDelayChecker* _this, unsigned int dwListCnt)
        {
           return CRealMoveRequestDelayCheckerInit12_user(_this, dwListCnt, CRealMoveRequestDelayCheckerInit12_next);
        };
        void CRealMoveRequestDelayCheckerReset14_wrapper(struct CRealMoveRequestDelayChecker* _this)
        {
           CRealMoveRequestDelayCheckerReset14_user(_this, CRealMoveRequestDelayCheckerReset14_next);
        };
        void CRealMoveRequestDelayCheckerdtor_CRealMoveRequestDelayChecker16_wrapper(struct CRealMoveRequestDelayChecker* _this)
        {
           CRealMoveRequestDelayCheckerdtor_CRealMoveRequestDelayChecker16_user(_this, CRealMoveRequestDelayCheckerdtor_CRealMoveRequestDelayChecker16_next);
        };
        
        hook_record CRealMoveRequestDelayChecker_functions[] = {
        {   (LPVOID)0x140073be0L,
            (LPVOID *)&CRealMoveRequestDelayCheckerctor_CRealMoveRequestDelayChecker2_user,
            (LPVOID *)&CRealMoveRequestDelayCheckerctor_CRealMoveRequestDelayChecker2_next,
            (LPVOID)cast_pointer_function(CRealMoveRequestDelayCheckerctor_CRealMoveRequestDelayChecker2_wrapper),
            (LPVOID)cast_pointer_function((void(CRealMoveRequestDelayChecker::*)())&CRealMoveRequestDelayChecker::ctor_CRealMoveRequestDelayChecker) },
        {   (LPVOID)0x140122240L,
            (LPVOID *)&CRealMoveRequestDelayCheckerCheck4_user,
            (LPVOID *)&CRealMoveRequestDelayCheckerCheck4_next,
            (LPVOID)cast_pointer_function(CRealMoveRequestDelayCheckerCheck4_wrapper),
            (LPVOID)cast_pointer_function((bool(CRealMoveRequestDelayChecker::*)(struct CPlayer*))&CRealMoveRequestDelayChecker::Check) },
        {   (LPVOID)0x140122780L,
            (LPVOID *)&CRealMoveRequestDelayCheckerCheckDelay6_user,
            (LPVOID *)&CRealMoveRequestDelayCheckerCheckDelay6_next,
            (LPVOID)cast_pointer_function(CRealMoveRequestDelayCheckerCheckDelay6_wrapper),
            (LPVOID)cast_pointer_function((bool(CRealMoveRequestDelayChecker::*)(unsigned int, unsigned int))&CRealMoveRequestDelayChecker::CheckDelay) },
        {   (LPVOID)0x1401226c0L,
            (LPVOID *)&CRealMoveRequestDelayCheckerGetCurInx8_user,
            (LPVOID *)&CRealMoveRequestDelayCheckerGetCurInx8_next,
            (LPVOID)cast_pointer_function(CRealMoveRequestDelayCheckerGetCurInx8_wrapper),
            (LPVOID)cast_pointer_function((bool(CRealMoveRequestDelayChecker::*)(unsigned int*))&CRealMoveRequestDelayChecker::GetCurInx) },
        {   (LPVOID)0x140122810L,
            (LPVOID *)&CRealMoveRequestDelayCheckerIncNodeIndex10_user,
            (LPVOID *)&CRealMoveRequestDelayCheckerIncNodeIndex10_next,
            (LPVOID)cast_pointer_function(CRealMoveRequestDelayCheckerIncNodeIndex10_wrapper),
            (LPVOID)cast_pointer_function((void(CRealMoveRequestDelayChecker::*)())&CRealMoveRequestDelayChecker::IncNodeIndex) },
        {   (LPVOID)0x1401220e0L,
            (LPVOID *)&CRealMoveRequestDelayCheckerInit12_user,
            (LPVOID *)&CRealMoveRequestDelayCheckerInit12_next,
            (LPVOID)cast_pointer_function(CRealMoveRequestDelayCheckerInit12_wrapper),
            (LPVOID)cast_pointer_function((bool(CRealMoveRequestDelayChecker::*)(unsigned int))&CRealMoveRequestDelayChecker::Init) },
        {   (LPVOID)0x1401221a0L,
            (LPVOID *)&CRealMoveRequestDelayCheckerReset14_user,
            (LPVOID *)&CRealMoveRequestDelayCheckerReset14_next,
            (LPVOID)cast_pointer_function(CRealMoveRequestDelayCheckerReset14_wrapper),
            (LPVOID)cast_pointer_function((void(CRealMoveRequestDelayChecker::*)())&CRealMoveRequestDelayChecker::Reset) },
        {   (LPVOID)0x140073cf0L,
            (LPVOID *)&CRealMoveRequestDelayCheckerdtor_CRealMoveRequestDelayChecker16_user,
            (LPVOID *)&CRealMoveRequestDelayCheckerdtor_CRealMoveRequestDelayChecker16_next,
            (LPVOID)cast_pointer_function(CRealMoveRequestDelayCheckerdtor_CRealMoveRequestDelayChecker16_wrapper),
            (LPVOID)cast_pointer_function((void(CRealMoveRequestDelayChecker::*)())&CRealMoveRequestDelayChecker::dtor_CRealMoveRequestDelayChecker) },
        
        };
        
    }; // end namespace detail
END_ATF_NAMESPACE
