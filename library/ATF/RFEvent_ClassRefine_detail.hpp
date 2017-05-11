// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "RFEvent_ClassRefine_info.hpp"


START_ATF_NAMESPACE
    namespace detail
    {
        info::RFEvent_ClassRefineCanDoEvent2_ptr RFEvent_ClassRefineCanDoEvent2_next(nullptr);
        info::RFEvent_ClassRefineCanDoEvent2_clbk RFEvent_ClassRefineCanDoEvent2_user(nullptr);
        info::RFEvent_ClassRefineCheckRefineEventData4_ptr RFEvent_ClassRefineCheckRefineEventData4_next(nullptr);
        info::RFEvent_ClassRefineCheckRefineEventData4_clbk RFEvent_ClassRefineCheckRefineEventData4_user(nullptr);
        info::RFEvent_ClassRefineDoEvent6_ptr RFEvent_ClassRefineDoEvent6_next(nullptr);
        info::RFEvent_ClassRefineDoEvent6_clbk RFEvent_ClassRefineDoEvent6_user(nullptr);
        info::RFEvent_ClassRefineGetPlayerState8_ptr RFEvent_ClassRefineGetPlayerState8_next(nullptr);
        info::RFEvent_ClassRefineGetPlayerState8_clbk RFEvent_ClassRefineGetPlayerState8_user(nullptr);
        info::RFEvent_ClassRefineInitialzie10_ptr RFEvent_ClassRefineInitialzie10_next(nullptr);
        info::RFEvent_ClassRefineInitialzie10_clbk RFEvent_ClassRefineInitialzie10_user(nullptr);
        info::RFEvent_ClassRefineIsDbUpdate12_ptr RFEvent_ClassRefineIsDbUpdate12_next(nullptr);
        info::RFEvent_ClassRefineIsDbUpdate12_clbk RFEvent_ClassRefineIsDbUpdate12_user(nullptr);
        info::RFEvent_ClassRefineIsEnable14_ptr RFEvent_ClassRefineIsEnable14_next(nullptr);
        info::RFEvent_ClassRefineIsEnable14_clbk RFEvent_ClassRefineIsEnable14_user(nullptr);
        info::RFEvent_ClassRefineLoop16_ptr RFEvent_ClassRefineLoop16_next(nullptr);
        info::RFEvent_ClassRefineLoop16_clbk RFEvent_ClassRefineLoop16_user(nullptr);
        info::RFEvent_ClassRefinector_RFEvent_ClassRefine18_ptr RFEvent_ClassRefinector_RFEvent_ClassRefine18_next(nullptr);
        info::RFEvent_ClassRefinector_RFEvent_ClassRefine18_clbk RFEvent_ClassRefinector_RFEvent_ClassRefine18_user(nullptr);
        info::RFEvent_ClassRefineReadClassRefineEventInfo20_ptr RFEvent_ClassRefineReadClassRefineEventInfo20_next(nullptr);
        info::RFEvent_ClassRefineReadClassRefineEventInfo20_clbk RFEvent_ClassRefineReadClassRefineEventInfo20_user(nullptr);
        info::RFEvent_ClassRefineResetRefineData22_ptr RFEvent_ClassRefineResetRefineData22_next(nullptr);
        info::RFEvent_ClassRefineResetRefineData22_clbk RFEvent_ClassRefineResetRefineData22_user(nullptr);
        info::RFEvent_ClassRefineSetEvent24_ptr RFEvent_ClassRefineSetEvent24_next(nullptr);
        info::RFEvent_ClassRefineSetEvent24_clbk RFEvent_ClassRefineSetEvent24_user(nullptr);
        info::RFEvent_ClassRefineSetPlayerState26_ptr RFEvent_ClassRefineSetPlayerState26_next(nullptr);
        info::RFEvent_ClassRefineSetPlayerState26_clbk RFEvent_ClassRefineSetPlayerState26_user(nullptr);
        info::RFEvent_ClassRefinedtor_RFEvent_ClassRefine31_ptr RFEvent_ClassRefinedtor_RFEvent_ClassRefine31_next(nullptr);
        info::RFEvent_ClassRefinedtor_RFEvent_ClassRefine31_clbk RFEvent_ClassRefinedtor_RFEvent_ClassRefine31_user(nullptr);
        
        int RFEvent_ClassRefineCanDoEvent2_wrapper(struct RFEvent_ClassRefine* _this, struct CPlayer* pOne)
        {
           return RFEvent_ClassRefineCanDoEvent2_user(_this, pOne, RFEvent_ClassRefineCanDoEvent2_next);
        };
        bool RFEvent_ClassRefineCheckRefineEventData4_wrapper(struct RFEvent_ClassRefine* _this)
        {
           return RFEvent_ClassRefineCheckRefineEventData4_user(_this, RFEvent_ClassRefineCheckRefineEventData4_next);
        };
        int RFEvent_ClassRefineDoEvent6_wrapper(struct RFEvent_ClassRefine* _this, struct CPlayer* pOne)
        {
           return RFEvent_ClassRefineDoEvent6_user(_this, pOne, RFEvent_ClassRefineDoEvent6_next);
        };
        char* RFEvent_ClassRefineGetPlayerState8_wrapper(struct RFEvent_ClassRefine* _this, unsigned int nIdx, unsigned int nAvator)
        {
           return RFEvent_ClassRefineGetPlayerState8_user(_this, nIdx, nAvator, RFEvent_ClassRefineGetPlayerState8_next);
        };
        bool RFEvent_ClassRefineInitialzie10_wrapper(struct RFEvent_ClassRefine* _this)
        {
           return RFEvent_ClassRefineInitialzie10_user(_this, RFEvent_ClassRefineInitialzie10_next);
        };
        bool RFEvent_ClassRefineIsDbUpdate12_wrapper(struct RFEvent_ClassRefine* _this, unsigned int nIdx)
        {
           return RFEvent_ClassRefineIsDbUpdate12_user(_this, nIdx, RFEvent_ClassRefineIsDbUpdate12_next);
        };
        bool RFEvent_ClassRefineIsEnable14_wrapper(struct RFEvent_ClassRefine* _this)
        {
           return RFEvent_ClassRefineIsEnable14_user(_this, RFEvent_ClassRefineIsEnable14_next);
        };
        void RFEvent_ClassRefineLoop16_wrapper(struct RFEvent_ClassRefine* _this)
        {
           RFEvent_ClassRefineLoop16_user(_this, RFEvent_ClassRefineLoop16_next);
        };
        void RFEvent_ClassRefinector_RFEvent_ClassRefine18_wrapper(struct RFEvent_ClassRefine* _this)
        {
           RFEvent_ClassRefinector_RFEvent_ClassRefine18_user(_this, RFEvent_ClassRefinector_RFEvent_ClassRefine18_next);
        };
        void RFEvent_ClassRefineReadClassRefineEventInfo20_wrapper(struct RFEvent_ClassRefine* _this)
        {
           RFEvent_ClassRefineReadClassRefineEventInfo20_user(_this, RFEvent_ClassRefineReadClassRefineEventInfo20_next);
        };
        void RFEvent_ClassRefineResetRefineData22_wrapper(struct RFEvent_ClassRefine* _this)
        {
           RFEvent_ClassRefineResetRefineData22_user(_this, RFEvent_ClassRefineResetRefineData22_next);
        };
        bool RFEvent_ClassRefineSetEvent24_wrapper(struct RFEvent_ClassRefine* _this, char* p, int size, bool bInit)
        {
           return RFEvent_ClassRefineSetEvent24_user(_this, p, size, bInit, RFEvent_ClassRefineSetEvent24_next);
        };
        bool RFEvent_ClassRefineSetPlayerState26_wrapper(struct RFEvent_ClassRefine* _this, void* p, int size)
        {
           return RFEvent_ClassRefineSetPlayerState26_user(_this, p, size, RFEvent_ClassRefineSetPlayerState26_next);
        };
        void RFEvent_ClassRefinedtor_RFEvent_ClassRefine31_wrapper(struct RFEvent_ClassRefine* _this)
        {
           RFEvent_ClassRefinedtor_RFEvent_ClassRefine31_user(_this, RFEvent_ClassRefinedtor_RFEvent_ClassRefine31_next);
        };
        
        hook_record RFEvent_ClassRefine_functions[] = {
        {   (LPVOID)0x140328bc0L,
            (LPVOID *)&RFEvent_ClassRefineCanDoEvent2_user,
            (LPVOID *)&RFEvent_ClassRefineCanDoEvent2_next,
            (LPVOID)cast_pointer_function(RFEvent_ClassRefineCanDoEvent2_wrapper),
            (LPVOID)cast_pointer_function((int(RFEvent_ClassRefine::*)(struct CPlayer*))&RFEvent_ClassRefine::CanDoEvent) },
        {   (LPVOID)0x140328e30L,
            (LPVOID *)&RFEvent_ClassRefineCheckRefineEventData4_user,
            (LPVOID *)&RFEvent_ClassRefineCheckRefineEventData4_next,
            (LPVOID)cast_pointer_function(RFEvent_ClassRefineCheckRefineEventData4_wrapper),
            (LPVOID)cast_pointer_function((bool(RFEvent_ClassRefine::*)())&RFEvent_ClassRefine::CheckRefineEventData) },
        {   (LPVOID)0x140328cd0L,
            (LPVOID *)&RFEvent_ClassRefineDoEvent6_user,
            (LPVOID *)&RFEvent_ClassRefineDoEvent6_next,
            (LPVOID)cast_pointer_function(RFEvent_ClassRefineDoEvent6_wrapper),
            (LPVOID)cast_pointer_function((int(RFEvent_ClassRefine::*)(struct CPlayer*))&RFEvent_ClassRefine::DoEvent) },
        {   (LPVOID)0x1403296a0L,
            (LPVOID *)&RFEvent_ClassRefineGetPlayerState8_user,
            (LPVOID *)&RFEvent_ClassRefineGetPlayerState8_next,
            (LPVOID)cast_pointer_function(RFEvent_ClassRefineGetPlayerState8_wrapper),
            (LPVOID)cast_pointer_function((char*(RFEvent_ClassRefine::*)(unsigned int, unsigned int))&RFEvent_ClassRefine::GetPlayerState) },
        {   (LPVOID)0x1403287e0L,
            (LPVOID *)&RFEvent_ClassRefineInitialzie10_user,
            (LPVOID *)&RFEvent_ClassRefineInitialzie10_next,
            (LPVOID)cast_pointer_function(RFEvent_ClassRefineInitialzie10_wrapper),
            (LPVOID)cast_pointer_function((bool(RFEvent_ClassRefine::*)())&RFEvent_ClassRefine::Initialzie) },
        {   (LPVOID)0x140329600L,
            (LPVOID *)&RFEvent_ClassRefineIsDbUpdate12_user,
            (LPVOID *)&RFEvent_ClassRefineIsDbUpdate12_next,
            (LPVOID)cast_pointer_function(RFEvent_ClassRefineIsDbUpdate12_wrapper),
            (LPVOID)cast_pointer_function((bool(RFEvent_ClassRefine::*)(unsigned int))&RFEvent_ClassRefine::IsDbUpdate) },
        {   (LPVOID)0x1403295e0L,
            (LPVOID *)&RFEvent_ClassRefineIsEnable14_user,
            (LPVOID *)&RFEvent_ClassRefineIsEnable14_next,
            (LPVOID)cast_pointer_function(RFEvent_ClassRefineIsEnable14_wrapper),
            (LPVOID)cast_pointer_function((bool(RFEvent_ClassRefine::*)())&RFEvent_ClassRefine::IsEnable) },
        {   (LPVOID)0x140328da0L,
            (LPVOID *)&RFEvent_ClassRefineLoop16_user,
            (LPVOID *)&RFEvent_ClassRefineLoop16_next,
            (LPVOID)cast_pointer_function(RFEvent_ClassRefineLoop16_wrapper),
            (LPVOID)cast_pointer_function((void(RFEvent_ClassRefine::*)())&RFEvent_ClassRefine::Loop) },
        {   (LPVOID)0x1403286b0L,
            (LPVOID *)&RFEvent_ClassRefinector_RFEvent_ClassRefine18_user,
            (LPVOID *)&RFEvent_ClassRefinector_RFEvent_ClassRefine18_next,
            (LPVOID)cast_pointer_function(RFEvent_ClassRefinector_RFEvent_ClassRefine18_wrapper),
            (LPVOID)cast_pointer_function((void(RFEvent_ClassRefine::*)())&RFEvent_ClassRefine::ctor_RFEvent_ClassRefine) },
        {   (LPVOID)0x140329040L,
            (LPVOID *)&RFEvent_ClassRefineReadClassRefineEventInfo20_user,
            (LPVOID *)&RFEvent_ClassRefineReadClassRefineEventInfo20_next,
            (LPVOID)cast_pointer_function(RFEvent_ClassRefineReadClassRefineEventInfo20_wrapper),
            (LPVOID)cast_pointer_function((void(RFEvent_ClassRefine::*)())&RFEvent_ClassRefine::ReadClassRefineEventInfo) },
        {   (LPVOID)0x140328f70L,
            (LPVOID *)&RFEvent_ClassRefineResetRefineData22_user,
            (LPVOID *)&RFEvent_ClassRefineResetRefineData22_next,
            (LPVOID)cast_pointer_function(RFEvent_ClassRefineResetRefineData22_wrapper),
            (LPVOID)cast_pointer_function((void(RFEvent_ClassRefine::*)())&RFEvent_ClassRefine::ResetRefineData) },
        {   (LPVOID)0x140328950L,
            (LPVOID *)&RFEvent_ClassRefineSetEvent24_user,
            (LPVOID *)&RFEvent_ClassRefineSetEvent24_next,
            (LPVOID)cast_pointer_function(RFEvent_ClassRefineSetEvent24_wrapper),
            (LPVOID)cast_pointer_function((bool(RFEvent_ClassRefine::*)(char*, int, bool))&RFEvent_ClassRefine::SetEvent) },
        {   (LPVOID)0x140328a60L,
            (LPVOID *)&RFEvent_ClassRefineSetPlayerState26_user,
            (LPVOID *)&RFEvent_ClassRefineSetPlayerState26_next,
            (LPVOID)cast_pointer_function(RFEvent_ClassRefineSetPlayerState26_wrapper),
            (LPVOID)cast_pointer_function((bool(RFEvent_ClassRefine::*)(void*, int))&RFEvent_ClassRefine::SetPlayerState) },
        {   (LPVOID)0x140328750L,
            (LPVOID *)&RFEvent_ClassRefinedtor_RFEvent_ClassRefine31_user,
            (LPVOID *)&RFEvent_ClassRefinedtor_RFEvent_ClassRefine31_next,
            (LPVOID)cast_pointer_function(RFEvent_ClassRefinedtor_RFEvent_ClassRefine31_wrapper),
            (LPVOID)cast_pointer_function((void(RFEvent_ClassRefine::*)())&RFEvent_ClassRefine::dtor_RFEvent_ClassRefine) },
        
        };
        
    }; // end namespace detail
END_ATF_NAMESPACE
