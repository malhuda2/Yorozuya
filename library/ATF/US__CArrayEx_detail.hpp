// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "US__CArrayEx_info.hpp"


START_ATF_NAMESPACE
    namespace US
    {
        namespace detail
        {
            info::US__CArrayExAlloc2_ptr US__CArrayExAlloc2_next(nullptr);
            info::US__CArrayExAlloc2_clbk US__CArrayExAlloc2_user(nullptr);
            info::US__CArrayExctor_CArrayEx4_ptr US__CArrayExctor_CArrayEx4_next(nullptr);
            info::US__CArrayExctor_CArrayEx4_clbk US__CArrayExctor_CArrayEx4_user(nullptr);
            info::US__CArrayExGetAtPtr6_ptr US__CArrayExGetAtPtr6_next(nullptr);
            info::US__CArrayExGetAtPtr6_clbk US__CArrayExGetAtPtr6_user(nullptr);
            info::US__CArrayExGetIndex8_ptr US__CArrayExGetIndex8_next(nullptr);
            info::US__CArrayExGetIndex8_clbk US__CArrayExGetIndex8_user(nullptr);
            info::US__CArrayExGetSize10_ptr US__CArrayExGetSize10_next(nullptr);
            info::US__CArrayExGetSize10_clbk US__CArrayExGetSize10_user(nullptr);
            info::US__CArrayExGetStateAtPtr12_ptr US__CArrayExGetStateAtPtr12_next(nullptr);
            info::US__CArrayExGetStateAtPtr12_clbk US__CArrayExGetStateAtPtr12_user(nullptr);
            info::US__CArrayExSearchSlotIndex14_ptr US__CArrayExSearchSlotIndex14_next(nullptr);
            info::US__CArrayExSearchSlotIndex14_clbk US__CArrayExSearchSlotIndex14_user(nullptr);
            info::US__CArrayExdtor_CArrayEx16_ptr US__CArrayExdtor_CArrayEx16_next(nullptr);
            info::US__CArrayExdtor_CArrayEx16_clbk US__CArrayExdtor_CArrayEx16_user(nullptr);
            
            info::US__CArrayEx__ORDER_INCSearchSlotIndex2_ptr US__CArrayEx__ORDER_INCSearchSlotIndex2_next(nullptr);
            info::US__CArrayEx__ORDER_INCSearchSlotIndex2_clbk US__CArrayEx__ORDER_INCSearchSlotIndex2_user(nullptr);
            
            void US__CArrayExAlloc2_wrapper(struct US::CArrayEx<CLuaScript,CLuaScript::_State>* _this, unsigned int dwCount)
            {
               US__CArrayExAlloc2_user(_this, dwCount);
            };
            void US__CArrayExctor_CArrayEx4_wrapper(struct US::CArrayEx<CLuaScript,CLuaScript::_State>* _this)
            {
               US__CArrayExctor_CArrayEx4_user(_this);
            };
            struct CLuaScript* US__CArrayExGetAtPtr6_wrapper(struct US::CArrayEx<CLuaScript,CLuaScript::_State>* _this, unsigned int dwIndex)
            {
               return US__CArrayExGetAtPtr6_user(_this, dwIndex);
            };
            unsigned int US__CArrayExGetIndex8_wrapper(struct US::CArrayEx<CLuaScript,CLuaScript::_State>* _this, struct CLuaScript* pData)
            {
               return US__CArrayExGetIndex8_user(_this, pData);
            };
            unsigned int US__CArrayExGetSize10_wrapper(struct US::CArrayEx<CLuaScript,CLuaScript::_State>* _this)
            {
               return US__CArrayExGetSize10_user(_this);
            };
            struct CLuaScript::_State* US__CArrayExGetStateAtPtr12_wrapper(struct US::CArrayEx<CLuaScript,CLuaScript::_State>* _this, unsigned int dwIndex)
            {
               return US__CArrayExGetStateAtPtr12_user(_this, dwIndex);
            };
            unsigned int US__CArrayExSearchSlotIndex14_wrapper(struct US::CArrayEx<CLuaScript,CLuaScript::_State>* _this, struct CLuaScript::_State* state)
            {
               return US__CArrayExSearchSlotIndex14_user(_this, state);
            };
            void US__CArrayExdtor_CArrayEx16_wrapper(struct US::CArrayEx<CLuaScript,CLuaScript::_State>* _this)
            {
               US__CArrayExdtor_CArrayEx16_user(_this);
            };
            
            unsigned int US__CArrayEx__ORDER_INCSearchSlotIndex2_wrapper(struct US::CArrayEx<CLuaScript,CLuaScript::_State>* p, struct CLuaScript::_State* state)
            {
               return US__CArrayEx__ORDER_INCSearchSlotIndex2_user(p, state);
            };
            
            hook_record CArrayEx<CLuaScript,CLuaScript::_State>_functions[] = {
            {   (LPVOID)0x1404013c0L,
                (LPVOID *)&US__CArrayExAlloc2_user,
                (LPVOID *)&US__CArrayExAlloc2_next,
                (LPVOID)cast_pointer_function(US__CArrayExAlloc2_wrapper),
                (LPVOID)cast_pointer_function((void(US::CArrayEx<CLuaScript,CLuaScript::_State>::*)(unsigned int))&US::CArrayEx<CLuaScript,CLuaScript::_State>::Alloc) },
            {   (LPVOID)0x140401280L,
                (LPVOID *)&US__CArrayExctor_CArrayEx4_user,
                (LPVOID *)&US__CArrayExctor_CArrayEx4_next,
                (LPVOID)cast_pointer_function(US__CArrayExctor_CArrayEx4_wrapper),
                (LPVOID)cast_pointer_function((void(US::CArrayEx<CLuaScript,CLuaScript::_State>::*)())&US::CArrayEx<CLuaScript,CLuaScript::_State>::ctor_CArrayEx) },
            {   (LPVOID)0x140401480L,
                (LPVOID *)&US__CArrayExGetAtPtr6_user,
                (LPVOID *)&US__CArrayExGetAtPtr6_next,
                (LPVOID)cast_pointer_function(US__CArrayExGetAtPtr6_wrapper),
                (LPVOID)cast_pointer_function((struct CLuaScript*(US::CArrayEx<CLuaScript,CLuaScript::_State>::*)(unsigned int))&US::CArrayEx<CLuaScript,CLuaScript::_State>::GetAtPtr) },
            {   (LPVOID)0x140401430L,
                (LPVOID *)&US__CArrayExGetIndex8_user,
                (LPVOID *)&US__CArrayExGetIndex8_next,
                (LPVOID)cast_pointer_function(US__CArrayExGetIndex8_wrapper),
                (LPVOID)cast_pointer_function((unsigned int(US::CArrayEx<CLuaScript,CLuaScript::_State>::*)(struct CLuaScript*))&US::CArrayEx<CLuaScript,CLuaScript::_State>::GetIndex) },
            {   (LPVOID)0x140401530L,
                (LPVOID *)&US__CArrayExGetSize10_user,
                (LPVOID *)&US__CArrayExGetSize10_next,
                (LPVOID)cast_pointer_function(US__CArrayExGetSize10_wrapper),
                (LPVOID)cast_pointer_function((unsigned int(US::CArrayEx<CLuaScript,CLuaScript::_State>::*)())&US::CArrayEx<CLuaScript,CLuaScript::_State>::GetSize) },
            {   (LPVOID)0x1404014d0L,
                (LPVOID *)&US__CArrayExGetStateAtPtr12_user,
                (LPVOID *)&US__CArrayExGetStateAtPtr12_next,
                (LPVOID)cast_pointer_function(US__CArrayExGetStateAtPtr12_wrapper),
                (LPVOID)cast_pointer_function((struct CLuaScript::_State*(US::CArrayEx<CLuaScript,CLuaScript::_State>::*)(unsigned int))&US::CArrayEx<CLuaScript,CLuaScript::_State>::GetStateAtPtr) },
            {   (LPVOID)0x140402ae0L,
                (LPVOID *)&US__CArrayExSearchSlotIndex14_user,
                (LPVOID *)&US__CArrayExSearchSlotIndex14_next,
                (LPVOID)cast_pointer_function(US__CArrayExSearchSlotIndex14_wrapper),
                (LPVOID)cast_pointer_function((unsigned int(US::CArrayEx<CLuaScript,CLuaScript::_State>::*)(struct CLuaScript::_State*))&US::CArrayEx<CLuaScript,CLuaScript::_State>::SearchSlotIndex) },
            {   (LPVOID)0x140401330L,
                (LPVOID *)&US__CArrayExdtor_CArrayEx16_user,
                (LPVOID *)&US__CArrayExdtor_CArrayEx16_next,
                (LPVOID)cast_pointer_function(US__CArrayExdtor_CArrayEx16_wrapper),
                (LPVOID)cast_pointer_function((void(US::CArrayEx<CLuaScript,CLuaScript::_State>::*)())&US::CArrayEx<CLuaScript,CLuaScript::_State>::dtor_CArrayEx) },
            
            {   (LPVOID)0x140402d90L,
                (LPVOID *)&US__CArrayEx__ORDER_INCSearchSlotIndex2_user,
                (LPVOID *)&US__CArrayEx__ORDER_INCSearchSlotIndex2_next,
                (LPVOID)cast_pointer_function(US__CArrayEx__ORDER_INCSearchSlotIndex2_wrapper),
                (LPVOID)cast_pointer_function((unsigned int(US::CArrayEx<CLuaScript,CLuaScript::_State>::ORDER_INC::*)(struct US::CArrayEx<CLuaScript,CLuaScript::_State>*, struct CLuaScript::_State*))&US::CArrayEx<CLuaScript,CLuaScript::_State>::ORDER_INC::SearchSlotIndex) },
            
            };
            
        }; // end namespace detail
    }; // end namespace US
