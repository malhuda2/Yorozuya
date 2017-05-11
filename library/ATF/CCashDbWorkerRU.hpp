// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "CRusiaBillingMgr.hpp"
#include "CashDbWorker.hpp"
#include "Task.hpp"


START_ATF_NAMESPACE
    struct  CCashDbWorkerRU : CashDbWorker
    {
        CRusiaBillingMgr *_pkBill;
    public:
        CCashDbWorkerRU()
        {
            using org_ptr = void (WINAPIV*)(struct CCashDbWorkerRU*);
            (org_ptr(0x14022ea70L))(this);
        };
        void ctor_CCashDbWorkerRU()
        {
            using org_ptr = void (WINAPIV*)(struct CCashDbWorkerRU*);
            (org_ptr(0x14022ea70L))(this);
        };
        void Release()
        {
            using org_ptr = void (WINAPIV*)(struct CCashDbWorkerRU*);
            (org_ptr(0x1403208d0L))(this);
        };
        bool _init_database()
        {
            using org_ptr = bool (WINAPIV*)(struct CCashDbWorkerRU*);
            return (org_ptr(0x140320be0L))(this);
        };
        int _wait_tsk_cash_rollback(struct Task* pkTsk)
        {
            using org_ptr = int (WINAPIV*)(struct CCashDbWorkerRU*, struct Task*);
            return (org_ptr(0x140320a80L))(this, pkTsk);
        };
        int _wait_tsk_cash_select(struct Task* pkTsk)
        {
            using org_ptr = int (WINAPIV*)(struct CCashDbWorkerRU*, struct Task*);
            return (org_ptr(0x140320930L))(this, pkTsk);
        };
        int _wait_tsk_cash_update(struct Task* pkTsk)
        {
            using org_ptr = int (WINAPIV*)(struct CCashDbWorkerRU*, struct Task*);
            return (org_ptr(0x1403209a0L))(this, pkTsk);
        };
        ~CCashDbWorkerRU()
        {
            using org_ptr = void (WINAPIV*)(struct CCashDbWorkerRU*);
            (org_ptr(0x14022eb40L))(this);
        };
        void dtor_CCashDbWorkerRU()
        {
            using org_ptr = void (WINAPIV*)(struct CCashDbWorkerRU*);
            (org_ptr(0x14022eb40L))(this);
        };
    };
END_ATF_NAMESPACE
