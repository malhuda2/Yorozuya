// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "_dh_mission_mgr_info.hpp"


START_ATF_NAMESPACE
    namespace detail
    {
        info::_dh_mission_mgrGetLimMSecTime2_ptr _dh_mission_mgrGetLimMSecTime2_next(nullptr);
        info::_dh_mission_mgrGetLimMSecTime2_clbk _dh_mission_mgrGetLimMSecTime2_user(nullptr);
        info::_dh_mission_mgrGetMissionCont4_ptr _dh_mission_mgrGetMissionCont4_next(nullptr);
        info::_dh_mission_mgrGetMissionCont4_clbk _dh_mission_mgrGetMissionCont4_user(nullptr);
        info::_dh_mission_mgrInit6_ptr _dh_mission_mgrInit6_next(nullptr);
        info::_dh_mission_mgrInit6_clbk _dh_mission_mgrInit6_user(nullptr);
        info::_dh_mission_mgrIsOpenPortal8_ptr _dh_mission_mgrIsOpenPortal8_next(nullptr);
        info::_dh_mission_mgrIsOpenPortal8_clbk _dh_mission_mgrIsOpenPortal8_user(nullptr);
        info::_dh_mission_mgrNextMission10_ptr _dh_mission_mgrNextMission10_next(nullptr);
        info::_dh_mission_mgrNextMission10_clbk _dh_mission_mgrNextMission10_user(nullptr);
        info::_dh_mission_mgrOpenPortal12_ptr _dh_mission_mgrOpenPortal12_next(nullptr);
        info::_dh_mission_mgrOpenPortal12_clbk _dh_mission_mgrOpenPortal12_user(nullptr);
        info::_dh_mission_mgrSearchCurMissionCont14_ptr _dh_mission_mgrSearchCurMissionCont14_next(nullptr);
        info::_dh_mission_mgrSearchCurMissionCont14_clbk _dh_mission_mgrSearchCurMissionCont14_user(nullptr);
        info::_dh_mission_mgrctor__dh_mission_mgr16_ptr _dh_mission_mgrctor__dh_mission_mgr16_next(nullptr);
        info::_dh_mission_mgrctor__dh_mission_mgr16_clbk _dh_mission_mgrctor__dh_mission_mgr16_user(nullptr);
        
        info::_dh_mission_mgr___countInit2_ptr _dh_mission_mgr___countInit2_next(nullptr);
        info::_dh_mission_mgr___countInit2_clbk _dh_mission_mgr___countInit2_user(nullptr);
        
        info::_dh_mission_mgr___if_changeInit2_ptr _dh_mission_mgr___if_changeInit2_next(nullptr);
        info::_dh_mission_mgr___if_changeInit2_clbk _dh_mission_mgr___if_changeInit2_user(nullptr);
        info::_dh_mission_mgr___if_changeIsFill4_ptr _dh_mission_mgr___if_changeIsFill4_next(nullptr);
        info::_dh_mission_mgr___if_changeIsFill4_clbk _dh_mission_mgr___if_changeIsFill4_user(nullptr);
        info::_dh_mission_mgr___if_changector__if_change6_ptr _dh_mission_mgr___if_changector__if_change6_next(nullptr);
        info::_dh_mission_mgr___if_changector__if_change6_clbk _dh_mission_mgr___if_changector__if_change6_user(nullptr);
        
        info::_dh_mission_mgr___respawn_monster_actctor__respawn_monster_act2_ptr _dh_mission_mgr___respawn_monster_actctor__respawn_monster_act2_next(nullptr);
        info::_dh_mission_mgr___respawn_monster_actctor__respawn_monster_act2_clbk _dh_mission_mgr___respawn_monster_actctor__respawn_monster_act2_user(nullptr);
        info::_dh_mission_mgr___respawn_monster_actinit4_ptr _dh_mission_mgr___respawn_monster_actinit4_next(nullptr);
        info::_dh_mission_mgr___respawn_monster_actinit4_clbk _dh_mission_mgr___respawn_monster_actinit4_user(nullptr);
        info::_dh_mission_mgr___respawn_monster_actset6_ptr _dh_mission_mgr___respawn_monster_actset6_next(nullptr);
        info::_dh_mission_mgr___respawn_monster_actset6_clbk _dh_mission_mgr___respawn_monster_actset6_user(nullptr);
        
        unsigned int _dh_mission_mgrGetLimMSecTime2_wrapper(struct _dh_mission_mgr* _this)
        {
           return _dh_mission_mgrGetLimMSecTime2_user(_this, _dh_mission_mgrGetLimMSecTime2_next);
        };
        struct _dh_mission_mgr::_if_change* _dh_mission_mgrGetMissionCont4_wrapper(struct _dh_mission_mgr* _this, struct _dh_mission_setup* pMsSetup)
        {
           return _dh_mission_mgrGetMissionCont4_user(_this, pMsSetup, _dh_mission_mgrGetMissionCont4_next);
        };
        void _dh_mission_mgrInit6_wrapper(struct _dh_mission_mgr* _this)
        {
           _dh_mission_mgrInit6_user(_this, _dh_mission_mgrInit6_next);
        };
        bool _dh_mission_mgrIsOpenPortal8_wrapper(struct _dh_mission_mgr* _this, int nIndex)
        {
           return _dh_mission_mgrIsOpenPortal8_user(_this, nIndex, _dh_mission_mgrIsOpenPortal8_next);
        };
        void _dh_mission_mgrNextMission10_wrapper(struct _dh_mission_mgr* _this, struct _dh_mission_setup* pNextMssionPtr)
        {
           _dh_mission_mgrNextMission10_user(_this, pNextMssionPtr, _dh_mission_mgrNextMission10_next);
        };
        void _dh_mission_mgrOpenPortal12_wrapper(struct _dh_mission_mgr* _this, int nIndex)
        {
           _dh_mission_mgrOpenPortal12_user(_this, nIndex, _dh_mission_mgrOpenPortal12_next);
        };
        struct _dh_mission_mgr::_if_change* _dh_mission_mgrSearchCurMissionCont14_wrapper(struct _dh_mission_mgr* _this)
        {
           return _dh_mission_mgrSearchCurMissionCont14_user(_this, _dh_mission_mgrSearchCurMissionCont14_next);
        };
        void _dh_mission_mgrctor__dh_mission_mgr16_wrapper(struct _dh_mission_mgr* _this)
        {
           _dh_mission_mgrctor__dh_mission_mgr16_user(_this, _dh_mission_mgrctor__dh_mission_mgr16_next);
        };
        
        void _dh_mission_mgr___countInit2_wrapper(struct _dh_mission_mgr::_count* _this)
        {
           _dh_mission_mgr___countInit2_user(_this, _dh_mission_mgr___countInit2_next);
        };
        
        void _dh_mission_mgr___if_changeInit2_wrapper(struct _dh_mission_mgr::_if_change* _this)
        {
           _dh_mission_mgr___if_changeInit2_user(_this, _dh_mission_mgr___if_changeInit2_next);
        };
        bool _dh_mission_mgr___if_changeIsFill4_wrapper(struct _dh_mission_mgr::_if_change* _this)
        {
           return _dh_mission_mgr___if_changeIsFill4_user(_this, _dh_mission_mgr___if_changeIsFill4_next);
        };
        void _dh_mission_mgr___if_changector__if_change6_wrapper(struct _dh_mission_mgr::_if_change* _this)
        {
           _dh_mission_mgr___if_changector__if_change6_user(_this, _dh_mission_mgr___if_changector__if_change6_next);
        };
        
        void _dh_mission_mgr___respawn_monster_actctor__respawn_monster_act2_wrapper(struct _dh_mission_mgr::_respawn_monster_act* _this)
        {
           _dh_mission_mgr___respawn_monster_actctor__respawn_monster_act2_user(_this, _dh_mission_mgr___respawn_monster_actctor__respawn_monster_act2_next);
        };
        void _dh_mission_mgr___respawn_monster_actinit4_wrapper(struct _dh_mission_mgr::_respawn_monster_act* _this)
        {
           _dh_mission_mgr___respawn_monster_actinit4_user(_this, _dh_mission_mgr___respawn_monster_actinit4_next);
        };
        void _dh_mission_mgr___respawn_monster_actset6_wrapper(struct _dh_mission_mgr::_respawn_monster_act* _this, struct __respawn_monster* data)
        {
           _dh_mission_mgr___respawn_monster_actset6_user(_this, data, _dh_mission_mgr___respawn_monster_actset6_next);
        };
        
        hook_record _dh_mission_mgr_functions[] = {
        {   (LPVOID)0x14026ef40L,
            (LPVOID *)&_dh_mission_mgrGetLimMSecTime2_user,
            (LPVOID *)&_dh_mission_mgrGetLimMSecTime2_next,
            (LPVOID)cast_pointer_function(_dh_mission_mgrGetLimMSecTime2_wrapper),
            (LPVOID)cast_pointer_function((unsigned int(_dh_mission_mgr::*)())&_dh_mission_mgr::GetLimMSecTime) },
        {   (LPVOID)0x14026f220L,
            (LPVOID *)&_dh_mission_mgrGetMissionCont4_user,
            (LPVOID *)&_dh_mission_mgrGetMissionCont4_next,
            (LPVOID)cast_pointer_function(_dh_mission_mgrGetMissionCont4_wrapper),
            (LPVOID)cast_pointer_function((struct _dh_mission_mgr::_if_change*(_dh_mission_mgr::*)(struct _dh_mission_setup*))&_dh_mission_mgr::GetMissionCont) },
        {   (LPVOID)0x14026ed50L,
            (LPVOID *)&_dh_mission_mgrInit6_user,
            (LPVOID *)&_dh_mission_mgrInit6_next,
            (LPVOID)cast_pointer_function(_dh_mission_mgrInit6_wrapper),
            (LPVOID)cast_pointer_function((void(_dh_mission_mgr::*)())&_dh_mission_mgr::Init) },
        {   (LPVOID)0x14026f4a0L,
            (LPVOID *)&_dh_mission_mgrIsOpenPortal8_user,
            (LPVOID *)&_dh_mission_mgrIsOpenPortal8_next,
            (LPVOID)cast_pointer_function(_dh_mission_mgrIsOpenPortal8_wrapper),
            (LPVOID)cast_pointer_function((bool(_dh_mission_mgr::*)(int))&_dh_mission_mgr::IsOpenPortal) },
        {   (LPVOID)0x14026efc0L,
            (LPVOID *)&_dh_mission_mgrNextMission10_user,
            (LPVOID *)&_dh_mission_mgrNextMission10_next,
            (LPVOID)cast_pointer_function(_dh_mission_mgrNextMission10_wrapper),
            (LPVOID)cast_pointer_function((void(_dh_mission_mgr::*)(struct _dh_mission_setup*))&_dh_mission_mgr::NextMission) },
        {   (LPVOID)0x1400c2d10L,
            (LPVOID *)&_dh_mission_mgrOpenPortal12_user,
            (LPVOID *)&_dh_mission_mgrOpenPortal12_next,
            (LPVOID)cast_pointer_function(_dh_mission_mgrOpenPortal12_wrapper),
            (LPVOID)cast_pointer_function((void(_dh_mission_mgr::*)(int))&_dh_mission_mgr::OpenPortal) },
        {   (LPVOID)0x14026f580L,
            (LPVOID *)&_dh_mission_mgrSearchCurMissionCont14_user,
            (LPVOID *)&_dh_mission_mgrSearchCurMissionCont14_next,
            (LPVOID)cast_pointer_function(_dh_mission_mgrSearchCurMissionCont14_wrapper),
            (LPVOID)cast_pointer_function((struct _dh_mission_mgr::_if_change*(_dh_mission_mgr::*)())&_dh_mission_mgr::SearchCurMissionCont) },
        {   (LPVOID)0x14026eb70L,
            (LPVOID *)&_dh_mission_mgrctor__dh_mission_mgr16_user,
            (LPVOID *)&_dh_mission_mgrctor__dh_mission_mgr16_next,
            (LPVOID)cast_pointer_function(_dh_mission_mgrctor__dh_mission_mgr16_wrapper),
            (LPVOID)cast_pointer_function((void(_dh_mission_mgr::*)())&_dh_mission_mgr::ctor__dh_mission_mgr) },
        
        {   (LPVOID)0x14026eea0L,
            (LPVOID *)&_dh_mission_mgr___countInit2_user,
            (LPVOID *)&_dh_mission_mgr___countInit2_next,
            (LPVOID)cast_pointer_function(_dh_mission_mgr___countInit2_wrapper),
            (LPVOID)cast_pointer_function((void(_dh_mission_mgr::_count::*)())&_dh_mission_mgr::_count::Init) },
        
        {   (LPVOID)0x14026ec70L,
            (LPVOID *)&_dh_mission_mgr___if_changeInit2_user,
            (LPVOID *)&_dh_mission_mgr___if_changeInit2_next,
            (LPVOID)cast_pointer_function(_dh_mission_mgr___if_changeInit2_wrapper),
            (LPVOID)cast_pointer_function((void(_dh_mission_mgr::_if_change::*)())&_dh_mission_mgr::_if_change::Init) },
        {   (LPVOID)0x14026f320L,
            (LPVOID *)&_dh_mission_mgr___if_changeIsFill4_user,
            (LPVOID *)&_dh_mission_mgr___if_changeIsFill4_next,
            (LPVOID)cast_pointer_function(_dh_mission_mgr___if_changeIsFill4_wrapper),
            (LPVOID)cast_pointer_function((bool(_dh_mission_mgr::_if_change::*)())&_dh_mission_mgr::_if_change::IsFill) },
        {   (LPVOID)0x14026ec20L,
            (LPVOID *)&_dh_mission_mgr___if_changector__if_change6_user,
            (LPVOID *)&_dh_mission_mgr___if_changector__if_change6_next,
            (LPVOID)cast_pointer_function(_dh_mission_mgr___if_changector__if_change6_wrapper),
            (LPVOID)cast_pointer_function((void(_dh_mission_mgr::_if_change::*)())&_dh_mission_mgr::_if_change::ctor__if_change) },
        
        {   (LPVOID)0x14026ecb0L,
            (LPVOID *)&_dh_mission_mgr___respawn_monster_actctor__respawn_monster_act2_user,
            (LPVOID *)&_dh_mission_mgr___respawn_monster_actctor__respawn_monster_act2_next,
            (LPVOID)cast_pointer_function(_dh_mission_mgr___respawn_monster_actctor__respawn_monster_act2_wrapper),
            (LPVOID)cast_pointer_function((void(_dh_mission_mgr::_respawn_monster_act::*)())&_dh_mission_mgr::_respawn_monster_act::ctor__respawn_monster_act) },
        {   (LPVOID)0x14026ed00L,
            (LPVOID *)&_dh_mission_mgr___respawn_monster_actinit4_user,
            (LPVOID *)&_dh_mission_mgr___respawn_monster_actinit4_next,
            (LPVOID)cast_pointer_function(_dh_mission_mgr___respawn_monster_actinit4_wrapper),
            (LPVOID)cast_pointer_function((void(_dh_mission_mgr::_respawn_monster_act::*)())&_dh_mission_mgr::_respawn_monster_act::init) },
        {   (LPVOID)0x14026f0f0L,
            (LPVOID *)&_dh_mission_mgr___respawn_monster_actset6_user,
            (LPVOID *)&_dh_mission_mgr___respawn_monster_actset6_next,
            (LPVOID)cast_pointer_function(_dh_mission_mgr___respawn_monster_actset6_wrapper),
            (LPVOID)cast_pointer_function((void(_dh_mission_mgr::_respawn_monster_act::*)(struct __respawn_monster*))&_dh_mission_mgr::_respawn_monster_act::set) },
        
        };
        
    }; // end namespace detail
END_ATF_NAMESPACE
