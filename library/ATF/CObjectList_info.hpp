// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "CObjectList.hpp"


START_ATF_NAMESPACE
    namespace info
    {
        using CObjectListctor_CObjectList2_ptr = void (WINAPIV*)(struct CObjectList*);
        using CObjectListctor_CObjectList2_clbk = void (WINAPIV*)(struct CObjectList*, CObjectListctor_CObjectList2_ptr);
        using CObjectListCopyItem4_ptr = struct CGameObject* (WINAPIV*)(struct CObjectList*, unsigned int);
        using CObjectListCopyItem4_clbk = struct CGameObject* (WINAPIV*)(struct CObjectList*, unsigned int, CObjectListCopyItem4_ptr);
        using CObjectListDeleteItem6_ptr = bool (WINAPIV*)(struct CObjectList*, struct _object_list_point*);
        using CObjectListDeleteItem6_clbk = bool (WINAPIV*)(struct CObjectList*, struct _object_list_point*, CObjectListDeleteItem6_ptr);
        using CObjectListGetSize8_ptr = int (WINAPIV*)(struct CObjectList*);
        using CObjectListGetSize8_clbk = int (WINAPIV*)(struct CObjectList*, CObjectListGetSize8_ptr);
        using CObjectListInitList10_ptr = void (WINAPIV*)(struct CObjectList*);
        using CObjectListInitList10_clbk = void (WINAPIV*)(struct CObjectList*, CObjectListInitList10_ptr);
        using CObjectListPushItem12_ptr = bool (WINAPIV*)(struct CObjectList*, struct _object_list_point*);
        using CObjectListPushItem12_clbk = bool (WINAPIV*)(struct CObjectList*, struct _object_list_point*, CObjectListPushItem12_ptr);
        using CObjectListdtor_CObjectList16_ptr = void (WINAPIV*)(struct CObjectList*);
        using CObjectListdtor_CObjectList16_clbk = void (WINAPIV*)(struct CObjectList*, CObjectListdtor_CObjectList16_ptr);
        
    }; // end namespace info
END_ATF_NAMESPACE