END_ATF_NAMESPACE
#include "US__CArrayEx_info.hpp"


START_ATF_NAMESPACE
    namespace US
    {
        namespace detail
        {
            info::US__CArrayExAlloc2_ptr US__CArrayExAlloc2_next(nullptr);
            info::US__CArrayExAlloc2_clbk US__CArrayExAlloc2_user(nullptr);
            info::US__CArrayExctor_CArrayEx4_ptr US__CArrayExctor_CArrayEx4_next(nullptr);
            info::US__CArrayExctor_CArrayEx4_clbk US__CArrayExctor_CArrayEx4_user(nullptr);
            info::US__CArrayExGetAtPtr6_ptr US__CArrayExGetAtPtr6_next(nullptr);
            info::US__CArrayExGetAtPtr6_clbk US__CArrayExGetAtPtr6_user(nullptr);
            info::US__CArrayExGetIndex8_ptr US__CArrayExGetIndex8_next(nullptr);
            info::US__CArrayExGetIndex8_clbk US__CArrayExGetIndex8_user(nullptr);
            info::US__CArrayExGetSize10_ptr US__CArrayExGetSize10_next(nullptr);
            info::US__CArrayExGetSize10_clbk US__CArrayExGetSize10_user(nullptr);
            info::US__CArrayExGetStateAtPtr12_ptr US__CArrayExGetStateAtPtr12_next(nullptr);
            info::US__CArrayExGetStateAtPtr12_clbk US__CArrayExGetStateAtPtr12_user(nullptr);
            info::US__CArrayExSearchSlotIndex14_ptr US__CArrayExSearchSlotIndex14_next(nullptr);
            info::US__CArrayExSearchSlotIndex14_clbk US__CArrayExSearchSlotIndex14_user(nullptr);
            info::US__CArrayExdtor_CArrayEx16_ptr US__CArrayExdtor_CArrayEx16_next(nullptr);
            info::US__CArrayExdtor_CArrayEx16_clbk US__CArrayExdtor_CArrayEx16_user(nullptr);
            
            info::US__CArrayEx__ORDER_INCSearchSlotIndex2_ptr US__CArrayEx__ORDER_INCSearchSlotIndex2_next(nullptr);
            info::US__CArrayEx__ORDER_INCSearchSlotIndex2_clbk US__CArrayEx__ORDER_INCSearchSlotIndex2_user(nullptr);
            
            void US__CArrayExAlloc2_wrapper(struct US::CArrayEx<CLuaCommandEx,CLuaCommandEx::_State>* _this, unsigned int dwCount)
            {
               US__CArrayExAlloc2_user(_this, dwCount);
            };
            void US__CArrayExctor_CArrayEx4_wrapper(struct US::CArrayEx<CLuaCommandEx,CLuaCommandEx::_State>* _this)
            {
               US__CArrayExctor_CArrayEx4_user(_this);
            };
            struct CLuaCommandEx* US__CArrayExGetAtPtr6_wrapper(struct US::CArrayEx<CLuaCommandEx,CLuaCommandEx::_State>* _this, unsigned int dwIndex)
            {
               return US__CArrayExGetAtPtr6_user(_this, dwIndex);
            };
            unsigned int US__CArrayExGetIndex8_wrapper(struct US::CArrayEx<CLuaCommandEx,CLuaCommandEx::_State>* _this, struct CLuaCommandEx* pData)
            {
               return US__CArrayExGetIndex8_user(_this, pData);
            };
            unsigned int US__CArrayExGetSize10_wrapper(struct US::CArrayEx<CLuaCommandEx,CLuaCommandEx::_State>* _this)
            {
               return US__CArrayExGetSize10_user(_this);
            };
            struct CLuaCommandEx::_State* US__CArrayExGetStateAtPtr12_wrapper(struct US::CArrayEx<CLuaCommandEx,CLuaCommandEx::_State>* _this, unsigned int dwIndex)
            {
               return US__CArrayExGetStateAtPtr12_user(_this, dwIndex);
            };
            unsigned int US__CArrayExSearchSlotIndex14_wrapper(struct US::CArrayEx<CLuaCommandEx,CLuaCommandEx::_State>* _this, struct CLuaCommandEx::_State* state)
            {
               return US__CArrayExSearchSlotIndex14_user(_this, state);
            };
            void US__CArrayExdtor_CArrayEx16_wrapper(struct US::CArrayEx<CLuaCommandEx,CLuaCommandEx::_State>* _this)
            {
               US__CArrayExdtor_CArrayEx16_user(_this);
            };
            
            unsigned int US__CArrayEx__ORDER_INCSearchSlotIndex2_wrapper(struct US::CArrayEx<CLuaCommandEx,CLuaCommandEx::_State>* p, struct CLuaCommandEx::_State* state)
            {
               return US__CArrayEx__ORDER_INCSearchSlotIndex2_user(p, state);
            };
            
            hook_record CArrayEx<CLuaCommandEx,CLuaCommandEx::_State>_functions[] = {
            {   (LPVOID)0x140401830L,
                (LPVOID *)&US__CArrayExAlloc2_user,
                (LPVOID *)&US__CArrayExAlloc2_next,
                (LPVOID)cast_pointer_function(US__CArrayExAlloc2_wrapper),
                (LPVOID)cast_pointer_function((void(US::CArrayEx<CLuaCommandEx,CLuaCommandEx::_State>::*)(unsigned int))&US::CArrayEx<CLuaCommandEx,CLuaCommandEx::_State>::Alloc) },
            {   (LPVOID)0x1404016f0L,
                (LPVOID *)&US__CArrayExctor_CArrayEx4_user,
                (LPVOID *)&US__CArrayExctor_CArrayEx4_next,
                (LPVOID)cast_pointer_function(US__CArrayExctor_CArrayEx4_wrapper),
                (LPVOID)cast_pointer_function((void(US::CArrayEx<CLuaCommandEx,CLuaCommandEx::_State>::*)())&US::CArrayEx<CLuaCommandEx,CLuaCommandEx::_State>::ctor_CArrayEx) },
            {   (LPVOID)0x1404018f0L,
                (LPVOID *)&US__CArrayExGetAtPtr6_user,
                (LPVOID *)&US__CArrayExGetAtPtr6_next,
                (LPVOID)cast_pointer_function(US__CArrayExGetAtPtr6_wrapper),
                (LPVOID)cast_pointer_function((struct CLuaCommandEx*(US::CArrayEx<CLuaCommandEx,CLuaCommandEx::_State>::*)(unsigned int))&US::CArrayEx<CLuaCommandEx,CLuaCommandEx::_State>::GetAtPtr) },
            {   (LPVOID)0x1404018a0L,
                (LPVOID *)&US__CArrayExGetIndex8_user,
                (LPVOID *)&US__CArrayExGetIndex8_next,
                (LPVOID)cast_pointer_function(US__CArrayExGetIndex8_wrapper),
                (LPVOID)cast_pointer_function((unsigned int(US::CArrayEx<CLuaCommandEx,CLuaCommandEx::_State>::*)(struct CLuaCommandEx*))&US::CArrayEx<CLuaCommandEx,CLuaCommandEx::_State>::GetIndex) },
            {   (LPVOID)0x140402ed0L,
                (LPVOID *)&US__CArrayExGetSize10_user,
                (LPVOID *)&US__CArrayExGetSize10_next,
                (LPVOID)cast_pointer_function(US__CArrayExGetSize10_wrapper),
                (LPVOID)cast_pointer_function((unsigned int(US::CArrayEx<CLuaCommandEx,CLuaCommandEx::_State>::*)())&US::CArrayEx<CLuaCommandEx,CLuaCommandEx::_State>::GetSize) },
            {   (LPVOID)0x140401940L,
                (LPVOID *)&US__CArrayExGetStateAtPtr12_user,
                (LPVOID *)&US__CArrayExGetStateAtPtr12_next,
                (LPVOID)cast_pointer_function(US__CArrayExGetStateAtPtr12_wrapper),
                (LPVOID)cast_pointer_function((struct CLuaCommandEx::_State*(US::CArrayEx<CLuaCommandEx,CLuaCommandEx::_State>::*)(unsigned int))&US::CArrayEx<CLuaCommandEx,CLuaCommandEx::_State>::GetStateAtPtr) },
            {   (LPVOID)0x140402a90L,
                (LPVOID *)&US__CArrayExSearchSlotIndex14_user,
                (LPVOID *)&US__CArrayExSearchSlotIndex14_next,
                (LPVOID)cast_pointer_function(US__CArrayExSearchSlotIndex14_wrapper),
                (LPVOID)cast_pointer_function((unsigned int(US::CArrayEx<CLuaCommandEx,CLuaCommandEx::_State>::*)(struct CLuaCommandEx::_State*))&US::CArrayEx<CLuaCommandEx,CLuaCommandEx::_State>::SearchSlotIndex) },
            {   (LPVOID)0x1404017a0L,
                (LPVOID *)&US__CArrayExdtor_CArrayEx16_user,
                (LPVOID *)&US__CArrayExdtor_CArrayEx16_next,
                (LPVOID)cast_pointer_function(US__CArrayExdtor_CArrayEx16_wrapper),
                (LPVOID)cast_pointer_function((void(US::CArrayEx<CLuaCommandEx,CLuaCommandEx::_State>::*)())&US::CArrayEx<CLuaCommandEx,CLuaCommandEx::_State>::dtor_CArrayEx) },
            
            {   (LPVOID)0x140402c70L,
                (LPVOID *)&US__CArrayEx__ORDER_INCSearchSlotIndex2_user,
                (LPVOID *)&US__CArrayEx__ORDER_INCSearchSlotIndex2_next,
                (LPVOID)cast_pointer_function(US__CArrayEx__ORDER_INCSearchSlotIndex2_wrapper),
                (LPVOID)cast_pointer_function((unsigned int(US::CArrayEx<CLuaCommandEx,CLuaCommandEx::_State>::ORDER_INC::*)(struct US::CArrayEx<CLuaCommandEx,CLuaCommandEx::_State>*, struct CLuaCommandEx::_State*))&US::CArrayEx<CLuaCommandEx,CLuaCommandEx::_State>::ORDER_INC::SearchSlotIndex) },
            
            };
            
        }; // end namespace detail
    }; // end namespace US
