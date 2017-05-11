// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "CNetworkVtbl.hpp"
#include "HINSTANCE__.hpp"


START_ATF_NAMESPACE
    struct CNetwork
    {
        CNetworkVtbl *vfptr;
        HINSTANCE__ *m_hChinaDLL;
        void (WINAPIV *SetDataAnalysisFunc)(bool (WINAPIV *)(unsigned int, unsigned int, _MSG_HEADER *, char *));
        void (WINAPIV *Release)();
        int (WINAPIV *LoadSendMsg)(unsigned int, unsigned int, char *, unsigned int, char *, unsigned __int16);
        bool (WINAPIV *SetNetSystem)(unsigned int, _NET_TYPE_PARAM *, char *, char *);
        void (WINAPIV *OnLoop)();
        int (WINAPIV *Connect)(unsigned int, unsigned int, unsigned int, unsigned __int16);
        void (WINAPIV *CloseSocket)(unsigned int, unsigned int, bool);
        _socket *(WINAPIV *GetSocket)(unsigned int, unsigned int);
        bool (WINAPIV *RecvS)(char *, int, int *);
        bool (WINAPIV *SendS)(char *, int, int *);
    public:
        CNetwork()
        {
            using org_ptr = void (WINAPIV*)(struct CNetwork*);
            (org_ptr(0x140410a80L))(this);
        };
        void ctor_CNetwork()
        {
            using org_ptr = void (WINAPIV*)(struct CNetwork*);
            (org_ptr(0x140410a80L))(this);
        };
        void FreeDLL()
        {
            using org_ptr = void (WINAPIV*)(struct CNetwork*);
            (org_ptr(0x140410eb0L))(this);
        };
        void InitNetwork()
        {
            using org_ptr = void (WINAPIV*)(struct CNetwork*);
            (org_ptr(0x140410f00L))(this);
        };
        bool LoadDll(char* dll_name)
        {
            using org_ptr = bool (WINAPIV*)(struct CNetwork*, char*);
            return (org_ptr(0x140410c60L))(this, dll_name);
        };
        ~CNetwork()
        {
            using org_ptr = void (WINAPIV*)(struct CNetwork*);
            (org_ptr(0x140410ab0L))(this);
        };
        void dtor_CNetwork()
        {
            using org_ptr = void (WINAPIV*)(struct CNetwork*);
            (org_ptr(0x140410ab0L))(this);
        };
    };
END_ATF_NAMESPACE
