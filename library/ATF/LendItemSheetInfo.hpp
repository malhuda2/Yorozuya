// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>
#include <LendItemSheet.hpp>


START_ATF_NAMESPACE
    namespace Info
    {
        using LendItemSheetCheckTime2_ptr = int (WINAPIV*)(struct LendItemSheet*);
        using LendItemSheetCheckTime2_clbk = int (WINAPIV*)(struct LendItemSheet*, LendItemSheetCheckTime2_ptr);
        using LendItemSheetDeleteLink4_ptr = bool (WINAPIV*)(struct LendItemSheet*, char, struct _STORAGE_LIST::_db_con*);
        using LendItemSheetDeleteLink4_clbk = bool (WINAPIV*)(struct LendItemSheet*, char, struct _STORAGE_LIST::_db_con*, LendItemSheetDeleteLink4_ptr);
        using LendItemSheetInitialzie6_ptr = bool (WINAPIV*)(struct LendItemSheet*);
        using LendItemSheetInitialzie6_clbk = bool (WINAPIV*)(struct LendItemSheet*, LendItemSheetInitialzie6_ptr);
        using LendItemSheetInsertLink8_ptr = bool (WINAPIV*)(struct LendItemSheet*, char, struct _STORAGE_LIST::_db_con*);
        using LendItemSheetInsertLink8_clbk = bool (WINAPIV*)(struct LendItemSheet*, char, struct _STORAGE_LIST::_db_con*, LendItemSheetInsertLink8_ptr);
        
        using LendItemSheetctor_LendItemSheet10_ptr = void (WINAPIV*)(struct LendItemSheet*, struct CPlayer*);
        using LendItemSheetctor_LendItemSheet10_clbk = void (WINAPIV*)(struct LendItemSheet*, struct CPlayer*, LendItemSheetctor_LendItemSheet10_ptr);
        using LendItemSheetRelease12_ptr = void (WINAPIV*)(struct LendItemSheet*);
        using LendItemSheetRelease12_clbk = void (WINAPIV*)(struct LendItemSheet*, LendItemSheetRelease12_ptr);
        
        using LendItemSheetdtor_LendItemSheet16_ptr = void (WINAPIV*)(struct LendItemSheet*);
        using LendItemSheetdtor_LendItemSheet16_clbk = void (WINAPIV*)(struct LendItemSheet*, LendItemSheetdtor_LendItemSheet16_ptr);
    }; // end namespace Info
END_ATF_NAMESPACE
