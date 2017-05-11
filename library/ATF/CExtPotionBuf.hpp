// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "CPlayer.hpp"


START_ATF_NAMESPACE
    struct CExtPotionBuf
    {
        bool m_bExtPotionBufUse;
        bool m_bDayChange;
        unsigned int m_dwEndPotionTime;
    public:
        CExtPotionBuf()
        {
            using org_ptr = void (WINAPIV*)(struct CExtPotionBuf*);
            (org_ptr(0x14039fba0L))(this);
        };
        void ctor_CExtPotionBuf()
        {
            using org_ptr = void (WINAPIV*)(struct CExtPotionBuf*);
            (org_ptr(0x14039fba0L))(this);
        };
        void CalcRemainTime(uint16_t wInx, bool bUse)
        {
            using org_ptr = void (WINAPIV*)(struct CExtPotionBuf*, uint16_t, bool);
            (org_ptr(0x14039fdc0L))(this, wInx, bUse);
        };
        void CheckPotionTime(struct CPlayer* pOne)
        {
            using org_ptr = void (WINAPIV*)(struct CExtPotionBuf*, struct CPlayer*);
            (org_ptr(0x1403a0050L))(this, pOne);
        };
        bool IsExtPotionUse()
        {
            using org_ptr = bool (WINAPIV*)(struct CExtPotionBuf*);
            return (org_ptr(0x14007b9f0L))(this);
        };
        void SednMsg_RemovePotionContEffect(uint16_t wPotionInx, uint16_t wIndex)
        {
            using org_ptr = void (WINAPIV*)(struct CExtPotionBuf*, uint16_t, uint16_t);
            (org_ptr(0x14039fd30L))(this, wPotionInx, wIndex);
        };
        void SendMsg_RemainBufUseTime(bool bUse, uint16_t wIndex, int nEndDay, int nEndHour, int nEndMin)
        {
            using org_ptr = void (WINAPIV*)(struct CExtPotionBuf*, bool, uint16_t, int, int, int);
            (org_ptr(0x14039fc70L))(this, bUse, wIndex, nEndDay, nEndHour, nEndMin);
        };
        void SetExtPotionBufUse(bool bUse)
        {
            using org_ptr = void (WINAPIV*)(struct CExtPotionBuf*, bool);
            (org_ptr(0x1400790b0L))(this, bUse);
        };
        void SetExtPotionEndTime(unsigned int dwEndTime)
        {
            using org_ptr = void (WINAPIV*)(struct CExtPotionBuf*, unsigned int);
            (org_ptr(0x1400790d0L))(this, dwEndTime);
        };
        void UseBuffPotion(struct CPlayer* pOne)
        {
            using org_ptr = void (WINAPIV*)(struct CExtPotionBuf*, struct CPlayer*);
            (org_ptr(0x14039fbd0L))(this, pOne);
        };
        ~CExtPotionBuf()
        {
            using org_ptr = void (WINAPIV*)(struct CExtPotionBuf*);
            (org_ptr(0x140072b40L))(this);
        };
        void dtor_CExtPotionBuf()
        {
            using org_ptr = void (WINAPIV*)(struct CExtPotionBuf*);
            (org_ptr(0x140072b40L))(this);
        };
    };
END_ATF_NAMESPACE
