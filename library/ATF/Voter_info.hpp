// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "Voter.hpp"


START_ATF_NAMESPACE
    namespace info
    {
        using VoterDoit2_ptr = int (WINAPIV*)(struct Voter*, Cmd, struct CPlayer*, char*);
        using VoterDoit2_clbk = int (WINAPIV*)(struct Voter*, Cmd, struct CPlayer*, char*, VoterDoit2_ptr);
        using VoterInitialize4_ptr = bool (WINAPIV*)(struct Voter*);
        using VoterInitialize4_clbk = bool (WINAPIV*)(struct Voter*, VoterInitialize4_ptr);
        using VoterIsRegistedVotePaper6_ptr = bool (WINAPIV*)(struct Voter*, char, char*);
        using VoterIsRegistedVotePaper6_clbk = bool (WINAPIV*)(struct Voter*, char, char*, VoterIsRegistedVotePaper6_ptr);
        using Voterctor_Voter8_ptr = void (WINAPIV*)(struct Voter*);
        using Voterctor_Voter8_clbk = void (WINAPIV*)(struct Voter*, Voterctor_Voter8_ptr);
        using Voter_MakeVotePaper10_ptr = void (WINAPIV*)(struct Voter*);
        using Voter_MakeVotePaper10_clbk = void (WINAPIV*)(struct Voter*, Voter_MakeVotePaper10_ptr);
        using Voter_SendVotePaper12_ptr = int (WINAPIV*)(struct Voter*, struct CPlayer*);
        using Voter_SendVotePaper12_clbk = int (WINAPIV*)(struct Voter*, struct CPlayer*, Voter_SendVotePaper12_ptr);
        using Voter_SendVotePaperAll14_ptr = void (WINAPIV*)(struct Voter*);
        using Voter_SendVotePaperAll14_clbk = void (WINAPIV*)(struct Voter*, Voter_SendVotePaperAll14_ptr);
        using Voter_SendVoteScore16_ptr = void (WINAPIV*)(struct Voter*, struct CPlayer*);
        using Voter_SendVoteScore16_clbk = void (WINAPIV*)(struct Voter*, struct CPlayer*, Voter_SendVoteScore16_ptr);
        using Voter_SendVoteScoreAll18_ptr = void (WINAPIV*)(struct Voter*, char);
        using Voter_SendVoteScoreAll18_clbk = void (WINAPIV*)(struct Voter*, char, Voter_SendVoteScoreAll18_ptr);
        using Voter_SetVoteScoreInfo20_ptr = void (WINAPIV*)(struct Voter*, char, char*, bool);
        using Voter_SetVoteScoreInfo20_clbk = void (WINAPIV*)(struct Voter*, char, char*, bool, Voter_SetVoteScoreInfo20_ptr);
        using Voter_Vote22_ptr = int (WINAPIV*)(struct Voter*, struct CPlayer*, char*);
        using Voter_Vote22_clbk = int (WINAPIV*)(struct Voter*, struct CPlayer*, char*, Voter_Vote22_ptr);
        using Voterdtor_Voter27_ptr = void (WINAPIV*)(struct Voter*);
        using Voterdtor_Voter27_clbk = void (WINAPIV*)(struct Voter*, Voterdtor_Voter27_ptr);
        
    }; // end namespace info
END_ATF_NAMESPACE
