// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "CCashDbWorkerNULL_info.hpp"


START_ATF_NAMESPACE
    namespace detail
    {
        info::CCashDbWorkerNULLctor_CCashDbWorkerNULL2_ptr CCashDbWorkerNULLctor_CCashDbWorkerNULL2_next(nullptr);
        info::CCashDbWorkerNULLctor_CCashDbWorkerNULL2_clbk CCashDbWorkerNULLctor_CCashDbWorkerNULL2_user(nullptr);
        info::CCashDbWorkerNULLCompleteWork4_ptr CCashDbWorkerNULLCompleteWork4_next(nullptr);
        info::CCashDbWorkerNULLCompleteWork4_clbk CCashDbWorkerNULLCompleteWork4_user(nullptr);
        info::CCashDbWorkerNULLConvertErrorCode6_ptr CCashDbWorkerNULLConvertErrorCode6_next(nullptr);
        info::CCashDbWorkerNULLConvertErrorCode6_clbk CCashDbWorkerNULLConvertErrorCode6_user(nullptr);
        info::CCashDbWorkerNULLDoWork8_ptr CCashDbWorkerNULLDoWork8_next(nullptr);
        info::CCashDbWorkerNULLDoWork8_clbk CCashDbWorkerNULLDoWork8_user(nullptr);
        info::CCashDbWorkerNULLGetUseCashQueryStr10_ptr CCashDbWorkerNULLGetUseCashQueryStr10_next(nullptr);
        info::CCashDbWorkerNULLGetUseCashQueryStr10_clbk CCashDbWorkerNULLGetUseCashQueryStr10_user(nullptr);
        info::CCashDbWorkerNULLInitialize12_ptr CCashDbWorkerNULLInitialize12_next(nullptr);
        info::CCashDbWorkerNULLInitialize12_clbk CCashDbWorkerNULLInitialize12_user(nullptr);
        info::CCashDbWorkerNULLRelease14_ptr CCashDbWorkerNULLRelease14_next(nullptr);
        info::CCashDbWorkerNULLRelease14_clbk CCashDbWorkerNULLRelease14_user(nullptr);
        info::CCashDbWorkerNULL_all_rollback16_ptr CCashDbWorkerNULL_all_rollback16_next(nullptr);
        info::CCashDbWorkerNULL_all_rollback16_clbk CCashDbWorkerNULL_all_rollback16_user(nullptr);
        info::CCashDbWorkerNULL_init_database18_ptr CCashDbWorkerNULL_init_database18_next(nullptr);
        info::CCashDbWorkerNULL_init_database18_clbk CCashDbWorkerNULL_init_database18_user(nullptr);
        info::CCashDbWorkerNULL_wait_tsk_cash_buy_dblog20_ptr CCashDbWorkerNULL_wait_tsk_cash_buy_dblog20_next(nullptr);
        info::CCashDbWorkerNULL_wait_tsk_cash_buy_dblog20_clbk CCashDbWorkerNULL_wait_tsk_cash_buy_dblog20_user(nullptr);
        info::CCashDbWorkerNULL_wait_tsk_cash_rollback22_ptr CCashDbWorkerNULL_wait_tsk_cash_rollback22_next(nullptr);
        info::CCashDbWorkerNULL_wait_tsk_cash_rollback22_clbk CCashDbWorkerNULL_wait_tsk_cash_rollback22_user(nullptr);
        info::CCashDbWorkerNULL_wait_tsk_cash_select24_ptr CCashDbWorkerNULL_wait_tsk_cash_select24_next(nullptr);
        info::CCashDbWorkerNULL_wait_tsk_cash_select24_clbk CCashDbWorkerNULL_wait_tsk_cash_select24_user(nullptr);
        info::CCashDbWorkerNULL_wait_tsk_cash_update26_ptr CCashDbWorkerNULL_wait_tsk_cash_update26_next(nullptr);
        info::CCashDbWorkerNULL_wait_tsk_cash_update26_clbk CCashDbWorkerNULL_wait_tsk_cash_update26_user(nullptr);
        info::CCashDbWorkerNULL_wait_tst_cash_total_selling_select28_ptr CCashDbWorkerNULL_wait_tst_cash_total_selling_select28_next(nullptr);
        info::CCashDbWorkerNULL_wait_tst_cash_total_selling_select28_clbk CCashDbWorkerNULL_wait_tst_cash_total_selling_select28_user(nullptr);
        info::CCashDbWorkerNULLdtor_CCashDbWorkerNULL33_ptr CCashDbWorkerNULLdtor_CCashDbWorkerNULL33_next(nullptr);
        info::CCashDbWorkerNULLdtor_CCashDbWorkerNULL33_clbk CCashDbWorkerNULLdtor_CCashDbWorkerNULL33_user(nullptr);
        
        void CCashDbWorkerNULLctor_CCashDbWorkerNULL2_wrapper(struct CCashDbWorkerNULL* _this)
        {
           CCashDbWorkerNULLctor_CCashDbWorkerNULL2_user(_this, CCashDbWorkerNULLctor_CCashDbWorkerNULL2_next);
        };
        void CCashDbWorkerNULLCompleteWork4_wrapper(struct CCashDbWorkerNULL* _this)
        {
           CCashDbWorkerNULLCompleteWork4_user(_this, CCashDbWorkerNULLCompleteWork4_next);
        };
        int CCashDbWorkerNULLConvertErrorCode6_wrapper(struct CCashDbWorkerNULL* _this, char state)
        {
           return CCashDbWorkerNULLConvertErrorCode6_user(_this, state, CCashDbWorkerNULLConvertErrorCode6_next);
        };
        void CCashDbWorkerNULLDoWork8_wrapper(struct CCashDbWorkerNULL* _this)
        {
           CCashDbWorkerNULLDoWork8_user(_this, CCashDbWorkerNULLDoWork8_next);
        };
        void CCashDbWorkerNULLGetUseCashQueryStr10_wrapper(struct CCashDbWorkerNULL* _this, struct _param_cash_update* rParam, int nIdx, char* wszQuery, uint64_t tBufferSize)
        {
           CCashDbWorkerNULLGetUseCashQueryStr10_user(_this, rParam, nIdx, wszQuery, tBufferSize, CCashDbWorkerNULLGetUseCashQueryStr10_next);
        };
        bool CCashDbWorkerNULLInitialize12_wrapper(struct CCashDbWorkerNULL* _this)
        {
           return CCashDbWorkerNULLInitialize12_user(_this, CCashDbWorkerNULLInitialize12_next);
        };
        void CCashDbWorkerNULLRelease14_wrapper(struct CCashDbWorkerNULL* _this)
        {
           CCashDbWorkerNULLRelease14_user(_this, CCashDbWorkerNULLRelease14_next);
        };
        void CCashDbWorkerNULL_all_rollback16_wrapper(struct CCashDbWorkerNULL* _this, struct _param_cash_update* psheet)
        {
           CCashDbWorkerNULL_all_rollback16_user(_this, psheet, CCashDbWorkerNULL_all_rollback16_next);
        };
        bool CCashDbWorkerNULL_init_database18_wrapper(struct CCashDbWorkerNULL* _this)
        {
           return CCashDbWorkerNULL_init_database18_user(_this, CCashDbWorkerNULL_init_database18_next);
        };
        int CCashDbWorkerNULL_wait_tsk_cash_buy_dblog20_wrapper(struct CCashDbWorkerNULL* _this, struct Task* pkTsk)
        {
           return CCashDbWorkerNULL_wait_tsk_cash_buy_dblog20_user(_this, pkTsk, CCashDbWorkerNULL_wait_tsk_cash_buy_dblog20_next);
        };
        int CCashDbWorkerNULL_wait_tsk_cash_rollback22_wrapper(struct CCashDbWorkerNULL* _this, struct Task* pkTsk)
        {
           return CCashDbWorkerNULL_wait_tsk_cash_rollback22_user(_this, pkTsk, CCashDbWorkerNULL_wait_tsk_cash_rollback22_next);
        };
        int CCashDbWorkerNULL_wait_tsk_cash_select24_wrapper(struct CCashDbWorkerNULL* _this, struct Task* pkTsk)
        {
           return CCashDbWorkerNULL_wait_tsk_cash_select24_user(_this, pkTsk, CCashDbWorkerNULL_wait_tsk_cash_select24_next);
        };
        int CCashDbWorkerNULL_wait_tsk_cash_update26_wrapper(struct CCashDbWorkerNULL* _this, struct Task* pkTsk)
        {
           return CCashDbWorkerNULL_wait_tsk_cash_update26_user(_this, pkTsk, CCashDbWorkerNULL_wait_tsk_cash_update26_next);
        };
        int CCashDbWorkerNULL_wait_tst_cash_total_selling_select28_wrapper(struct CCashDbWorkerNULL* _this, struct Task* pkTsk)
        {
           return CCashDbWorkerNULL_wait_tst_cash_total_selling_select28_user(_this, pkTsk, CCashDbWorkerNULL_wait_tst_cash_total_selling_select28_next);
        };
        void CCashDbWorkerNULLdtor_CCashDbWorkerNULL33_wrapper(struct CCashDbWorkerNULL* _this)
        {
           CCashDbWorkerNULLdtor_CCashDbWorkerNULL33_user(_this, CCashDbWorkerNULLdtor_CCashDbWorkerNULL33_next);
        };
        
        hook_record CCashDbWorkerNULL_functions[] = {
        {   (LPVOID)0x1402f3020L,
            (LPVOID *)&CCashDbWorkerNULLctor_CCashDbWorkerNULL2_user,
            (LPVOID *)&CCashDbWorkerNULLctor_CCashDbWorkerNULL2_next,
            (LPVOID)cast_pointer_function(CCashDbWorkerNULLctor_CCashDbWorkerNULL2_wrapper),
            (LPVOID)cast_pointer_function((void(CCashDbWorkerNULL::*)())&CCashDbWorkerNULL::ctor_CCashDbWorkerNULL) },
        {   (LPVOID)0x1402f30a0L,
            (LPVOID *)&CCashDbWorkerNULLCompleteWork4_user,
            (LPVOID *)&CCashDbWorkerNULLCompleteWork4_next,
            (LPVOID)cast_pointer_function(CCashDbWorkerNULLCompleteWork4_wrapper),
            (LPVOID)cast_pointer_function((void(CCashDbWorkerNULL::*)())&CCashDbWorkerNULL::CompleteWork) },
        {   (LPVOID)0x1402f1780L,
            (LPVOID *)&CCashDbWorkerNULLConvertErrorCode6_user,
            (LPVOID *)&CCashDbWorkerNULLConvertErrorCode6_next,
            (LPVOID)cast_pointer_function(CCashDbWorkerNULLConvertErrorCode6_wrapper),
            (LPVOID)cast_pointer_function((int(CCashDbWorkerNULL::*)(char))&CCashDbWorkerNULL::ConvertErrorCode) },
        {   (LPVOID)0x1402f30f0L,
            (LPVOID *)&CCashDbWorkerNULLDoWork8_user,
            (LPVOID *)&CCashDbWorkerNULLDoWork8_next,
            (LPVOID)cast_pointer_function(CCashDbWorkerNULLDoWork8_wrapper),
            (LPVOID)cast_pointer_function((void(CCashDbWorkerNULL::*)())&CCashDbWorkerNULL::DoWork) },
        {   (LPVOID)0x1402f30b0L,
            (LPVOID *)&CCashDbWorkerNULLGetUseCashQueryStr10_user,
            (LPVOID *)&CCashDbWorkerNULLGetUseCashQueryStr10_next,
            (LPVOID)cast_pointer_function(CCashDbWorkerNULLGetUseCashQueryStr10_wrapper),
            (LPVOID)cast_pointer_function((void(CCashDbWorkerNULL::*)(struct _param_cash_update*, int, char*, uint64_t))&CCashDbWorkerNULL::GetUseCashQueryStr) },
        {   (LPVOID)0x1402f3090L,
            (LPVOID *)&CCashDbWorkerNULLInitialize12_user,
            (LPVOID *)&CCashDbWorkerNULLInitialize12_next,
            (LPVOID)cast_pointer_function(CCashDbWorkerNULLInitialize12_wrapper),
            (LPVOID)cast_pointer_function((bool(CCashDbWorkerNULL::*)())&CCashDbWorkerNULL::Initialize) },
        {   (LPVOID)0x1402f3080L,
            (LPVOID *)&CCashDbWorkerNULLRelease14_user,
            (LPVOID *)&CCashDbWorkerNULLRelease14_next,
            (LPVOID)cast_pointer_function(CCashDbWorkerNULLRelease14_wrapper),
            (LPVOID)cast_pointer_function((void(CCashDbWorkerNULL::*)())&CCashDbWorkerNULL::Release) },
        {   (LPVOID)0x1402f30d0L,
            (LPVOID *)&CCashDbWorkerNULL_all_rollback16_user,
            (LPVOID *)&CCashDbWorkerNULL_all_rollback16_next,
            (LPVOID)cast_pointer_function(CCashDbWorkerNULL_all_rollback16_wrapper),
            (LPVOID)cast_pointer_function((void(CCashDbWorkerNULL::*)(struct _param_cash_update*))&CCashDbWorkerNULL::_all_rollback) },
        {   (LPVOID)0x1402f30e0L,
            (LPVOID *)&CCashDbWorkerNULL_init_database18_user,
            (LPVOID *)&CCashDbWorkerNULL_init_database18_next,
            (LPVOID)cast_pointer_function(CCashDbWorkerNULL_init_database18_wrapper),
            (LPVOID)cast_pointer_function((bool(CCashDbWorkerNULL::*)())&CCashDbWorkerNULL::_init_database) },
        {   (LPVOID)0x1402f1740L,
            (LPVOID *)&CCashDbWorkerNULL_wait_tsk_cash_buy_dblog20_user,
            (LPVOID *)&CCashDbWorkerNULL_wait_tsk_cash_buy_dblog20_next,
            (LPVOID)cast_pointer_function(CCashDbWorkerNULL_wait_tsk_cash_buy_dblog20_wrapper),
            (LPVOID)cast_pointer_function((int(CCashDbWorkerNULL::*)(struct Task*))&CCashDbWorkerNULL::_wait_tsk_cash_buy_dblog) },
        {   (LPVOID)0x1402f1720L,
            (LPVOID *)&CCashDbWorkerNULL_wait_tsk_cash_rollback22_user,
            (LPVOID *)&CCashDbWorkerNULL_wait_tsk_cash_rollback22_next,
            (LPVOID)cast_pointer_function(CCashDbWorkerNULL_wait_tsk_cash_rollback22_wrapper),
            (LPVOID)cast_pointer_function((int(CCashDbWorkerNULL::*)(struct Task*))&CCashDbWorkerNULL::_wait_tsk_cash_rollback) },
        {   (LPVOID)0x1402f16e0L,
            (LPVOID *)&CCashDbWorkerNULL_wait_tsk_cash_select24_user,
            (LPVOID *)&CCashDbWorkerNULL_wait_tsk_cash_select24_next,
            (LPVOID)cast_pointer_function(CCashDbWorkerNULL_wait_tsk_cash_select24_wrapper),
            (LPVOID)cast_pointer_function((int(CCashDbWorkerNULL::*)(struct Task*))&CCashDbWorkerNULL::_wait_tsk_cash_select) },
        {   (LPVOID)0x1402f1700L,
            (LPVOID *)&CCashDbWorkerNULL_wait_tsk_cash_update26_user,
            (LPVOID *)&CCashDbWorkerNULL_wait_tsk_cash_update26_next,
            (LPVOID)cast_pointer_function(CCashDbWorkerNULL_wait_tsk_cash_update26_wrapper),
            (LPVOID)cast_pointer_function((int(CCashDbWorkerNULL::*)(struct Task*))&CCashDbWorkerNULL::_wait_tsk_cash_update) },
        {   (LPVOID)0x1402f1760L,
            (LPVOID *)&CCashDbWorkerNULL_wait_tst_cash_total_selling_select28_user,
            (LPVOID *)&CCashDbWorkerNULL_wait_tst_cash_total_selling_select28_next,
            (LPVOID)cast_pointer_function(CCashDbWorkerNULL_wait_tst_cash_total_selling_select28_wrapper),
            (LPVOID)cast_pointer_function((int(CCashDbWorkerNULL::*)(struct Task*))&CCashDbWorkerNULL::_wait_tst_cash_total_selling_select) },
        {   (LPVOID)0x1402f3170L,
            (LPVOID *)&CCashDbWorkerNULLdtor_CCashDbWorkerNULL33_user,
            (LPVOID *)&CCashDbWorkerNULLdtor_CCashDbWorkerNULL33_next,
            (LPVOID)cast_pointer_function(CCashDbWorkerNULLdtor_CCashDbWorkerNULL33_wrapper),
            (LPVOID)cast_pointer_function((void(CCashDbWorkerNULL::*)())&CCashDbWorkerNULL::dtor_CCashDbWorkerNULL) },
        
        };
        
    }; // end namespace detail
END_ATF_NAMESPACE
