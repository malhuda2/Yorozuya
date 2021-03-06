#include <HACKSHEILD_PARAM_ANTICPDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::HACKSHEILD_PARAM_ANTICPCheckClient2_ptr HACKSHEILD_PARAM_ANTICPCheckClient2_next(nullptr);
        Info::HACKSHEILD_PARAM_ANTICPCheckClient2_clbk HACKSHEILD_PARAM_ANTICPCheckClient2_user(nullptr);
        
        
        Info::HACKSHEILD_PARAM_ANTICPctor_HACKSHEILD_PARAM_ANTICP4_ptr HACKSHEILD_PARAM_ANTICPctor_HACKSHEILD_PARAM_ANTICP4_next(nullptr);
        Info::HACKSHEILD_PARAM_ANTICPctor_HACKSHEILD_PARAM_ANTICP4_clbk HACKSHEILD_PARAM_ANTICPctor_HACKSHEILD_PARAM_ANTICP4_user(nullptr);
        
        Info::HACKSHEILD_PARAM_ANTICPInit6_ptr HACKSHEILD_PARAM_ANTICPInit6_next(nullptr);
        Info::HACKSHEILD_PARAM_ANTICPInit6_clbk HACKSHEILD_PARAM_ANTICPInit6_user(nullptr);
        
        Info::HACKSHEILD_PARAM_ANTICPIsLogPass8_ptr HACKSHEILD_PARAM_ANTICPIsLogPass8_next(nullptr);
        Info::HACKSHEILD_PARAM_ANTICPIsLogPass8_clbk HACKSHEILD_PARAM_ANTICPIsLogPass8_user(nullptr);
        
        Info::HACKSHEILD_PARAM_ANTICPKick10_ptr HACKSHEILD_PARAM_ANTICPKick10_next(nullptr);
        Info::HACKSHEILD_PARAM_ANTICPKick10_clbk HACKSHEILD_PARAM_ANTICPKick10_user(nullptr);
        
        Info::HACKSHEILD_PARAM_ANTICPOnCheckSession_FirstVerify12_ptr HACKSHEILD_PARAM_ANTICPOnCheckSession_FirstVerify12_next(nullptr);
        Info::HACKSHEILD_PARAM_ANTICPOnCheckSession_FirstVerify12_clbk HACKSHEILD_PARAM_ANTICPOnCheckSession_FirstVerify12_user(nullptr);
        
        Info::HACKSHEILD_PARAM_ANTICPOnConnect14_ptr HACKSHEILD_PARAM_ANTICPOnConnect14_next(nullptr);
        Info::HACKSHEILD_PARAM_ANTICPOnConnect14_clbk HACKSHEILD_PARAM_ANTICPOnConnect14_user(nullptr);
        
        Info::HACKSHEILD_PARAM_ANTICPOnDisConnect16_ptr HACKSHEILD_PARAM_ANTICPOnDisConnect16_next(nullptr);
        Info::HACKSHEILD_PARAM_ANTICPOnDisConnect16_clbk HACKSHEILD_PARAM_ANTICPOnDisConnect16_user(nullptr);
        
        Info::HACKSHEILD_PARAM_ANTICPOnLoop18_ptr HACKSHEILD_PARAM_ANTICPOnLoop18_next(nullptr);
        Info::HACKSHEILD_PARAM_ANTICPOnLoop18_clbk HACKSHEILD_PARAM_ANTICPOnLoop18_user(nullptr);
        
        Info::HACKSHEILD_PARAM_ANTICPOnRecvSession20_ptr HACKSHEILD_PARAM_ANTICPOnRecvSession20_next(nullptr);
        Info::HACKSHEILD_PARAM_ANTICPOnRecvSession20_clbk HACKSHEILD_PARAM_ANTICPOnRecvSession20_user(nullptr);
        
        Info::HACKSHEILD_PARAM_ANTICPOnRecvSession_ClientCheckSum_Response22_ptr HACKSHEILD_PARAM_ANTICPOnRecvSession_ClientCheckSum_Response22_next(nullptr);
        Info::HACKSHEILD_PARAM_ANTICPOnRecvSession_ClientCheckSum_Response22_clbk HACKSHEILD_PARAM_ANTICPOnRecvSession_ClientCheckSum_Response22_user(nullptr);
        
        Info::HACKSHEILD_PARAM_ANTICPOnRecvSession_ClientCrc_Response24_ptr HACKSHEILD_PARAM_ANTICPOnRecvSession_ClientCrc_Response24_next(nullptr);
        Info::HACKSHEILD_PARAM_ANTICPOnRecvSession_ClientCrc_Response24_clbk HACKSHEILD_PARAM_ANTICPOnRecvSession_ClientCrc_Response24_user(nullptr);
        
        Info::HACKSHEILD_PARAM_ANTICPOnRecvSession_ServerCheckSum_Request26_ptr HACKSHEILD_PARAM_ANTICPOnRecvSession_ServerCheckSum_Request26_next(nullptr);
        Info::HACKSHEILD_PARAM_ANTICPOnRecvSession_ServerCheckSum_Request26_clbk HACKSHEILD_PARAM_ANTICPOnRecvSession_ServerCheckSum_Request26_user(nullptr);
        
        void HACKSHEILD_PARAM_ANTICPCheckClient2_wrapper(struct HACKSHEILD_PARAM_ANTICP* _this)
        {
           HACKSHEILD_PARAM_ANTICPCheckClient2_user(_this, HACKSHEILD_PARAM_ANTICPCheckClient2_next);
        };
        
        void HACKSHEILD_PARAM_ANTICPctor_HACKSHEILD_PARAM_ANTICP4_wrapper(struct HACKSHEILD_PARAM_ANTICP* _this)
        {
           HACKSHEILD_PARAM_ANTICPctor_HACKSHEILD_PARAM_ANTICP4_user(_this, HACKSHEILD_PARAM_ANTICPctor_HACKSHEILD_PARAM_ANTICP4_next);
        };
        void HACKSHEILD_PARAM_ANTICPInit6_wrapper(struct HACKSHEILD_PARAM_ANTICP* _this)
        {
           HACKSHEILD_PARAM_ANTICPInit6_user(_this, HACKSHEILD_PARAM_ANTICPInit6_next);
        };
        bool HACKSHEILD_PARAM_ANTICPIsLogPass8_wrapper(struct HACKSHEILD_PARAM_ANTICP* _this)
        {
           return HACKSHEILD_PARAM_ANTICPIsLogPass8_user(_this, HACKSHEILD_PARAM_ANTICPIsLogPass8_next);
        };
        void HACKSHEILD_PARAM_ANTICPKick10_wrapper(struct HACKSHEILD_PARAM_ANTICP* _this, char byReason, unsigned int dwRet)
        {
           HACKSHEILD_PARAM_ANTICPKick10_user(_this, byReason, dwRet, HACKSHEILD_PARAM_ANTICPKick10_next);
        };
        bool HACKSHEILD_PARAM_ANTICPOnCheckSession_FirstVerify12_wrapper(struct HACKSHEILD_PARAM_ANTICP* _this, int n)
        {
           return HACKSHEILD_PARAM_ANTICPOnCheckSession_FirstVerify12_user(_this, n, HACKSHEILD_PARAM_ANTICPOnCheckSession_FirstVerify12_next);
        };
        void HACKSHEILD_PARAM_ANTICPOnConnect14_wrapper(struct HACKSHEILD_PARAM_ANTICP* _this, int nIndex)
        {
           HACKSHEILD_PARAM_ANTICPOnConnect14_user(_this, nIndex, HACKSHEILD_PARAM_ANTICPOnConnect14_next);
        };
        void HACKSHEILD_PARAM_ANTICPOnDisConnect16_wrapper(struct HACKSHEILD_PARAM_ANTICP* _this)
        {
           HACKSHEILD_PARAM_ANTICPOnDisConnect16_user(_this, HACKSHEILD_PARAM_ANTICPOnDisConnect16_next);
        };
        void HACKSHEILD_PARAM_ANTICPOnLoop18_wrapper(struct HACKSHEILD_PARAM_ANTICP* _this)
        {
           HACKSHEILD_PARAM_ANTICPOnLoop18_user(_this, HACKSHEILD_PARAM_ANTICPOnLoop18_next);
        };
        bool HACKSHEILD_PARAM_ANTICPOnRecvSession20_wrapper(struct HACKSHEILD_PARAM_ANTICP* _this, struct CHackShieldExSystem* mgr, int nIndex, char byProtocol, uint64_t tSize, char* pMsg)
        {
           return HACKSHEILD_PARAM_ANTICPOnRecvSession20_user(_this, mgr, nIndex, byProtocol, tSize, pMsg, HACKSHEILD_PARAM_ANTICPOnRecvSession20_next);
        };
        bool HACKSHEILD_PARAM_ANTICPOnRecvSession_ClientCheckSum_Response22_wrapper(struct HACKSHEILD_PARAM_ANTICP* _this, uint64_t tSize, char* pMsg)
        {
           return HACKSHEILD_PARAM_ANTICPOnRecvSession_ClientCheckSum_Response22_user(_this, tSize, pMsg, HACKSHEILD_PARAM_ANTICPOnRecvSession_ClientCheckSum_Response22_next);
        };
        bool HACKSHEILD_PARAM_ANTICPOnRecvSession_ClientCrc_Response24_wrapper(struct HACKSHEILD_PARAM_ANTICP* _this, uint64_t tSize, char* pMsg)
        {
           return HACKSHEILD_PARAM_ANTICPOnRecvSession_ClientCrc_Response24_user(_this, tSize, pMsg, HACKSHEILD_PARAM_ANTICPOnRecvSession_ClientCrc_Response24_next);
        };
        bool HACKSHEILD_PARAM_ANTICPOnRecvSession_ServerCheckSum_Request26_wrapper(struct HACKSHEILD_PARAM_ANTICP* _this, int nIndex)
        {
           return HACKSHEILD_PARAM_ANTICPOnRecvSession_ServerCheckSum_Request26_user(_this, nIndex, HACKSHEILD_PARAM_ANTICPOnRecvSession_ServerCheckSum_Request26_next);
        };
        
        ::std::array<hook_record, 13> HACKSHEILD_PARAM_ANTICP_functions = 
        {
            _hook_record {
                (LPVOID)0x140417b60L,
                (LPVOID *)&HACKSHEILD_PARAM_ANTICPCheckClient2_user,
                (LPVOID *)&HACKSHEILD_PARAM_ANTICPCheckClient2_next,
                (LPVOID)cast_pointer_function(HACKSHEILD_PARAM_ANTICPCheckClient2_wrapper),
                (LPVOID)cast_pointer_function((void(HACKSHEILD_PARAM_ANTICP::*)())&HACKSHEILD_PARAM_ANTICP::CheckClient)
            },
            _hook_record {
                (LPVOID)0x1404177d0L,
                (LPVOID *)&HACKSHEILD_PARAM_ANTICPctor_HACKSHEILD_PARAM_ANTICP4_user,
                (LPVOID *)&HACKSHEILD_PARAM_ANTICPctor_HACKSHEILD_PARAM_ANTICP4_next,
                (LPVOID)cast_pointer_function(HACKSHEILD_PARAM_ANTICPctor_HACKSHEILD_PARAM_ANTICP4_wrapper),
                (LPVOID)cast_pointer_function((void(HACKSHEILD_PARAM_ANTICP::*)())&HACKSHEILD_PARAM_ANTICP::ctor_HACKSHEILD_PARAM_ANTICP)
            },
            _hook_record {
                (LPVOID)0x140417890L,
                (LPVOID *)&HACKSHEILD_PARAM_ANTICPInit6_user,
                (LPVOID *)&HACKSHEILD_PARAM_ANTICPInit6_next,
                (LPVOID)cast_pointer_function(HACKSHEILD_PARAM_ANTICPInit6_wrapper),
                (LPVOID)cast_pointer_function((void(HACKSHEILD_PARAM_ANTICP::*)())&HACKSHEILD_PARAM_ANTICP::Init)
            },
            _hook_record {
                (LPVOID)0x140417a50L,
                (LPVOID *)&HACKSHEILD_PARAM_ANTICPIsLogPass8_user,
                (LPVOID *)&HACKSHEILD_PARAM_ANTICPIsLogPass8_next,
                (LPVOID)cast_pointer_function(HACKSHEILD_PARAM_ANTICPIsLogPass8_wrapper),
                (LPVOID)cast_pointer_function((bool(HACKSHEILD_PARAM_ANTICP::*)())&HACKSHEILD_PARAM_ANTICP::IsLogPass)
            },
            _hook_record {
                (LPVOID)0x140417d60L,
                (LPVOID *)&HACKSHEILD_PARAM_ANTICPKick10_user,
                (LPVOID *)&HACKSHEILD_PARAM_ANTICPKick10_next,
                (LPVOID)cast_pointer_function(HACKSHEILD_PARAM_ANTICPKick10_wrapper),
                (LPVOID)cast_pointer_function((void(HACKSHEILD_PARAM_ANTICP::*)(char, unsigned int))&HACKSHEILD_PARAM_ANTICP::Kick)
            },
            _hook_record {
                (LPVOID)0x140417960L,
                (LPVOID *)&HACKSHEILD_PARAM_ANTICPOnCheckSession_FirstVerify12_user,
                (LPVOID *)&HACKSHEILD_PARAM_ANTICPOnCheckSession_FirstVerify12_next,
                (LPVOID)cast_pointer_function(HACKSHEILD_PARAM_ANTICPOnCheckSession_FirstVerify12_wrapper),
                (LPVOID)cast_pointer_function((bool(HACKSHEILD_PARAM_ANTICP::*)(int))&HACKSHEILD_PARAM_ANTICP::OnCheckSession_FirstVerify)
            },
            _hook_record {
                (LPVOID)0x1404179d0L,
                (LPVOID *)&HACKSHEILD_PARAM_ANTICPOnConnect14_user,
                (LPVOID *)&HACKSHEILD_PARAM_ANTICPOnConnect14_next,
                (LPVOID)cast_pointer_function(HACKSHEILD_PARAM_ANTICPOnConnect14_wrapper),
                (LPVOID)cast_pointer_function((void(HACKSHEILD_PARAM_ANTICP::*)(int))&HACKSHEILD_PARAM_ANTICP::OnConnect)
            },
            _hook_record {
                (LPVOID)0x140417a10L,
                (LPVOID *)&HACKSHEILD_PARAM_ANTICPOnDisConnect16_user,
                (LPVOID *)&HACKSHEILD_PARAM_ANTICPOnDisConnect16_next,
                (LPVOID)cast_pointer_function(HACKSHEILD_PARAM_ANTICPOnDisConnect16_wrapper),
                (LPVOID)cast_pointer_function((void(HACKSHEILD_PARAM_ANTICP::*)())&HACKSHEILD_PARAM_ANTICP::OnDisConnect)
            },
            _hook_record {
                (LPVOID)0x140417aa0L,
                (LPVOID *)&HACKSHEILD_PARAM_ANTICPOnLoop18_user,
                (LPVOID *)&HACKSHEILD_PARAM_ANTICPOnLoop18_next,
                (LPVOID)cast_pointer_function(HACKSHEILD_PARAM_ANTICPOnLoop18_wrapper),
                (LPVOID)cast_pointer_function((void(HACKSHEILD_PARAM_ANTICP::*)())&HACKSHEILD_PARAM_ANTICP::OnLoop)
            },
            _hook_record {
                (LPVOID)0x140417f10L,
                (LPVOID *)&HACKSHEILD_PARAM_ANTICPOnRecvSession20_user,
                (LPVOID *)&HACKSHEILD_PARAM_ANTICPOnRecvSession20_next,
                (LPVOID)cast_pointer_function(HACKSHEILD_PARAM_ANTICPOnRecvSession20_wrapper),
                (LPVOID)cast_pointer_function((bool(HACKSHEILD_PARAM_ANTICP::*)(struct CHackShieldExSystem*, int, char, uint64_t, char*))&HACKSHEILD_PARAM_ANTICP::OnRecvSession)
            },
            _hook_record {
                (LPVOID)0x140418120L,
                (LPVOID *)&HACKSHEILD_PARAM_ANTICPOnRecvSession_ClientCheckSum_Response22_user,
                (LPVOID *)&HACKSHEILD_PARAM_ANTICPOnRecvSession_ClientCheckSum_Response22_next,
                (LPVOID)cast_pointer_function(HACKSHEILD_PARAM_ANTICPOnRecvSession_ClientCheckSum_Response22_wrapper),
                (LPVOID)cast_pointer_function((bool(HACKSHEILD_PARAM_ANTICP::*)(uint64_t, char*))&HACKSHEILD_PARAM_ANTICP::OnRecvSession_ClientCheckSum_Response)
            },
            _hook_record {
                (LPVOID)0x140418290L,
                (LPVOID *)&HACKSHEILD_PARAM_ANTICPOnRecvSession_ClientCrc_Response24_user,
                (LPVOID *)&HACKSHEILD_PARAM_ANTICPOnRecvSession_ClientCrc_Response24_next,
                (LPVOID)cast_pointer_function(HACKSHEILD_PARAM_ANTICPOnRecvSession_ClientCrc_Response24_wrapper),
                (LPVOID)cast_pointer_function((bool(HACKSHEILD_PARAM_ANTICP::*)(uint64_t, char*))&HACKSHEILD_PARAM_ANTICP::OnRecvSession_ClientCrc_Response)
            },
            _hook_record {
                (LPVOID)0x140417fb0L,
                (LPVOID *)&HACKSHEILD_PARAM_ANTICPOnRecvSession_ServerCheckSum_Request26_user,
                (LPVOID *)&HACKSHEILD_PARAM_ANTICPOnRecvSession_ServerCheckSum_Request26_next,
                (LPVOID)cast_pointer_function(HACKSHEILD_PARAM_ANTICPOnRecvSession_ServerCheckSum_Request26_wrapper),
                (LPVOID)cast_pointer_function((bool(HACKSHEILD_PARAM_ANTICP::*)(int))&HACKSHEILD_PARAM_ANTICP::OnRecvSession_ServerCheckSum_Request)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
