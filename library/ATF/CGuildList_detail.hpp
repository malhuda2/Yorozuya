// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "CGuildList_info.hpp"


START_ATF_NAMESPACE
    namespace detail
    {
        info::CGuildListAddList2_ptr CGuildListAddList2_next(nullptr);
        info::CGuildListAddList2_clbk CGuildListAddList2_user(nullptr);
        info::CGuildListctor_CGuildList4_ptr CGuildListctor_CGuildList4_next(nullptr);
        info::CGuildListctor_CGuildList4_clbk CGuildListctor_CGuildList4_user(nullptr);
        info::CGuildListInit6_ptr CGuildListInit6_next(nullptr);
        info::CGuildListInit6_clbk CGuildListInit6_user(nullptr);
        info::CGuildListSendList8_ptr CGuildListSendList8_next(nullptr);
        info::CGuildListSendList8_clbk CGuildListSendList8_user(nullptr);
        info::CGuildListSetGrade10_ptr CGuildListSetGrade10_next(nullptr);
        info::CGuildListSetGrade10_clbk CGuildListSetGrade10_user(nullptr);
        info::CGuildListSetGuildMaster12_ptr CGuildListSetGuildMaster12_next(nullptr);
        info::CGuildListSetGuildMaster12_clbk CGuildListSetGuildMaster12_user(nullptr);
        info::CGuildListdtor_CGuildList17_ptr CGuildListdtor_CGuildList17_next(nullptr);
        info::CGuildListdtor_CGuildList17_clbk CGuildListdtor_CGuildList17_user(nullptr);
        
        void CGuildListAddList2_wrapper(struct CGuildList* _this, char byRace, char byGrade, char* pwszGuildName, char* pwszMasterName)
        {
           CGuildListAddList2_user(_this, byRace, byGrade, pwszGuildName, pwszMasterName, CGuildListAddList2_next);
        };
        void CGuildListctor_CGuildList4_wrapper(struct CGuildList* _this)
        {
           CGuildListctor_CGuildList4_user(_this, CGuildListctor_CGuildList4_next);
        };
        bool CGuildListInit6_wrapper(struct CGuildList* _this)
        {
           return CGuildListInit6_user(_this, CGuildListInit6_next);
        };
        void CGuildListSendList8_wrapper(struct CGuildList* _this, uint16_t wIndex, char byRace, char byPage)
        {
           CGuildListSendList8_user(_this, wIndex, byRace, byPage, CGuildListSendList8_next);
        };
        void CGuildListSetGrade10_wrapper(struct CGuildList* _this, char byRace, char* pwszGuildName, char byGrade)
        {
           CGuildListSetGrade10_user(_this, byRace, pwszGuildName, byGrade, CGuildListSetGrade10_next);
        };
        void CGuildListSetGuildMaster12_wrapper(struct CGuildList* _this, char byRace, char* pwszGuildName, char* pwszMasterName)
        {
           CGuildListSetGuildMaster12_user(_this, byRace, pwszGuildName, pwszMasterName, CGuildListSetGuildMaster12_next);
        };
        void CGuildListdtor_CGuildList17_wrapper(struct CGuildList* _this)
        {
           CGuildListdtor_CGuildList17_user(_this, CGuildListdtor_CGuildList17_next);
        };
        
        hook_record CGuildList_functions[] = {
        {   (LPVOID)0x14025d900L,
            (LPVOID *)&CGuildListAddList2_user,
            (LPVOID *)&CGuildListAddList2_next,
            (LPVOID)cast_pointer_function(CGuildListAddList2_wrapper),
            (LPVOID)cast_pointer_function((void(CGuildList::*)(char, char, char*, char*))&CGuildList::AddList) },
        {   (LPVOID)0x14025d6b0L,
            (LPVOID *)&CGuildListctor_CGuildList4_user,
            (LPVOID *)&CGuildListctor_CGuildList4_next,
            (LPVOID)cast_pointer_function(CGuildListctor_CGuildList4_wrapper),
            (LPVOID)cast_pointer_function((void(CGuildList::*)())&CGuildList::ctor_CGuildList) },
        {   (LPVOID)0x14025d7d0L,
            (LPVOID *)&CGuildListInit6_user,
            (LPVOID *)&CGuildListInit6_next,
            (LPVOID)cast_pointer_function(CGuildListInit6_wrapper),
            (LPVOID)cast_pointer_function((bool(CGuildList::*)())&CGuildList::Init) },
        {   (LPVOID)0x14025db20L,
            (LPVOID *)&CGuildListSendList8_user,
            (LPVOID *)&CGuildListSendList8_next,
            (LPVOID)cast_pointer_function(CGuildListSendList8_wrapper),
            (LPVOID)cast_pointer_function((void(CGuildList::*)(uint16_t, char, char))&CGuildList::SendList) },
        {   (LPVOID)0x14025de20L,
            (LPVOID *)&CGuildListSetGrade10_user,
            (LPVOID *)&CGuildListSetGrade10_next,
            (LPVOID)cast_pointer_function(CGuildListSetGrade10_wrapper),
            (LPVOID)cast_pointer_function((void(CGuildList::*)(char, char*, char))&CGuildList::SetGrade) },
        {   (LPVOID)0x14025dcf0L,
            (LPVOID *)&CGuildListSetGuildMaster12_user,
            (LPVOID *)&CGuildListSetGuildMaster12_next,
            (LPVOID)cast_pointer_function(CGuildListSetGuildMaster12_wrapper),
            (LPVOID)cast_pointer_function((void(CGuildList::*)(char, char*, char*))&CGuildList::SetGuildMaster) },
        {   (LPVOID)0x14025d740L,
            (LPVOID *)&CGuildListdtor_CGuildList17_user,
            (LPVOID *)&CGuildListdtor_CGuildList17_next,
            (LPVOID)cast_pointer_function(CGuildListdtor_CGuildList17_wrapper),
            (LPVOID)cast_pointer_function((void(CGuildList::*)())&CGuildList::dtor_CGuildList) },
        
        };
        
    }; // end namespace detail
END_ATF_NAMESPACE
