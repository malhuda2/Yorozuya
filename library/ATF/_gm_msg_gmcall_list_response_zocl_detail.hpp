// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "_gm_msg_gmcall_list_response_zocl_info.hpp"


START_ATF_NAMESPACE
    namespace detail
    {
        info::_gm_msg_gmcall_list_response_zoclInit2_ptr _gm_msg_gmcall_list_response_zoclInit2_next(nullptr);
        info::_gm_msg_gmcall_list_response_zoclInit2_clbk _gm_msg_gmcall_list_response_zoclInit2_user(nullptr);
        
        info::_gm_msg_gmcall_list_response_zocl___call_nodeInit2_ptr _gm_msg_gmcall_list_response_zocl___call_nodeInit2_next(nullptr);
        info::_gm_msg_gmcall_list_response_zocl___call_nodeInit2_clbk _gm_msg_gmcall_list_response_zocl___call_nodeInit2_user(nullptr);
        
        void _gm_msg_gmcall_list_response_zoclInit2_wrapper(struct _gm_msg_gmcall_list_response_zocl* _this)
        {
           _gm_msg_gmcall_list_response_zoclInit2_user(_this, _gm_msg_gmcall_list_response_zoclInit2_next);
        };
        
        void _gm_msg_gmcall_list_response_zocl___call_nodeInit2_wrapper(struct _gm_msg_gmcall_list_response_zocl::_call_node* _this)
        {
           _gm_msg_gmcall_list_response_zocl___call_nodeInit2_user(_this, _gm_msg_gmcall_list_response_zocl___call_nodeInit2_next);
        };
        
        hook_record _gm_msg_gmcall_list_response_zocl_functions[] = {
        {   (LPVOID)0x1402ab6a0L,
            (LPVOID *)&_gm_msg_gmcall_list_response_zoclInit2_user,
            (LPVOID *)&_gm_msg_gmcall_list_response_zoclInit2_next,
            (LPVOID)cast_pointer_function(_gm_msg_gmcall_list_response_zoclInit2_wrapper),
            (LPVOID)cast_pointer_function((void(_gm_msg_gmcall_list_response_zocl::*)())&_gm_msg_gmcall_list_response_zocl::Init) },
        
        {   (LPVOID)0x1402ab760L,
            (LPVOID *)&_gm_msg_gmcall_list_response_zocl___call_nodeInit2_user,
            (LPVOID *)&_gm_msg_gmcall_list_response_zocl___call_nodeInit2_next,
            (LPVOID)cast_pointer_function(_gm_msg_gmcall_list_response_zocl___call_nodeInit2_wrapper),
            (LPVOID)cast_pointer_function((void(_gm_msg_gmcall_list_response_zocl::_call_node::*)())&_gm_msg_gmcall_list_response_zocl::_call_node::Init) },
        
        };
        
    }; // end namespace detail
END_ATF_NAMESPACE
