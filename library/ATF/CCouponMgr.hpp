// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "CMyTimer.hpp"
#include "CouponInfo.hpp"
#include "_PCBANG_PLAY_TIME.hpp"
#include "_STORAGE_LIST.hpp"


START_ATF_NAMESPACE
    struct CCouponMgr
    {
        CouponInfo m_Coupon[5];
        char m_byRemainTime;
        char m_byReceiveCoupon;
        unsigned int m_dwContTime;
        char m_byInitTime;
        bool m_bTimeReset;
        CMyTimer m_tmrCheckConnMin;
        CMyTimer m_tmrCouponEnableTime;
        _PCBANG_PLAY_TIME *m_pkInfo;
    public:
        CCouponMgr()
        {
            using org_ptr = void (WINAPIV*)(struct CCouponMgr*);
            (org_ptr(0x140074790L))(this);
        };
        void ctor_CCouponMgr()
        {
            using org_ptr = void (WINAPIV*)(struct CCouponMgr*);
            (org_ptr(0x140074790L))(this);
        };
        struct CouponInfo* GetCouponInfo(char byCouponTime)
        {
            using org_ptr = struct CouponInfo* (WINAPIV*)(struct CCouponMgr*, char);
            return (org_ptr(0x1403fdf70L))(this, byCouponTime);
        };
        void Init(uint16_t wIdx)
        {
            using org_ptr = void (WINAPIV*)(struct CCouponMgr*, uint16_t);
            (org_ptr(0x1403fd6c0L))(this, wIdx);
        };
        void InitCuponInfo()
        {
            using org_ptr = void (WINAPIV*)(struct CCouponMgr*);
            (org_ptr(0x1403fd620L))(this);
        };
        bool IsEnableGetCoupon()
        {
            using org_ptr = bool (WINAPIV*)(struct CCouponMgr*);
            return (org_ptr(0x1403fd7e0L))(this);
        };
        void LoadData(unsigned int dwAccSerial, struct _PCBANG_PLAY_TIME* pkInfo)
        {
            using org_ptr = void (WINAPIV*)(struct CCouponMgr*, unsigned int, struct _PCBANG_PLAY_TIME*);
            (org_ptr(0x1403fd340L))(this, dwAccSerial, pkInfo);
        };
        void LogOut(bool bForceClose)
        {
            using org_ptr = void (WINAPIV*)(struct CCouponMgr*, bool);
            (org_ptr(0x1403fd820L))(this, bForceClose);
        };
        void Loop(uint16_t wIdx)
        {
            using org_ptr = void (WINAPIV*)(struct CCouponMgr*, uint16_t);
            (org_ptr(0x1403fd8e0L))(this, wIdx);
        };
        void ReceivePrimiumCoupon(uint16_t wIdx)
        {
            using org_ptr = void (WINAPIV*)(struct CCouponMgr*, uint16_t);
            (org_ptr(0x1403fdbb0L))(this, wIdx);
        };
        void SendMsg_CouponEnsure(uint16_t wIdx, char byCouponTime)
        {
            using org_ptr = void (WINAPIV*)(struct CCouponMgr*, uint16_t, char);
            (org_ptr(0x1403fdfb0L))(this, wIdx, byCouponTime);
        };
        void SendMsg_CouponError(uint16_t wIdx, char byRet)
        {
            using org_ptr = void (WINAPIV*)(struct CCouponMgr*, uint16_t, char);
            (org_ptr(0x1403fe110L))(this, wIdx, byRet);
        };
        void SendMsg_CouponLendResult(uint16_t wIndx, struct _STORAGE_LIST::_db_con* pCoupon)
        {
            using org_ptr = void (WINAPIV*)(struct CCouponMgr*, uint16_t, struct _STORAGE_LIST::_db_con*);
            (org_ptr(0x1403fe230L))(this, wIndx, pCoupon);
        };
        void SendMsg_InPcBangTime(uint16_t wIdx)
        {
            using org_ptr = void (WINAPIV*)(struct CCouponMgr*, uint16_t);
            (org_ptr(0x1403fe040L))(this, wIdx);
        };
        void SendMsg_RemainCouponInform(uint16_t wIdx, char byRemainCoupon)
        {
            using org_ptr = void (WINAPIV*)(struct CCouponMgr*, uint16_t, char);
            (org_ptr(0x1403fe1a0L))(this, wIdx, byRemainCoupon);
        };
        bool SetCheetContTime(uint16_t wIdx, int nMin)
        {
            using org_ptr = bool (WINAPIV*)(struct CCouponMgr*, uint16_t, int);
            return (org_ptr(0x1403fe330L))(this, wIdx, nMin);
        };
        ~CCouponMgr()
        {
            using org_ptr = void (WINAPIV*)(struct CCouponMgr*);
            (org_ptr(0x140074840L))(this);
        };
        void dtor_CCouponMgr()
        {
            using org_ptr = void (WINAPIV*)(struct CCouponMgr*);
            (org_ptr(0x140074840L))(this);
        };
    };
END_ATF_NAMESPACE
