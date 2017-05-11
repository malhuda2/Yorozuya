// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "CDarkHoleDungeonQuest_info.hpp"


START_ATF_NAMESPACE
    namespace detail
    {
        info::CDarkHoleDungeonQuestctor_CDarkHoleDungeonQuest2_ptr CDarkHoleDungeonQuestctor_CDarkHoleDungeonQuest2_next(nullptr);
        info::CDarkHoleDungeonQuestctor_CDarkHoleDungeonQuest2_clbk CDarkHoleDungeonQuestctor_CDarkHoleDungeonQuest2_user(nullptr);
        info::CDarkHoleDungeonQuestCanOpenChannel4_ptr CDarkHoleDungeonQuestCanOpenChannel4_next(nullptr);
        info::CDarkHoleDungeonQuestCanOpenChannel4_clbk CDarkHoleDungeonQuestCanOpenChannel4_user(nullptr);
        info::CDarkHoleDungeonQuestCheckQuestOnLoop6_ptr CDarkHoleDungeonQuestCheckQuestOnLoop6_next(nullptr);
        info::CDarkHoleDungeonQuestCheckQuestOnLoop6_clbk CDarkHoleDungeonQuestCheckQuestOnLoop6_user(nullptr);
        info::CDarkHoleDungeonQuestGetChannel8_ptr CDarkHoleDungeonQuestGetChannel8_next(nullptr);
        info::CDarkHoleDungeonQuestGetChannel8_clbk CDarkHoleDungeonQuestGetChannel8_user(nullptr);
        info::CDarkHoleDungeonQuestLoadDarkHoleQuest10_ptr CDarkHoleDungeonQuestLoadDarkHoleQuest10_next(nullptr);
        info::CDarkHoleDungeonQuestLoadDarkHoleQuest10_clbk CDarkHoleDungeonQuestLoadDarkHoleQuest10_user(nullptr);
        info::CDarkHoleDungeonQuestOpenChannel12_ptr CDarkHoleDungeonQuestOpenChannel12_next(nullptr);
        info::CDarkHoleDungeonQuestOpenChannel12_clbk CDarkHoleDungeonQuestOpenChannel12_user(nullptr);
        info::CDarkHoleDungeonQuestSearchEmptyDarkHoleChannel14_ptr CDarkHoleDungeonQuestSearchEmptyDarkHoleChannel14_next(nullptr);
        info::CDarkHoleDungeonQuestSearchEmptyDarkHoleChannel14_clbk CDarkHoleDungeonQuestSearchEmptyDarkHoleChannel14_user(nullptr);
        info::CDarkHoleDungeonQuestSearchEmptyDarkHoleLayer16_ptr CDarkHoleDungeonQuestSearchEmptyDarkHoleLayer16_next(nullptr);
        info::CDarkHoleDungeonQuestSearchEmptyDarkHoleLayer16_clbk CDarkHoleDungeonQuestSearchEmptyDarkHoleLayer16_user(nullptr);
        info::CDarkHoleDungeonQuestSearchOncePlayedChannel18_ptr CDarkHoleDungeonQuestSearchOncePlayedChannel18_next(nullptr);
        info::CDarkHoleDungeonQuestSearchOncePlayedChannel18_clbk CDarkHoleDungeonQuestSearchOncePlayedChannel18_user(nullptr);
        info::CDarkHoleDungeonQuestdtor_CDarkHoleDungeonQuest23_ptr CDarkHoleDungeonQuestdtor_CDarkHoleDungeonQuest23_next(nullptr);
        info::CDarkHoleDungeonQuestdtor_CDarkHoleDungeonQuest23_clbk CDarkHoleDungeonQuestdtor_CDarkHoleDungeonQuest23_user(nullptr);
        
        void CDarkHoleDungeonQuestctor_CDarkHoleDungeonQuest2_wrapper(struct CDarkHoleDungeonQuest* _this)
        {
           CDarkHoleDungeonQuestctor_CDarkHoleDungeonQuest2_user(_this, CDarkHoleDungeonQuestctor_CDarkHoleDungeonQuest2_next);
        };
        struct CDarkHoleChannel* CDarkHoleDungeonQuestCanOpenChannel4_wrapper(struct CDarkHoleDungeonQuest* _this, int nQuestIndex)
        {
           return CDarkHoleDungeonQuestCanOpenChannel4_user(_this, nQuestIndex, CDarkHoleDungeonQuestCanOpenChannel4_next);
        };
        void CDarkHoleDungeonQuestCheckQuestOnLoop6_wrapper(struct CDarkHoleDungeonQuest* _this)
        {
           CDarkHoleDungeonQuestCheckQuestOnLoop6_user(_this, CDarkHoleDungeonQuestCheckQuestOnLoop6_next);
        };
        struct CDarkHoleChannel* CDarkHoleDungeonQuestGetChannel8_wrapper(struct CDarkHoleDungeonQuest* _this, unsigned int dwChannelIndex)
        {
           return CDarkHoleDungeonQuestGetChannel8_user(_this, dwChannelIndex, CDarkHoleDungeonQuestGetChannel8_next);
        };
        bool CDarkHoleDungeonQuestLoadDarkHoleQuest10_wrapper(struct CDarkHoleDungeonQuest* _this)
        {
           return CDarkHoleDungeonQuestLoadDarkHoleQuest10_user(_this, CDarkHoleDungeonQuestLoadDarkHoleQuest10_next);
        };
        struct CDarkHoleChannel* CDarkHoleDungeonQuestOpenChannel12_wrapper(struct CDarkHoleDungeonQuest* _this, int nQuestIndex, struct CPlayer* pOpener, struct CDarkHole* pHoleObj)
        {
           return CDarkHoleDungeonQuestOpenChannel12_user(_this, nQuestIndex, pOpener, pHoleObj, CDarkHoleDungeonQuestOpenChannel12_next);
        };
        int CDarkHoleDungeonQuestSearchEmptyDarkHoleChannel14_wrapper(struct CDarkHoleDungeonQuest* _this)
        {
           return CDarkHoleDungeonQuestSearchEmptyDarkHoleChannel14_user(_this, CDarkHoleDungeonQuestSearchEmptyDarkHoleChannel14_next);
        };
        int CDarkHoleDungeonQuestSearchEmptyDarkHoleLayer16_wrapper(struct CDarkHoleDungeonQuest* _this, int nQuestIndex)
        {
           return CDarkHoleDungeonQuestSearchEmptyDarkHoleLayer16_user(_this, nQuestIndex, CDarkHoleDungeonQuestSearchEmptyDarkHoleLayer16_next);
        };
        struct CDarkHoleChannel* CDarkHoleDungeonQuestSearchOncePlayedChannel18_wrapper(struct CDarkHoleDungeonQuest* _this, unsigned int dwMemberSerial)
        {
           return CDarkHoleDungeonQuestSearchOncePlayedChannel18_user(_this, dwMemberSerial, CDarkHoleDungeonQuestSearchOncePlayedChannel18_next);
        };
        void CDarkHoleDungeonQuestdtor_CDarkHoleDungeonQuest23_wrapper(struct CDarkHoleDungeonQuest* _this)
        {
           CDarkHoleDungeonQuestdtor_CDarkHoleDungeonQuest23_user(_this, CDarkHoleDungeonQuestdtor_CDarkHoleDungeonQuest23_next);
        };
        
        hook_record CDarkHoleDungeonQuest_functions[] = {
        {   (LPVOID)0x140265eb0L,
            (LPVOID *)&CDarkHoleDungeonQuestctor_CDarkHoleDungeonQuest2_user,
            (LPVOID *)&CDarkHoleDungeonQuestctor_CDarkHoleDungeonQuest2_next,
            (LPVOID)cast_pointer_function(CDarkHoleDungeonQuestctor_CDarkHoleDungeonQuest2_wrapper),
            (LPVOID)cast_pointer_function((void(CDarkHoleDungeonQuest::*)())&CDarkHoleDungeonQuest::ctor_CDarkHoleDungeonQuest) },
        {   (LPVOID)0x140266440L,
            (LPVOID *)&CDarkHoleDungeonQuestCanOpenChannel4_user,
            (LPVOID *)&CDarkHoleDungeonQuestCanOpenChannel4_next,
            (LPVOID)cast_pointer_function(CDarkHoleDungeonQuestCanOpenChannel4_wrapper),
            (LPVOID)cast_pointer_function((struct CDarkHoleChannel*(CDarkHoleDungeonQuest::*)(int))&CDarkHoleDungeonQuest::CanOpenChannel) },
        {   (LPVOID)0x1402664e0L,
            (LPVOID *)&CDarkHoleDungeonQuestCheckQuestOnLoop6_user,
            (LPVOID *)&CDarkHoleDungeonQuestCheckQuestOnLoop6_next,
            (LPVOID)cast_pointer_function(CDarkHoleDungeonQuestCheckQuestOnLoop6_wrapper),
            (LPVOID)cast_pointer_function((void(CDarkHoleDungeonQuest::*)())&CDarkHoleDungeonQuest::CheckQuestOnLoop) },
        {   (LPVOID)0x140099510L,
            (LPVOID *)&CDarkHoleDungeonQuestGetChannel8_user,
            (LPVOID *)&CDarkHoleDungeonQuestGetChannel8_next,
            (LPVOID)cast_pointer_function(CDarkHoleDungeonQuestGetChannel8_wrapper),
            (LPVOID)cast_pointer_function((struct CDarkHoleChannel*(CDarkHoleDungeonQuest::*)(unsigned int))&CDarkHoleDungeonQuest::GetChannel) },
        {   (LPVOID)0x140266170L,
            (LPVOID *)&CDarkHoleDungeonQuestLoadDarkHoleQuest10_user,
            (LPVOID *)&CDarkHoleDungeonQuestLoadDarkHoleQuest10_next,
            (LPVOID)cast_pointer_function(CDarkHoleDungeonQuestLoadDarkHoleQuest10_wrapper),
            (LPVOID)cast_pointer_function((bool(CDarkHoleDungeonQuest::*)())&CDarkHoleDungeonQuest::LoadDarkHoleQuest) },
        {   (LPVOID)0x140266330L,
            (LPVOID *)&CDarkHoleDungeonQuestOpenChannel12_user,
            (LPVOID *)&CDarkHoleDungeonQuestOpenChannel12_next,
            (LPVOID)cast_pointer_function(CDarkHoleDungeonQuestOpenChannel12_wrapper),
            (LPVOID)cast_pointer_function((struct CDarkHoleChannel*(CDarkHoleDungeonQuest::*)(int, struct CPlayer*, struct CDarkHole*))&CDarkHoleDungeonQuest::OpenChannel) },
        {   (LPVOID)0x1402666d0L,
            (LPVOID *)&CDarkHoleDungeonQuestSearchEmptyDarkHoleChannel14_user,
            (LPVOID *)&CDarkHoleDungeonQuestSearchEmptyDarkHoleChannel14_next,
            (LPVOID)cast_pointer_function(CDarkHoleDungeonQuestSearchEmptyDarkHoleChannel14_wrapper),
            (LPVOID)cast_pointer_function((int(CDarkHoleDungeonQuest::*)())&CDarkHoleDungeonQuest::SearchEmptyDarkHoleChannel) },
        {   (LPVOID)0x140266760L,
            (LPVOID *)&CDarkHoleDungeonQuestSearchEmptyDarkHoleLayer16_user,
            (LPVOID *)&CDarkHoleDungeonQuestSearchEmptyDarkHoleLayer16_next,
            (LPVOID)cast_pointer_function(CDarkHoleDungeonQuestSearchEmptyDarkHoleLayer16_wrapper),
            (LPVOID)cast_pointer_function((int(CDarkHoleDungeonQuest::*)(int))&CDarkHoleDungeonQuest::SearchEmptyDarkHoleLayer) },
        {   (LPVOID)0x1402665c0L,
            (LPVOID *)&CDarkHoleDungeonQuestSearchOncePlayedChannel18_user,
            (LPVOID *)&CDarkHoleDungeonQuestSearchOncePlayedChannel18_next,
            (LPVOID)cast_pointer_function(CDarkHoleDungeonQuestSearchOncePlayedChannel18_wrapper),
            (LPVOID)cast_pointer_function((struct CDarkHoleChannel*(CDarkHoleDungeonQuest::*)(unsigned int))&CDarkHoleDungeonQuest::SearchOncePlayedChannel) },
        {   (LPVOID)0x140265fe0L,
            (LPVOID *)&CDarkHoleDungeonQuestdtor_CDarkHoleDungeonQuest23_user,
            (LPVOID *)&CDarkHoleDungeonQuestdtor_CDarkHoleDungeonQuest23_next,
            (LPVOID)cast_pointer_function(CDarkHoleDungeonQuestdtor_CDarkHoleDungeonQuest23_wrapper),
            (LPVOID)cast_pointer_function((void(CDarkHoleDungeonQuest::*)())&CDarkHoleDungeonQuest::dtor_CDarkHoleDungeonQuest) },
        
        };
        
    }; // end namespace detail
END_ATF_NAMESPACE
