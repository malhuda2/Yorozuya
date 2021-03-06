// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>
#include <CRecallEffectController.hpp>


START_ATF_NAMESPACE
    namespace Info
    {
        
        using CRecallEffectControllerctor_CRecallEffectController2_ptr = void (WINAPIV*)(struct CRecallEffectController*);
        using CRecallEffectControllerctor_CRecallEffectController2_clbk = void (WINAPIV*)(struct CRecallEffectController*, CRecallEffectControllerctor_CRecallEffectController2_ptr);
        using CRecallEffectControllerCleanUp4_ptr = void (WINAPIV*)(struct CRecallEffectController*);
        using CRecallEffectControllerCleanUp4_clbk = void (WINAPIV*)(struct CRecallEffectController*, CRecallEffectControllerCleanUp4_ptr);
        using CRecallEffectControllerClose6_ptr = void (WINAPIV*)(struct CRecallEffectController*, struct CRecallRequest*, bool);
        using CRecallEffectControllerClose6_clbk = void (WINAPIV*)(struct CRecallEffectController*, struct CRecallRequest*, bool, CRecallEffectControllerClose6_ptr);
        using CRecallEffectControllerDecideRecall8_ptr = void (WINAPIV*)(struct CRecallEffectController*, uint16_t, char, struct CPlayer*);
        using CRecallEffectControllerDecideRecall8_clbk = void (WINAPIV*)(struct CRecallEffectController*, uint16_t, char, struct CPlayer*, CRecallEffectControllerDecideRecall8_ptr);
        using CRecallEffectControllerDestroy10_ptr = void (WINAPIV*)();
        using CRecallEffectControllerDestroy10_clbk = void (WINAPIV*)(CRecallEffectControllerDestroy10_ptr);
        using CRecallEffectControllerGetEmpty12_ptr = struct CRecallRequest* (WINAPIV*)(struct CRecallEffectController*);
        using CRecallEffectControllerGetEmpty12_clbk = struct CRecallRequest* (WINAPIV*)(struct CRecallEffectController*, CRecallEffectControllerGetEmpty12_ptr);
        using CRecallEffectControllerGetResistedRecall14_ptr = char (WINAPIV*)(struct CRecallEffectController*, uint16_t, struct CRecallRequest**);
        using CRecallEffectControllerGetResistedRecall14_clbk = char (WINAPIV*)(struct CRecallEffectController*, uint16_t, struct CRecallRequest**, CRecallEffectControllerGetResistedRecall14_ptr);
        using CRecallEffectControllerInit16_ptr = bool (WINAPIV*)(struct CRecallEffectController*, unsigned int);
        using CRecallEffectControllerInit16_clbk = bool (WINAPIV*)(struct CRecallEffectController*, unsigned int, CRecallEffectControllerInit16_ptr);
        using CRecallEffectControllerInstance18_ptr = struct CRecallEffectController* (WINAPIV*)();
        using CRecallEffectControllerInstance18_clbk = struct CRecallEffectController* (WINAPIV*)(CRecallEffectControllerInstance18_ptr);
        using CRecallEffectControllerOnLoop20_ptr = void (WINAPIV*)(struct CRecallEffectController*);
        using CRecallEffectControllerOnLoop20_clbk = void (WINAPIV*)(struct CRecallEffectController*, CRecallEffectControllerOnLoop20_ptr);
        using CRecallEffectControllerProcessRequestRecall22_ptr = char (WINAPIV*)(struct CRecallEffectController*, struct CPlayer*, struct CCharacter*, struct CRecallRequest**, bool, bool, bool);
        using CRecallEffectControllerProcessRequestRecall22_clbk = char (WINAPIV*)(struct CRecallEffectController*, struct CPlayer*, struct CCharacter*, struct CRecallRequest**, bool, bool, bool, CRecallEffectControllerProcessRequestRecall22_ptr);
        using CRecallEffectControllerRequestRecall24_ptr = bool (WINAPIV*)(struct CRecallEffectController*, struct CPlayer*, struct CCharacter*, bool, bool, bool);
        using CRecallEffectControllerRequestRecall24_clbk = bool (WINAPIV*)(struct CRecallEffectController*, struct CPlayer*, struct CCharacter*, bool, bool, bool, CRecallEffectControllerRequestRecall24_ptr);
        using CRecallEffectControllerSendDecideRecallErrorResultToDest26_ptr = void (WINAPIV*)(struct CRecallEffectController*, char, struct CPlayer*, int);
        using CRecallEffectControllerSendDecideRecallErrorResultToDest26_clbk = void (WINAPIV*)(struct CRecallEffectController*, char, struct CPlayer*, int, CRecallEffectControllerSendDecideRecallErrorResultToDest26_ptr);
        using CRecallEffectControllerSendRecallReqeustResult28_ptr = void (WINAPIV*)(struct CRecallEffectController*, char, struct CPlayer*);
        using CRecallEffectControllerSendRecallReqeustResult28_clbk = void (WINAPIV*)(struct CRecallEffectController*, char, struct CPlayer*, CRecallEffectControllerSendRecallReqeustResult28_ptr);
        using CRecallEffectControllerSendRecallReqeustToDest30_ptr = void (WINAPIV*)(struct CRecallEffectController*, uint16_t, struct CPlayer*, struct CPlayer*);
        using CRecallEffectControllerSendRecallReqeustToDest30_clbk = void (WINAPIV*)(struct CRecallEffectController*, uint16_t, struct CPlayer*, struct CPlayer*, CRecallEffectControllerSendRecallReqeustToDest30_ptr);
        using CRecallEffectControllerUpdateClose32_ptr = void (WINAPIV*)(struct CRecallEffectController*);
        using CRecallEffectControllerUpdateClose32_clbk = void (WINAPIV*)(struct CRecallEffectController*, CRecallEffectControllerUpdateClose32_ptr);
        
        using CRecallEffectControllerdtor_CRecallEffectController36_ptr = void (WINAPIV*)(struct CRecallEffectController*);
        using CRecallEffectControllerdtor_CRecallEffectController36_clbk = void (WINAPIV*)(struct CRecallEffectController*, CRecallEffectControllerdtor_CRecallEffectController36_ptr);
    }; // end namespace Info
END_ATF_NAMESPACE
