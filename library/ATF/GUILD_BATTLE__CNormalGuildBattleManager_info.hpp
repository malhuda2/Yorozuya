// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "GUILD_BATTLE__CNormalGuildBattleManager.hpp"


START_ATF_NAMESPACE
    namespace GUILD_BATTLE
    {
        namespace info
        {
            using GUILD_BATTLE__CNormalGuildBattleManagerAdd2_ptr = char (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleManager*, struct CGuild*, struct CGuild*, unsigned int, unsigned int, char, unsigned int);
            using GUILD_BATTLE__CNormalGuildBattleManagerAdd2_clbk = char (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleManager*, struct CGuild*, struct CGuild*, unsigned int, unsigned int, char, unsigned int, GUILD_BATTLE__CNormalGuildBattleManagerAdd2_ptr);
            using GUILD_BATTLE__CNormalGuildBattleManagerAddComplete4_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleManager*, char, unsigned int);
            using GUILD_BATTLE__CNormalGuildBattleManagerAddComplete4_clbk = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleManager*, char, unsigned int, GUILD_BATTLE__CNormalGuildBattleManagerAddComplete4_ptr);
            using GUILD_BATTLE__CNormalGuildBattleManagerAddDefaultDBRecord6_ptr = bool (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleManager*);
            using GUILD_BATTLE__CNormalGuildBattleManagerAddDefaultDBRecord6_clbk = bool (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleManager*, GUILD_BATTLE__CNormalGuildBattleManagerAddDefaultDBRecord6_ptr);
            using GUILD_BATTLE__CNormalGuildBattleManagerctor_CNormalGuildBattleManager8_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleManager*);
            using GUILD_BATTLE__CNormalGuildBattleManagerctor_CNormalGuildBattleManager8_clbk = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleManager*, GUILD_BATTLE__CNormalGuildBattleManagerctor_CNormalGuildBattleManager8_ptr);
            using GUILD_BATTLE__CNormalGuildBattleManagerCheckGetGravityStone10_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleManager*, uint16_t, unsigned int, int, unsigned int, unsigned int);
            using GUILD_BATTLE__CNormalGuildBattleManagerCheckGetGravityStone10_clbk = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleManager*, uint16_t, unsigned int, int, unsigned int, unsigned int, GUILD_BATTLE__CNormalGuildBattleManagerCheckGetGravityStone10_ptr);
            using GUILD_BATTLE__CNormalGuildBattleManagerCheckGoal12_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleManager*, int, unsigned int, unsigned int, int);
            using GUILD_BATTLE__CNormalGuildBattleManagerCheckGoal12_clbk = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleManager*, int, unsigned int, unsigned int, int, GUILD_BATTLE__CNormalGuildBattleManagerCheckGoal12_ptr);
            using GUILD_BATTLE__CNormalGuildBattleManagerCheckTakeGravityStone14_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleManager*, int, int, unsigned int, unsigned int);
            using GUILD_BATTLE__CNormalGuildBattleManagerCheckTakeGravityStone14_clbk = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleManager*, int, int, unsigned int, unsigned int, GUILD_BATTLE__CNormalGuildBattleManagerCheckTakeGravityStone14_ptr);
            using GUILD_BATTLE__CNormalGuildBattleManagerClear16_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleManager*, struct GUILD_BATTLE::CNormalGuildBattle**);
            using GUILD_BATTLE__CNormalGuildBattleManagerClear16_clbk = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleManager*, struct GUILD_BATTLE::CNormalGuildBattle**, GUILD_BATTLE__CNormalGuildBattleManagerClear16_ptr);
            using GUILD_BATTLE__CNormalGuildBattleManagerClear18_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleManager*);
            using GUILD_BATTLE__CNormalGuildBattleManagerClear18_clbk = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleManager*, GUILD_BATTLE__CNormalGuildBattleManagerClear18_ptr);
            using GUILD_BATTLE__CNormalGuildBattleManagerDestroy20_ptr = void (WINAPIV*)();
            using GUILD_BATTLE__CNormalGuildBattleManagerDestroy20_clbk = void (WINAPIV*)(GUILD_BATTLE__CNormalGuildBattleManagerDestroy20_ptr);
            using GUILD_BATTLE__CNormalGuildBattleManagerDoDayChangedWork22_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleManager*);
            using GUILD_BATTLE__CNormalGuildBattleManagerDoDayChangedWork22_clbk = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleManager*, GUILD_BATTLE__CNormalGuildBattleManagerDoDayChangedWork22_ptr);
            using GUILD_BATTLE__CNormalGuildBattleManagerDropGravityStone24_ptr = char (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleManager*, unsigned int, unsigned int);
            using GUILD_BATTLE__CNormalGuildBattleManagerDropGravityStone24_clbk = char (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleManager*, unsigned int, unsigned int, GUILD_BATTLE__CNormalGuildBattleManagerDropGravityStone24_ptr);
            using GUILD_BATTLE__CNormalGuildBattleManagerFlip26_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleManager*);
            using GUILD_BATTLE__CNormalGuildBattleManagerFlip26_clbk = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleManager*, GUILD_BATTLE__CNormalGuildBattleManagerFlip26_ptr);
            using GUILD_BATTLE__CNormalGuildBattleManagerGetBattle28_ptr = struct GUILD_BATTLE::CNormalGuildBattle* (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleManager*, unsigned int);
            using GUILD_BATTLE__CNormalGuildBattleManagerGetBattle28_clbk = struct GUILD_BATTLE::CNormalGuildBattle* (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleManager*, unsigned int, GUILD_BATTLE__CNormalGuildBattleManagerGetBattle28_ptr);
            using GUILD_BATTLE__CNormalGuildBattleManagerGetBattleByGuildSerial30_ptr = struct GUILD_BATTLE::CNormalGuildBattle* (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleManager*, unsigned int);
            using GUILD_BATTLE__CNormalGuildBattleManagerGetBattleByGuildSerial30_clbk = struct GUILD_BATTLE::CNormalGuildBattle* (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleManager*, unsigned int, GUILD_BATTLE__CNormalGuildBattleManagerGetBattleByGuildSerial30_ptr);
            using GUILD_BATTLE__CNormalGuildBattleManagerInit32_ptr = bool (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleManager*);
            using GUILD_BATTLE__CNormalGuildBattleManagerInit32_clbk = bool (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleManager*, GUILD_BATTLE__CNormalGuildBattleManagerInit32_ptr);
            using GUILD_BATTLE__CNormalGuildBattleManagerInstance34_ptr = struct GUILD_BATTLE::CNormalGuildBattleManager* (WINAPIV*)();
            using GUILD_BATTLE__CNormalGuildBattleManagerInstance34_clbk = struct GUILD_BATTLE::CNormalGuildBattleManager* (WINAPIV*)(GUILD_BATTLE__CNormalGuildBattleManagerInstance34_ptr);
            using GUILD_BATTLE__CNormalGuildBattleManagerJoin36_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleManager*, int, unsigned int, unsigned int);
            using GUILD_BATTLE__CNormalGuildBattleManagerJoin36_clbk = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleManager*, int, unsigned int, unsigned int, GUILD_BATTLE__CNormalGuildBattleManagerJoin36_ptr);
            using GUILD_BATTLE__CNormalGuildBattleManagerJoinGuild38_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleManager*, int, unsigned int, unsigned int);
            using GUILD_BATTLE__CNormalGuildBattleManagerJoinGuild38_clbk = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleManager*, int, unsigned int, unsigned int, GUILD_BATTLE__CNormalGuildBattleManagerJoinGuild38_ptr);
            using GUILD_BATTLE__CNormalGuildBattleManagerKill40_ptr = int (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleManager*, unsigned int, unsigned int, unsigned int);
            using GUILD_BATTLE__CNormalGuildBattleManagerKill40_clbk = int (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleManager*, unsigned int, unsigned int, unsigned int, GUILD_BATTLE__CNormalGuildBattleManagerKill40_ptr);
            using GUILD_BATTLE__CNormalGuildBattleManagerLeaveGuild42_ptr = char (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleManager*, struct CPlayer*);
            using GUILD_BATTLE__CNormalGuildBattleManagerLeaveGuild42_clbk = char (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleManager*, struct CPlayer*, GUILD_BATTLE__CNormalGuildBattleManagerLeaveGuild42_ptr);
            using GUILD_BATTLE__CNormalGuildBattleManagerLoad44_ptr = bool (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleManager*, bool, unsigned int, struct GUILD_BATTLE::CNormalGuildBattle**);
            using GUILD_BATTLE__CNormalGuildBattleManagerLoad44_clbk = bool (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleManager*, bool, unsigned int, struct GUILD_BATTLE::CNormalGuildBattle**, GUILD_BATTLE__CNormalGuildBattleManagerLoad44_ptr);
            using GUILD_BATTLE__CNormalGuildBattleManagerLoad46_ptr = bool (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleManager*, int, unsigned int, int, int, int, int);
            using GUILD_BATTLE__CNormalGuildBattleManagerLoad46_clbk = bool (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleManager*, int, unsigned int, int, int, int, int, GUILD_BATTLE__CNormalGuildBattleManagerLoad46_ptr);
            using GUILD_BATTLE__CNormalGuildBattleManagerLoadDBGuildBattleInfo48_ptr = bool (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleManager*, unsigned int, struct _worlddb_guild_battle_info*);
            using GUILD_BATTLE__CNormalGuildBattleManagerLoadDBGuildBattleInfo48_clbk = bool (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleManager*, unsigned int, struct _worlddb_guild_battle_info*, GUILD_BATTLE__CNormalGuildBattleManagerLoadDBGuildBattleInfo48_ptr);
            using GUILD_BATTLE__CNormalGuildBattleManagerLogIn50_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleManager*, int, unsigned int, unsigned int);
            using GUILD_BATTLE__CNormalGuildBattleManagerLogIn50_clbk = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleManager*, int, unsigned int, unsigned int, GUILD_BATTLE__CNormalGuildBattleManagerLogIn50_ptr);
            using GUILD_BATTLE__CNormalGuildBattleManagerLoop52_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleManager*);
            using GUILD_BATTLE__CNormalGuildBattleManagerLoop52_clbk = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleManager*, GUILD_BATTLE__CNormalGuildBattleManagerLoop52_ptr);
            using GUILD_BATTLE__CNormalGuildBattleManagerNetClose54_ptr = char (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleManager*, unsigned int, unsigned int, struct CPlayer*);
            using GUILD_BATTLE__CNormalGuildBattleManagerNetClose54_clbk = char (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleManager*, unsigned int, unsigned int, struct CPlayer*, GUILD_BATTLE__CNormalGuildBattleManagerNetClose54_ptr);
            using GUILD_BATTLE__CNormalGuildBattleManagerProcCheckGetGravityStone56_ptr = char (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleManager*, uint16_t, unsigned int, unsigned int, unsigned int);
            using GUILD_BATTLE__CNormalGuildBattleManagerProcCheckGetGravityStone56_clbk = char (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleManager*, uint16_t, unsigned int, unsigned int, unsigned int, GUILD_BATTLE__CNormalGuildBattleManagerProcCheckGetGravityStone56_ptr);
            using GUILD_BATTLE__CNormalGuildBattleManagerProcCheckGoal58_ptr = char (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleManager*, unsigned int, unsigned int, int);
            using GUILD_BATTLE__CNormalGuildBattleManagerProcCheckGoal58_clbk = char (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleManager*, unsigned int, unsigned int, int, GUILD_BATTLE__CNormalGuildBattleManagerProcCheckGoal58_ptr);
            using GUILD_BATTLE__CNormalGuildBattleManagerProcCheckTakeGravityStone60_ptr = char (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleManager*, int, unsigned int, unsigned int);
            using GUILD_BATTLE__CNormalGuildBattleManagerProcCheckTakeGravityStone60_clbk = char (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleManager*, int, unsigned int, unsigned int, GUILD_BATTLE__CNormalGuildBattleManagerProcCheckTakeGravityStone60_ptr);
            using GUILD_BATTLE__CNormalGuildBattleManagerProcJoin62_ptr = int (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleManager*, unsigned int, unsigned int);
            using GUILD_BATTLE__CNormalGuildBattleManagerProcJoin62_clbk = int (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleManager*, unsigned int, unsigned int, GUILD_BATTLE__CNormalGuildBattleManagerProcJoin62_ptr);
            using GUILD_BATTLE__CNormalGuildBattleManagerPushDQSData64_ptr = bool (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleManager*, unsigned int, unsigned int, struct GUILD_BATTLE::CNormalGuildBattle*, struct GUILD_BATTLE::CGuildBattleSchedule*);
            using GUILD_BATTLE__CNormalGuildBattleManagerPushDQSData64_clbk = bool (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleManager*, unsigned int, unsigned int, struct GUILD_BATTLE::CNormalGuildBattle*, struct GUILD_BATTLE::CGuildBattleSchedule*, GUILD_BATTLE__CNormalGuildBattleManagerPushDQSData64_ptr);
            using GUILD_BATTLE__CNormalGuildBattleManagerSave66_ptr = bool (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleManager*, unsigned int);
            using GUILD_BATTLE__CNormalGuildBattleManagerSave66_clbk = bool (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleManager*, unsigned int, GUILD_BATTLE__CNormalGuildBattleManagerSave66_ptr);
            using GUILD_BATTLE__CNormalGuildBattleManagerSendMemberPosition68_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleManager*, unsigned int, unsigned int);
            using GUILD_BATTLE__CNormalGuildBattleManagerSendMemberPosition68_clbk = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleManager*, unsigned int, unsigned int, GUILD_BATTLE__CNormalGuildBattleManagerSendMemberPosition68_ptr);
            using GUILD_BATTLE__CNormalGuildBattleManagerSetNextEvent70_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleManager*);
            using GUILD_BATTLE__CNormalGuildBattleManagerSetNextEvent70_clbk = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleManager*, GUILD_BATTLE__CNormalGuildBattleManagerSetNextEvent70_ptr);
            using GUILD_BATTLE__CNormalGuildBattleManagerSetReadyState72_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleManager*, struct GUILD_BATTLE::CNormalGuildBattle**);
            using GUILD_BATTLE__CNormalGuildBattleManagerSetReadyState72_clbk = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleManager*, struct GUILD_BATTLE::CNormalGuildBattle**, GUILD_BATTLE__CNormalGuildBattleManagerSetReadyState72_ptr);
            using GUILD_BATTLE__CNormalGuildBattleManagerStart74_ptr = char (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleManager*, struct CPlayer*, unsigned int, unsigned int);
            using GUILD_BATTLE__CNormalGuildBattleManagerStart74_clbk = char (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleManager*, struct CPlayer*, unsigned int, unsigned int, GUILD_BATTLE__CNormalGuildBattleManagerStart74_ptr);
            using GUILD_BATTLE__CNormalGuildBattleManagerUpdateClearGuildBattleDayInfo76_ptr = bool (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleManager*, unsigned int, unsigned int);
            using GUILD_BATTLE__CNormalGuildBattleManagerUpdateClearGuildBattleDayInfo76_clbk = bool (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleManager*, unsigned int, unsigned int, GUILD_BATTLE__CNormalGuildBattleManagerUpdateClearGuildBattleDayInfo76_ptr);
            using GUILD_BATTLE__CNormalGuildBattleManagerdtor_CNormalGuildBattleManager80_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleManager*);
            using GUILD_BATTLE__CNormalGuildBattleManagerdtor_CNormalGuildBattleManager80_clbk = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleManager*, GUILD_BATTLE__CNormalGuildBattleManagerdtor_CNormalGuildBattleManager80_ptr);
            
        }; // end namespace info
    }; // end namespace GUILD_BATTLE
END_ATF_NAMESPACE
