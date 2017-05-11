// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "CFrameRateVtbl.hpp"


START_ATF_NAMESPACE
    #pragma pack(push, 8)
    struct CFrameRate
    {
        CFrameRateVtbl *vfptr;
        float m_fSpeedPerFrame;
        unsigned int m_dwFrames;
        unsigned int m_dwFrameTime;
        unsigned int m_dwFrameCount;
        unsigned int m_dwDisplayTick;
    public:
        CFrameRate()
        {
            using org_ptr = void (WINAPIV*)(struct CFrameRate*);
            (org_ptr(0x140438d80L))(this);
        };
        void ctor_CFrameRate()
        {
            using org_ptr = void (WINAPIV*)(struct CFrameRate*);
            (org_ptr(0x140438d80L))(this);
        };
        void CalcSpeedPerFrame()
        {
            using org_ptr = void (WINAPIV*)(struct CFrameRate*);
            (org_ptr(0x140438dc0L))(this);
        };
        unsigned int GetFPS()
        {
            using org_ptr = unsigned int (WINAPIV*)(struct CFrameRate*);
            return (org_ptr(0x140438f30L))(this);
        };
        float GetSpeedPerFrame()
        {
            using org_ptr = float (WINAPIV*)(struct CFrameRate*);
            return (org_ptr(0x140438ef0L))(this);
        };
        ~CFrameRate()
        {
            using org_ptr = void (WINAPIV*)(struct CFrameRate*);
            (org_ptr(0x1402023e0L))(this);
        };
        void dtor_CFrameRate()
        {
            using org_ptr = void (WINAPIV*)(struct CFrameRate*);
            (org_ptr(0x1402023e0L))(this);
        };
    };
    #pragma pack(pop)
END_ATF_NAMESPACE
