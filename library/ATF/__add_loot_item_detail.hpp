// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "__add_loot_item_info.hpp"


START_ATF_NAMESPACE
    namespace detail
    {
        info::__add_loot_itemctor___add_loot_item2_ptr __add_loot_itemctor___add_loot_item2_next(nullptr);
        info::__add_loot_itemctor___add_loot_item2_clbk __add_loot_itemctor___add_loot_item2_user(nullptr);
        
        void __add_loot_itemctor___add_loot_item2_wrapper(struct __add_loot_item* _this)
        {
           __add_loot_itemctor___add_loot_item2_user(_this, __add_loot_itemctor___add_loot_item2_next);
        };
        
        hook_record __add_loot_item_functions[] = {
        {   (LPVOID)0x14027a2e0L,
            (LPVOID *)&__add_loot_itemctor___add_loot_item2_user,
            (LPVOID *)&__add_loot_itemctor___add_loot_item2_next,
            (LPVOID)cast_pointer_function(__add_loot_itemctor___add_loot_item2_wrapper),
            (LPVOID)cast_pointer_function((void(__add_loot_item::*)())&__add_loot_item::ctor___add_loot_item) },
        
        };
        
    }; // end namespace detail
END_ATF_NAMESPACE