END_ATF_NAMESPACE
#include "US__CArrayEx_info.hpp"


START_ATF_NAMESPACE
    namespace US
    {
        namespace detail
        {
            info::US__CArrayExAlloc2_ptr US__CArrayExAlloc2_next(nullptr);
            info::US__CArrayExAlloc2_clbk US__CArrayExAlloc2_user(nullptr);
            info::US__CArrayExctor_CArrayEx4_ptr US__CArrayExctor_CArrayEx4_next(nullptr);
            info::US__CArrayExctor_CArrayEx4_clbk US__CArrayExctor_CArrayEx4_user(nullptr);
            info::US__CArrayExGetAtPtr6_ptr US__CArrayExGetAtPtr6_next(nullptr);
            info::US__CArrayExGetAtPtr6_clbk US__CArrayExGetAtPtr6_user(nullptr);
            info::US__CArrayExGetSize8_ptr US__CArrayExGetSize8_next(nullptr);
            info::US__CArrayExGetSize8_clbk US__CArrayExGetSize8_user(nullptr);
            info::US__CArrayExGetStateAtPtr10_ptr US__CArrayExGetStateAtPtr10_next(nullptr);
            info::US__CArrayExGetStateAtPtr10_clbk US__CArrayExGetStateAtPtr10_user(nullptr);
            info::US__CArrayExSearchSlotIndex12_ptr US__CArrayExSearchSlotIndex12_next(nullptr);
            info::US__CArrayExSearchSlotIndex12_clbk US__CArrayExSearchSlotIndex12_user(nullptr);
            info::US__CArrayExdtor_CArrayEx14_ptr US__CArrayExdtor_CArrayEx14_next(nullptr);
            info::US__CArrayExdtor_CArrayEx14_clbk US__CArrayExdtor_CArrayEx14_user(nullptr);
            
            info::US__CArrayEx__ORDER_INCSearchSlotIndex2_ptr US__CArrayEx__ORDER_INCSearchSlotIndex2_next(nullptr);
            info::US__CArrayEx__ORDER_INCSearchSlotIndex2_clbk US__CArrayEx__ORDER_INCSearchSlotIndex2_user(nullptr);
            
            void US__CArrayExAlloc2_wrapper(struct US::CArrayEx<CLuaLooting_Novus_Item,CLuaLooting_Novus_Item::_State>* _this, unsigned int dwCount)
            {
               US__CArrayExAlloc2_user(_this, dwCount);
            };
            void US__CArrayExctor_CArrayEx4_wrapper(struct US::CArrayEx<CLuaLooting_Novus_Item,CLuaLooting_Novus_Item::_State>* _this)
            {
               US__CArrayExctor_CArrayEx4_user(_this);
            };
            struct CLuaLooting_Novus_Item* US__CArrayExGetAtPtr6_wrapper(struct US::CArrayEx<CLuaLooting_Novus_Item,CLuaLooting_Novus_Item::_State>* _this, unsigned int dwIndex)
            {
               return US__CArrayExGetAtPtr6_user(_this, dwIndex);
            };
            unsigned int US__CArrayExGetSize8_wrapper(struct US::CArrayEx<CLuaLooting_Novus_Item,CLuaLooting_Novus_Item::_State>* _this)
            {
               return US__CArrayExGetSize8_user(_this);
            };
            struct CLuaLooting_Novus_Item::_State* US__CArrayExGetStateAtPtr10_wrapper(struct US::CArrayEx<CLuaLooting_Novus_Item,CLuaLooting_Novus_Item::_State>* _this, unsigned int dwIndex)
            {
               return US__CArrayExGetStateAtPtr10_user(_this, dwIndex);
            };
            unsigned int US__CArrayExSearchSlotIndex12_wrapper(struct US::CArrayEx<CLuaLooting_Novus_Item,CLuaLooting_Novus_Item::_State>* _this, struct CLuaLooting_Novus_Item::_State* state)
            {
               return US__CArrayExSearchSlotIndex12_user(_this, state);
            };
            void US__CArrayExdtor_CArrayEx14_wrapper(struct US::CArrayEx<CLuaLooting_Novus_Item,CLuaLooting_Novus_Item::_State>* _this)
            {
               US__CArrayExdtor_CArrayEx14_user(_this);
            };
            
            unsigned int US__CArrayEx__ORDER_INCSearchSlotIndex2_wrapper(struct US::CArrayEx<CLuaLooting_Novus_Item,CLuaLooting_Novus_Item::_State>* p, struct CLuaLooting_Novus_Item::_State* state)
            {
               return US__CArrayEx__ORDER_INCSearchSlotIndex2_user(p, state);
            };
            
            hook_record CArrayEx<CLuaLooting_Novus_Item,CLuaLooting_Novus_Item::_State>_functions[] = {
            {   (LPVOID)0x140405690L,
                (LPVOID *)&US__CArrayExAlloc2_user,
                (LPVOID *)&US__CArrayExAlloc2_next,
                (LPVOID)cast_pointer_function(US__CArrayExAlloc2_wrapper),
                (LPVOID)cast_pointer_function((void(US::CArrayEx<CLuaLooting_Novus_Item,CLuaLooting_Novus_Item::_State>::*)(unsigned int))&US::CArrayEx<CLuaLooting_Novus_Item,CLuaLooting_Novus_Item::_State>::Alloc) },
            {   (LPVOID)0x140405550L,
                (LPVOID *)&US__CArrayExctor_CArrayEx4_user,
                (LPVOID *)&US__CArrayExctor_CArrayEx4_next,
                (LPVOID)cast_pointer_function(US__CArrayExctor_CArrayEx4_wrapper),
                (LPVOID)cast_pointer_function((void(US::CArrayEx<CLuaLooting_Novus_Item,CLuaLooting_Novus_Item::_State>::*)())&US::CArrayEx<CLuaLooting_Novus_Item,CLuaLooting_Novus_Item::_State>::ctor_CArrayEx) },
            {   (LPVOID)0x140405700L,
                (LPVOID *)&US__CArrayExGetAtPtr6_user,
                (LPVOID *)&US__CArrayExGetAtPtr6_next,
                (LPVOID)cast_pointer_function(US__CArrayExGetAtPtr6_wrapper),
                (LPVOID)cast_pointer_function((struct CLuaLooting_Novus_Item*(US::CArrayEx<CLuaLooting_Novus_Item,CLuaLooting_Novus_Item::_State>::*)(unsigned int))&US::CArrayEx<CLuaLooting_Novus_Item,CLuaLooting_Novus_Item::_State>::GetAtPtr) },
            {   (LPVOID)0x1404057b0L,
                (LPVOID *)&US__CArrayExGetSize8_user,
                (LPVOID *)&US__CArrayExGetSize8_next,
                (LPVOID)cast_pointer_function(US__CArrayExGetSize8_wrapper),
                (LPVOID)cast_pointer_function((unsigned int(US::CArrayEx<CLuaLooting_Novus_Item,CLuaLooting_Novus_Item::_State>::*)())&US::CArrayEx<CLuaLooting_Novus_Item,CLuaLooting_Novus_Item::_State>::GetSize) },
            {   (LPVOID)0x140405750L,
                (LPVOID *)&US__CArrayExGetStateAtPtr10_user,
                (LPVOID *)&US__CArrayExGetStateAtPtr10_next,
                (LPVOID)cast_pointer_function(US__CArrayExGetStateAtPtr10_wrapper),
                (LPVOID)cast_pointer_function((struct CLuaLooting_Novus_Item::_State*(US::CArrayEx<CLuaLooting_Novus_Item,CLuaLooting_Novus_Item::_State>::*)(unsigned int))&US::CArrayEx<CLuaLooting_Novus_Item,CLuaLooting_Novus_Item::_State>::GetStateAtPtr) },
            {   (LPVOID)0x140405f80L,
                (LPVOID *)&US__CArrayExSearchSlotIndex12_user,
                (LPVOID *)&US__CArrayExSearchSlotIndex12_next,
                (LPVOID)cast_pointer_function(US__CArrayExSearchSlotIndex12_wrapper),
                (LPVOID)cast_pointer_function((unsigned int(US::CArrayEx<CLuaLooting_Novus_Item,CLuaLooting_Novus_Item::_State>::*)(struct CLuaLooting_Novus_Item::_State*))&US::CArrayEx<CLuaLooting_Novus_Item,CLuaLooting_Novus_Item::_State>::SearchSlotIndex) },
            {   (LPVOID)0x140405600L,
                (LPVOID *)&US__CArrayExdtor_CArrayEx14_user,
                (LPVOID *)&US__CArrayExdtor_CArrayEx14_next,
                (LPVOID)cast_pointer_function(US__CArrayExdtor_CArrayEx14_wrapper),
                (LPVOID)cast_pointer_function((void(US::CArrayEx<CLuaLooting_Novus_Item,CLuaLooting_Novus_Item::_State>::*)())&US::CArrayEx<CLuaLooting_Novus_Item,CLuaLooting_Novus_Item::_State>::dtor_CArrayEx) },
            
            {   (LPVOID)0x140405fd0L,
                (LPVOID *)&US__CArrayEx__ORDER_INCSearchSlotIndex2_user,
                (LPVOID *)&US__CArrayEx__ORDER_INCSearchSlotIndex2_next,
                (LPVOID)cast_pointer_function(US__CArrayEx__ORDER_INCSearchSlotIndex2_wrapper),
                (LPVOID)cast_pointer_function((unsigned int(US::CArrayEx<CLuaLooting_Novus_Item,CLuaLooting_Novus_Item::_State>::ORDER_INC::*)(struct US::CArrayEx<CLuaLooting_Novus_Item,CLuaLooting_Novus_Item::_State>*, struct CLuaLooting_Novus_Item::_State*))&US::CArrayEx<CLuaLooting_Novus_Item,CLuaLooting_Novus_Item::_State>::ORDER_INC::SearchSlotIndex) },
            
            };
            
        }; // end namespace detail
    }; // end namespace US
