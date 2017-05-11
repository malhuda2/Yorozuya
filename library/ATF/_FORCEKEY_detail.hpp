// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "_FORCEKEY_info.hpp"


START_ATF_NAMESPACE
    namespace detail
    {
        info::_FORCEKEYCovDBKey2_ptr _FORCEKEYCovDBKey2_next(nullptr);
        info::_FORCEKEYCovDBKey2_clbk _FORCEKEYCovDBKey2_user(nullptr);
        info::_FORCEKEYGetIndex4_ptr _FORCEKEYGetIndex4_next(nullptr);
        info::_FORCEKEYGetIndex4_clbk _FORCEKEYGetIndex4_user(nullptr);
        info::_FORCEKEYGetStat6_ptr _FORCEKEYGetStat6_next(nullptr);
        info::_FORCEKEYGetStat6_clbk _FORCEKEYGetStat6_user(nullptr);
        info::_FORCEKEYIsFilled8_ptr _FORCEKEYIsFilled8_next(nullptr);
        info::_FORCEKEYIsFilled8_clbk _FORCEKEYIsFilled8_user(nullptr);
        info::_FORCEKEYLoadDBKey10_ptr _FORCEKEYLoadDBKey10_next(nullptr);
        info::_FORCEKEYLoadDBKey10_clbk _FORCEKEYLoadDBKey10_user(nullptr);
        info::_FORCEKEYSetKey12_ptr _FORCEKEYSetKey12_next(nullptr);
        info::_FORCEKEYSetKey12_clbk _FORCEKEYSetKey12_user(nullptr);
        info::_FORCEKEYSetRelease14_ptr _FORCEKEYSetRelease14_next(nullptr);
        info::_FORCEKEYSetRelease14_clbk _FORCEKEYSetRelease14_user(nullptr);
        info::_FORCEKEYSetStat16_ptr _FORCEKEYSetStat16_next(nullptr);
        info::_FORCEKEYSetStat16_clbk _FORCEKEYSetStat16_user(nullptr);
        
        int _FORCEKEYCovDBKey2_wrapper(struct _FORCEKEY* _this)
        {
           return _FORCEKEYCovDBKey2_user(_this, _FORCEKEYCovDBKey2_next);
        };
        char _FORCEKEYGetIndex4_wrapper(struct _FORCEKEY* _this)
        {
           return _FORCEKEYGetIndex4_user(_this, _FORCEKEYGetIndex4_next);
        };
        unsigned int _FORCEKEYGetStat6_wrapper(struct _FORCEKEY* _this)
        {
           return _FORCEKEYGetStat6_user(_this, _FORCEKEYGetStat6_next);
        };
        bool _FORCEKEYIsFilled8_wrapper(struct _FORCEKEY* _this)
        {
           return _FORCEKEYIsFilled8_user(_this, _FORCEKEYIsFilled8_next);
        };
        void _FORCEKEYLoadDBKey10_wrapper(struct _FORCEKEY* _this, int pl_nKey)
        {
           _FORCEKEYLoadDBKey10_user(_this, pl_nKey, _FORCEKEYLoadDBKey10_next);
        };
        void _FORCEKEYSetKey12_wrapper(struct _FORCEKEY* _this, char pl_byItemIndex, unsigned int pl_dwStat)
        {
           _FORCEKEYSetKey12_user(_this, pl_byItemIndex, pl_dwStat, _FORCEKEYSetKey12_next);
        };
        void _FORCEKEYSetRelease14_wrapper(struct _FORCEKEY* _this)
        {
           _FORCEKEYSetRelease14_user(_this, _FORCEKEYSetRelease14_next);
        };
        void _FORCEKEYSetStat16_wrapper(struct _FORCEKEY* _this, unsigned int pl_dwStat)
        {
           _FORCEKEYSetStat16_user(_this, pl_dwStat, _FORCEKEYSetStat16_next);
        };
        
        hook_record _FORCEKEY_functions[] = {
        {   (LPVOID)0x1401bf2c0L,
            (LPVOID *)&_FORCEKEYCovDBKey2_user,
            (LPVOID *)&_FORCEKEYCovDBKey2_next,
            (LPVOID)cast_pointer_function(_FORCEKEYCovDBKey2_wrapper),
            (LPVOID)cast_pointer_function((int(_FORCEKEY::*)())&_FORCEKEY::CovDBKey) },
        {   (LPVOID)0x14010e340L,
            (LPVOID *)&_FORCEKEYGetIndex4_user,
            (LPVOID *)&_FORCEKEYGetIndex4_next,
            (LPVOID)cast_pointer_function(_FORCEKEYGetIndex4_wrapper),
            (LPVOID)cast_pointer_function((char(_FORCEKEY::*)())&_FORCEKEY::GetIndex) },
        {   (LPVOID)0x14010e360L,
            (LPVOID *)&_FORCEKEYGetStat6_user,
            (LPVOID *)&_FORCEKEYGetStat6_next,
            (LPVOID)cast_pointer_function(_FORCEKEYGetStat6_wrapper),
            (LPVOID)cast_pointer_function((unsigned int(_FORCEKEY::*)())&_FORCEKEY::GetStat) },
        {   (LPVOID)0x14010e380L,
            (LPVOID *)&_FORCEKEYIsFilled8_user,
            (LPVOID *)&_FORCEKEYIsFilled8_next,
            (LPVOID)cast_pointer_function(_FORCEKEYIsFilled8_wrapper),
            (LPVOID)cast_pointer_function((bool(_FORCEKEY::*)())&_FORCEKEY::IsFilled) },
        {   (LPVOID)0x1401bf0f0L,
            (LPVOID *)&_FORCEKEYLoadDBKey10_user,
            (LPVOID *)&_FORCEKEYLoadDBKey10_next,
            (LPVOID)cast_pointer_function(_FORCEKEYLoadDBKey10_wrapper),
            (LPVOID)cast_pointer_function((void(_FORCEKEY::*)(int))&_FORCEKEY::LoadDBKey) },
        {   (LPVOID)0x1401203c0L,
            (LPVOID *)&_FORCEKEYSetKey12_user,
            (LPVOID *)&_FORCEKEYSetKey12_next,
            (LPVOID)cast_pointer_function(_FORCEKEYSetKey12_wrapper),
            (LPVOID)cast_pointer_function((void(_FORCEKEY::*)(char, unsigned int))&_FORCEKEY::SetKey) },
        {   (LPVOID)0x140076140L,
            (LPVOID *)&_FORCEKEYSetRelease14_user,
            (LPVOID *)&_FORCEKEYSetRelease14_next,
            (LPVOID)cast_pointer_function(_FORCEKEYSetRelease14_wrapper),
            (LPVOID)cast_pointer_function((void(_FORCEKEY::*)())&_FORCEKEY::SetRelease) },
        {   (LPVOID)0x140120a60L,
            (LPVOID *)&_FORCEKEYSetStat16_user,
            (LPVOID *)&_FORCEKEYSetStat16_next,
            (LPVOID)cast_pointer_function(_FORCEKEYSetStat16_wrapper),
            (LPVOID)cast_pointer_function((void(_FORCEKEY::*)(unsigned int))&_FORCEKEY::SetStat) },
        
        };
        
    }; // end namespace detail
END_ATF_NAMESPACE
