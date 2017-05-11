// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "BNetwork_info.hpp"


START_ATF_NAMESPACE
    namespace detail
    {
        info::BNetworkctor_BNetwork2_ptr BNetworkctor_BNetwork2_next(nullptr);
        info::BNetworkctor_BNetwork2_clbk BNetworkctor_BNetwork2_user(nullptr);
        info::BNetworkFreeDLL4_ptr BNetworkFreeDLL4_next(nullptr);
        info::BNetworkFreeDLL4_clbk BNetworkFreeDLL4_user(nullptr);
        info::BNetworkInitNetwork6_ptr BNetworkInitNetwork6_next(nullptr);
        info::BNetworkInitNetwork6_clbk BNetworkInitNetwork6_user(nullptr);
        info::BNetworkLoadDll8_ptr BNetworkLoadDll8_next(nullptr);
        info::BNetworkLoadDll8_clbk BNetworkLoadDll8_user(nullptr);
        info::BNetworkdtor_BNetwork13_ptr BNetworkdtor_BNetwork13_next(nullptr);
        info::BNetworkdtor_BNetwork13_clbk BNetworkdtor_BNetwork13_user(nullptr);
        
        void BNetworkctor_BNetwork2_wrapper(struct BNetwork* _this)
        {
           BNetworkctor_BNetwork2_user(_this, BNetworkctor_BNetwork2_next);
        };
        void BNetworkFreeDLL4_wrapper(struct BNetwork* _this)
        {
           BNetworkFreeDLL4_user(_this, BNetworkFreeDLL4_next);
        };
        void BNetworkInitNetwork6_wrapper(struct BNetwork* _this)
        {
           BNetworkInitNetwork6_user(_this, BNetworkInitNetwork6_next);
        };
        bool BNetworkLoadDll8_wrapper(struct BNetwork* _this, char* dll_name)
        {
           return BNetworkLoadDll8_user(_this, dll_name, BNetworkLoadDll8_next);
        };
        void BNetworkdtor_BNetwork13_wrapper(struct BNetwork* _this)
        {
           BNetworkdtor_BNetwork13_user(_this, BNetworkdtor_BNetwork13_next);
        };
        
        hook_record BNetwork_functions[] = {
        {   (LPVOID)0x14031d270L,
            (LPVOID *)&BNetworkctor_BNetwork2_user,
            (LPVOID *)&BNetworkctor_BNetwork2_next,
            (LPVOID)cast_pointer_function(BNetworkctor_BNetwork2_wrapper),
            (LPVOID)cast_pointer_function((void(BNetwork::*)())&BNetwork::ctor_BNetwork) },
        {   (LPVOID)0x140318ba0L,
            (LPVOID *)&BNetworkFreeDLL4_user,
            (LPVOID *)&BNetworkFreeDLL4_next,
            (LPVOID)cast_pointer_function(BNetworkFreeDLL4_wrapper),
            (LPVOID)cast_pointer_function((void(BNetwork::*)())&BNetwork::FreeDLL) },
        {   (LPVOID)0x140318bf0L,
            (LPVOID *)&BNetworkInitNetwork6_user,
            (LPVOID *)&BNetworkInitNetwork6_next,
            (LPVOID)cast_pointer_function(BNetworkInitNetwork6_wrapper),
            (LPVOID)cast_pointer_function((void(BNetwork::*)())&BNetwork::InitNetwork) },
        {   (LPVOID)0x140318950L,
            (LPVOID *)&BNetworkLoadDll8_user,
            (LPVOID *)&BNetworkLoadDll8_next,
            (LPVOID)cast_pointer_function(BNetworkLoadDll8_wrapper),
            (LPVOID)cast_pointer_function((bool(BNetwork::*)(char*))&BNetwork::LoadDll) },
        {   (LPVOID)0x14031d2a0L,
            (LPVOID *)&BNetworkdtor_BNetwork13_user,
            (LPVOID *)&BNetworkdtor_BNetwork13_next,
            (LPVOID)cast_pointer_function(BNetworkdtor_BNetwork13_wrapper),
            (LPVOID)cast_pointer_function((void(BNetwork::*)())&BNetwork::dtor_BNetwork) },
        
        };
        
    }; // end namespace detail
END_ATF_NAMESPACE