END_ATF_NAMESPACE
#include "US__CArrayEx_info.hpp"


START_ATF_NAMESPACE
    namespace US
    {
        namespace detail
        {
            info::US__CArrayExAlloc2_ptr US__CArrayExAlloc2_next(nullptr);
            info::US__CArrayExAlloc2_clbk US__CArrayExAlloc2_user(nullptr);
            info::US__CArrayExctor_CArrayEx4_ptr US__CArrayExctor_CArrayEx4_next(nullptr);
            info::US__CArrayExctor_CArrayEx4_clbk US__CArrayExctor_CArrayEx4_user(nullptr);
            info::US__CArrayExGetAtPtr6_ptr US__CArrayExGetAtPtr6_next(nullptr);
            info::US__CArrayExGetAtPtr6_clbk US__CArrayExGetAtPtr6_user(nullptr);
            info::US__CArrayExGetIndex8_ptr US__CArrayExGetIndex8_next(nullptr);
            info::US__CArrayExGetIndex8_clbk US__CArrayExGetIndex8_user(nullptr);
            info::US__CArrayExGetSize10_ptr US__CArrayExGetSize10_next(nullptr);
            info::US__CArrayExGetSize10_clbk US__CArrayExGetSize10_user(nullptr);
            info::US__CArrayExGetStateAtPtr12_ptr US__CArrayExGetStateAtPtr12_next(nullptr);
            info::US__CArrayExGetStateAtPtr12_clbk US__CArrayExGetStateAtPtr12_user(nullptr);
            info::US__CArrayExSearchSlotIndex14_ptr US__CArrayExSearchSlotIndex14_next(nullptr);
            info::US__CArrayExSearchSlotIndex14_clbk US__CArrayExSearchSlotIndex14_user(nullptr);
            info::US__CArrayExdtor_CArrayEx16_ptr US__CArrayExdtor_CArrayEx16_next(nullptr);
            info::US__CArrayExdtor_CArrayEx16_clbk US__CArrayExdtor_CArrayEx16_user(nullptr);
            
            info::US__CArrayEx__ORDER_INCSearchSlotIndex2_ptr US__CArrayEx__ORDER_INCSearchSlotIndex2_next(nullptr);
            info::US__CArrayEx__ORDER_INCSearchSlotIndex2_clbk US__CArrayEx__ORDER_INCSearchSlotIndex2_user(nullptr);
            
            void US__CArrayExAlloc2_wrapper(struct US::CArrayEx<CLuaEventNode,CLuaEventNode::_State>* _this, unsigned int dwCount)
            {
               US__CArrayExAlloc2_user(_this, dwCount);
            };
            void US__CArrayExctor_CArrayEx4_wrapper(struct US::CArrayEx<CLuaEventNode,CLuaEventNode::_State>* _this)
            {
               US__CArrayExctor_CArrayEx4_user(_this);
            };
            struct CLuaEventNode* US__CArrayExGetAtPtr6_wrapper(struct US::CArrayEx<CLuaEventNode,CLuaEventNode::_State>* _this, unsigned int dwIndex)
            {
               return US__CArrayExGetAtPtr6_user(_this, dwIndex);
            };
            unsigned int US__CArrayExGetIndex8_wrapper(struct US::CArrayEx<CLuaEventNode,CLuaEventNode::_State>* _this, struct CLuaEventNode* pData)
            {
               return US__CArrayExGetIndex8_user(_this, pData);
            };
            unsigned int US__CArrayExGetSize10_wrapper(struct US::CArrayEx<CLuaEventNode,CLuaEventNode::_State>* _this)
            {
               return US__CArrayExGetSize10_user(_this);
            };
            struct CLuaEventNode::_State* US__CArrayExGetStateAtPtr12_wrapper(struct US::CArrayEx<CLuaEventNode,CLuaEventNode::_State>* _this, unsigned int dwIndex)
            {
               return US__CArrayExGetStateAtPtr12_user(_this, dwIndex);
            };
            unsigned int US__CArrayExSearchSlotIndex14_wrapper(struct US::CArrayEx<CLuaEventNode,CLuaEventNode::_State>* _this, struct CLuaEventNode::_State* state)
            {
               return US__CArrayExSearchSlotIndex14_user(_this, state);
            };
            void US__CArrayExdtor_CArrayEx16_wrapper(struct US::CArrayEx<CLuaEventNode,CLuaEventNode::_State>* _this)
            {
               US__CArrayExdtor_CArrayEx16_user(_this);
            };
            
            unsigned int US__CArrayEx__ORDER_INCSearchSlotIndex2_wrapper(struct US::CArrayEx<CLuaEventNode,CLuaEventNode::_State>* p, struct CLuaEventNode::_State* state)
            {
               return US__CArrayEx__ORDER_INCSearchSlotIndex2_user(p, state);
            };
            
            hook_record CArrayEx<CLuaEventNode,CLuaEventNode::_State>_functions[] = {
            {   (LPVOID)0x140403d40L,
                (LPVOID *)&US__CArrayExAlloc2_user,
                (LPVOID *)&US__CArrayExAlloc2_next,
                (LPVOID)cast_pointer_function(US__CArrayExAlloc2_wrapper),
                (LPVOID)cast_pointer_function((void(US::CArrayEx<CLuaEventNode,CLuaEventNode::_State>::*)(unsigned int))&US::CArrayEx<CLuaEventNode,CLuaEventNode::_State>::Alloc) },
            {   (LPVOID)0x140403c00L,
                (LPVOID *)&US__CArrayExctor_CArrayEx4_user,
                (LPVOID *)&US__CArrayExctor_CArrayEx4_next,
                (LPVOID)cast_pointer_function(US__CArrayExctor_CArrayEx4_wrapper),
                (LPVOID)cast_pointer_function((void(US::CArrayEx<CLuaEventNode,CLuaEventNode::_State>::*)())&US::CArrayEx<CLuaEventNode,CLuaEventNode::_State>::ctor_CArrayEx) },
            {   (LPVOID)0x140403e00L,
                (LPVOID *)&US__CArrayExGetAtPtr6_user,
                (LPVOID *)&US__CArrayExGetAtPtr6_next,
                (LPVOID)cast_pointer_function(US__CArrayExGetAtPtr6_wrapper),
                (LPVOID)cast_pointer_function((struct CLuaEventNode*(US::CArrayEx<CLuaEventNode,CLuaEventNode::_State>::*)(unsigned int))&US::CArrayEx<CLuaEventNode,CLuaEventNode::_State>::GetAtPtr) },
            {   (LPVOID)0x140403db0L,
                (LPVOID *)&US__CArrayExGetIndex8_user,
                (LPVOID *)&US__CArrayExGetIndex8_next,
                (LPVOID)cast_pointer_function(US__CArrayExGetIndex8_wrapper),
                (LPVOID)cast_pointer_function((unsigned int(US::CArrayEx<CLuaEventNode,CLuaEventNode::_State>::*)(struct CLuaEventNode*))&US::CArrayEx<CLuaEventNode,CLuaEventNode::_State>::GetIndex) },
            {   (LPVOID)0x140403eb0L,
                (LPVOID *)&US__CArrayExGetSize10_user,
                (LPVOID *)&US__CArrayExGetSize10_next,
                (LPVOID)cast_pointer_function(US__CArrayExGetSize10_wrapper),
                (LPVOID)cast_pointer_function((unsigned int(US::CArrayEx<CLuaEventNode,CLuaEventNode::_State>::*)())&US::CArrayEx<CLuaEventNode,CLuaEventNode::_State>::GetSize) },
            {   (LPVOID)0x140403e50L,
                (LPVOID *)&US__CArrayExGetStateAtPtr12_user,
                (LPVOID *)&US__CArrayExGetStateAtPtr12_next,
                (LPVOID)cast_pointer_function(US__CArrayExGetStateAtPtr12_wrapper),
                (LPVOID)cast_pointer_function((struct CLuaEventNode::_State*(US::CArrayEx<CLuaEventNode,CLuaEventNode::_State>::*)(unsigned int))&US::CArrayEx<CLuaEventNode,CLuaEventNode::_State>::GetStateAtPtr) },
            {   (LPVOID)0x140404740L,
                (LPVOID *)&US__CArrayExSearchSlotIndex14_user,
                (LPVOID *)&US__CArrayExSearchSlotIndex14_next,
                (LPVOID)cast_pointer_function(US__CArrayExSearchSlotIndex14_wrapper),
                (LPVOID)cast_pointer_function((unsigned int(US::CArrayEx<CLuaEventNode,CLuaEventNode::_State>::*)(struct CLuaEventNode::_State*))&US::CArrayEx<CLuaEventNode,CLuaEventNode::_State>::SearchSlotIndex) },
            {   (LPVOID)0x140403cb0L,
                (LPVOID *)&US__CArrayExdtor_CArrayEx16_user,
                (LPVOID *)&US__CArrayExdtor_CArrayEx16_next,
                (LPVOID)cast_pointer_function(US__CArrayExdtor_CArrayEx16_wrapper),
                (LPVOID)cast_pointer_function((void(US::CArrayEx<CLuaEventNode,CLuaEventNode::_State>::*)())&US::CArrayEx<CLuaEventNode,CLuaEventNode::_State>::dtor_CArrayEx) },
            
            {   (LPVOID)0x1404048d0L,
                (LPVOID *)&US__CArrayEx__ORDER_INCSearchSlotIndex2_user,
                (LPVOID *)&US__CArrayEx__ORDER_INCSearchSlotIndex2_next,
                (LPVOID)cast_pointer_function(US__CArrayEx__ORDER_INCSearchSlotIndex2_wrapper),
                (LPVOID)cast_pointer_function((unsigned int(US::CArrayEx<CLuaEventNode,CLuaEventNode::_State>::ORDER_INC::*)(struct US::CArrayEx<CLuaEventNode,CLuaEventNode::_State>*, struct CLuaEventNode::_State*))&US::CArrayEx<CLuaEventNode,CLuaEventNode::_State>::ORDER_INC::SearchSlotIndex) },
            
            };
            
        }; // end namespace detail
    }; // end namespace US
END_ATF_NAMESPACE
