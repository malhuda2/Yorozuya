// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "CEquipItemSFAgent.hpp"


START_ATF_NAMESPACE
    namespace info
    {
        using CEquipItemSFAgentAllEndContSF2_ptr = void (WINAPIV*)(struct CEquipItemSFAgent*);
        using CEquipItemSFAgentAllEndContSF2_clbk = void (WINAPIV*)(struct CEquipItemSFAgent*, CEquipItemSFAgentAllEndContSF2_ptr);
        using CEquipItemSFAgentctor_CEquipItemSFAgent4_ptr = void (WINAPIV*)(struct CEquipItemSFAgent*);
        using CEquipItemSFAgentctor_CEquipItemSFAgent4_clbk = void (WINAPIV*)(struct CEquipItemSFAgent*, CEquipItemSFAgentctor_CEquipItemSFAgent4_ptr);
        using CEquipItemSFAgentEndContSF6_ptr = void (WINAPIV*)(struct CEquipItemSFAgent*, struct _sf_continous*);
        using CEquipItemSFAgentEndContSF6_clbk = void (WINAPIV*)(struct CEquipItemSFAgent*, struct _sf_continous*, CEquipItemSFAgentEndContSF6_ptr);
        using CEquipItemSFAgentGetBoosterAddSpeed8_ptr = float (WINAPIV*)(struct CEquipItemSFAgent*);
        using CEquipItemSFAgentGetBoosterAddSpeed8_clbk = float (WINAPIV*)(struct CEquipItemSFAgent*, CEquipItemSFAgentGetBoosterAddSpeed8_ptr);
        using CEquipItemSFAgentGetEquip10_ptr = struct _STORAGE_LIST::_db_con* (WINAPIV*)(struct CEquipItemSFAgent*, int);
        using CEquipItemSFAgentGetEquip10_clbk = struct _STORAGE_LIST::_db_con* (WINAPIV*)(struct CEquipItemSFAgent*, int, CEquipItemSFAgentGetEquip10_ptr);
        using CEquipItemSFAgentGetEquipSFCont12_ptr = struct _sf_continous* (WINAPIV*)(struct CEquipItemSFAgent*, int);
        using CEquipItemSFAgentGetEquipSFCont12_clbk = struct _sf_continous* (WINAPIV*)(struct CEquipItemSFAgent*, int, CEquipItemSFAgentGetEquipSFCont12_ptr);
        using CEquipItemSFAgentGetRequireSFSlot14_ptr = bool (WINAPIV*)(struct CEquipItemSFAgent*, struct CEquipItemSFAgent::_requireSlot*, struct _skill_fld*);
        using CEquipItemSFAgentGetRequireSFSlot14_clbk = bool (WINAPIV*)(struct CEquipItemSFAgent*, struct CEquipItemSFAgent::_requireSlot*, struct _skill_fld*, CEquipItemSFAgentGetRequireSFSlot14_ptr);
        using CEquipItemSFAgentInit16_ptr = void (WINAPIV*)(struct CEquipItemSFAgent*, struct CPlayer*);
        using CEquipItemSFAgentInit16_clbk = void (WINAPIV*)(struct CEquipItemSFAgent*, struct CPlayer*, CEquipItemSFAgentInit16_ptr);
        using CEquipItemSFAgentIsEnableSkill18_ptr = char (WINAPIV*)(struct CEquipItemSFAgent*, struct _skill_fld*);
        using CEquipItemSFAgentIsEnableSkill18_clbk = char (WINAPIV*)(struct CEquipItemSFAgent*, struct _skill_fld*, CEquipItemSFAgentIsEnableSkill18_ptr);
        using CEquipItemSFAgentIsEnableSkill20_ptr = char (WINAPIV*)(struct CEquipItemSFAgent*, int, struct _skill_fld*);
        using CEquipItemSFAgentIsEnableSkill20_clbk = char (WINAPIV*)(struct CEquipItemSFAgent*, int, struct _skill_fld*, CEquipItemSFAgentIsEnableSkill20_ptr);
        using CEquipItemSFAgentIsUseBooster22_ptr = bool (WINAPIV*)(struct CEquipItemSFAgent*);
        using CEquipItemSFAgentIsUseBooster22_clbk = bool (WINAPIV*)(struct CEquipItemSFAgent*, CEquipItemSFAgentIsUseBooster22_ptr);
        using CEquipItemSFAgentReleaseSFCont24_ptr = void (WINAPIV*)(struct CEquipItemSFAgent*, int);
        using CEquipItemSFAgentReleaseSFCont24_clbk = void (WINAPIV*)(struct CEquipItemSFAgent*, int, CEquipItemSFAgentReleaseSFCont24_ptr);
        using CEquipItemSFAgentSearchItemAddSpeed26_ptr = float (WINAPIV*)(struct CEquipItemSFAgent*, struct _STORAGE_LIST::_db_con*);
        using CEquipItemSFAgentSearchItemAddSpeed26_clbk = float (WINAPIV*)(struct CEquipItemSFAgent*, struct _STORAGE_LIST::_db_con*, CEquipItemSFAgentSearchItemAddSpeed26_ptr);
        using CEquipItemSFAgentSetSFCont28_ptr = void (WINAPIV*)(struct CEquipItemSFAgent*, int, struct _sf_continous*);
        using CEquipItemSFAgentSetSFCont28_clbk = void (WINAPIV*)(struct CEquipItemSFAgent*, int, struct _sf_continous*, CEquipItemSFAgentSetSFCont28_ptr);
        using CEquipItemSFAgentStartContSF30_ptr = void (WINAPIV*)(struct CEquipItemSFAgent*, struct _sf_continous*);
        using CEquipItemSFAgentStartContSF30_clbk = void (WINAPIV*)(struct CEquipItemSFAgent*, struct _sf_continous*, CEquipItemSFAgentStartContSF30_ptr);
        using CEquipItemSFAgentdtor_CEquipItemSFAgent32_ptr = void (WINAPIV*)(struct CEquipItemSFAgent*);
        using CEquipItemSFAgentdtor_CEquipItemSFAgent32_clbk = void (WINAPIV*)(struct CEquipItemSFAgent*, CEquipItemSFAgentdtor_CEquipItemSFAgent32_ptr);
        
        using CEquipItemSFAgent___requireSlotInit2_ptr = void (WINAPIV*)(struct CEquipItemSFAgent::_requireSlot*);
        using CEquipItemSFAgent___requireSlotInit2_clbk = void (WINAPIV*)(struct CEquipItemSFAgent::_requireSlot*, CEquipItemSFAgent___requireSlotInit2_ptr);
        using CEquipItemSFAgent___requireSlotctor__requireSlot4_ptr = void (WINAPIV*)(struct CEquipItemSFAgent::_requireSlot*);
        using CEquipItemSFAgent___requireSlotctor__requireSlot4_clbk = void (WINAPIV*)(struct CEquipItemSFAgent::_requireSlot*, CEquipItemSFAgent___requireSlotctor__requireSlot4_ptr);
        
    }; // end namespace info
END_ATF_NAMESPACE
