// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "_FORCE_CLOSE_info.hpp"


START_ATF_NAMESPACE
    namespace detail
    {
        info::_FORCE_CLOSEInit2_ptr _FORCE_CLOSEInit2_next(nullptr);
        info::_FORCE_CLOSEInit2_clbk _FORCE_CLOSEInit2_user(nullptr);
        info::_FORCE_CLOSEPushNode4_ptr _FORCE_CLOSEPushNode4_next(nullptr);
        info::_FORCE_CLOSEPushNode4_clbk _FORCE_CLOSEPushNode4_user(nullptr);
        info::_FORCE_CLOSEctor__FORCE_CLOSE6_ptr _FORCE_CLOSEctor__FORCE_CLOSE6_next(nullptr);
        info::_FORCE_CLOSEctor__FORCE_CLOSE6_clbk _FORCE_CLOSEctor__FORCE_CLOSE6_user(nullptr);
        info::_FORCE_CLOSEdtor__FORCE_CLOSE8_ptr _FORCE_CLOSEdtor__FORCE_CLOSE8_next(nullptr);
        info::_FORCE_CLOSEdtor__FORCE_CLOSE8_clbk _FORCE_CLOSEdtor__FORCE_CLOSE8_user(nullptr);
        
        bool _FORCE_CLOSEInit2_wrapper(struct _FORCE_CLOSE* _this, unsigned int dwNodeNum)
        {
           return _FORCE_CLOSEInit2_user(_this, dwNodeNum, _FORCE_CLOSEInit2_next);
        };
        bool _FORCE_CLOSEPushNode4_wrapper(struct _FORCE_CLOSE* _this, unsigned int dwIndex, unsigned int dwSerial)
        {
           return _FORCE_CLOSEPushNode4_user(_this, dwIndex, dwSerial, _FORCE_CLOSEPushNode4_next);
        };
        void _FORCE_CLOSEctor__FORCE_CLOSE6_wrapper(struct _FORCE_CLOSE* _this)
        {
           _FORCE_CLOSEctor__FORCE_CLOSE6_user(_this, _FORCE_CLOSEctor__FORCE_CLOSE6_next);
        };
        void _FORCE_CLOSEdtor__FORCE_CLOSE8_wrapper(struct _FORCE_CLOSE* _this)
        {
           _FORCE_CLOSEdtor__FORCE_CLOSE8_user(_this, _FORCE_CLOSEdtor__FORCE_CLOSE8_next);
        };
        
        hook_record _FORCE_CLOSE_functions[] = {
        {   (LPVOID)0x14047ccd0L,
            (LPVOID *)&_FORCE_CLOSEInit2_user,
            (LPVOID *)&_FORCE_CLOSEInit2_next,
            (LPVOID)cast_pointer_function(_FORCE_CLOSEInit2_wrapper),
            (LPVOID)cast_pointer_function((bool(_FORCE_CLOSE::*)(unsigned int))&_FORCE_CLOSE::Init) },
        {   (LPVOID)0x140482340L,
            (LPVOID *)&_FORCE_CLOSEPushNode4_user,
            (LPVOID *)&_FORCE_CLOSEPushNode4_next,
            (LPVOID)cast_pointer_function(_FORCE_CLOSEPushNode4_wrapper),
            (LPVOID)cast_pointer_function((bool(_FORCE_CLOSE::*)(unsigned int, unsigned int))&_FORCE_CLOSE::PushNode) },
        {   (LPVOID)0x14047c9f0L,
            (LPVOID *)&_FORCE_CLOSEctor__FORCE_CLOSE6_user,
            (LPVOID *)&_FORCE_CLOSEctor__FORCE_CLOSE6_next,
            (LPVOID)cast_pointer_function(_FORCE_CLOSEctor__FORCE_CLOSE6_wrapper),
            (LPVOID)cast_pointer_function((void(_FORCE_CLOSE::*)())&_FORCE_CLOSE::ctor__FORCE_CLOSE) },
        {   (LPVOID)0x14047cae0L,
            (LPVOID *)&_FORCE_CLOSEdtor__FORCE_CLOSE8_user,
            (LPVOID *)&_FORCE_CLOSEdtor__FORCE_CLOSE8_next,
            (LPVOID)cast_pointer_function(_FORCE_CLOSEdtor__FORCE_CLOSE8_wrapper),
            (LPVOID)cast_pointer_function((void(_FORCE_CLOSE::*)())&_FORCE_CLOSE::dtor__FORCE_CLOSE) },
        
        };
        
    }; // end namespace detail
END_ATF_NAMESPACE
