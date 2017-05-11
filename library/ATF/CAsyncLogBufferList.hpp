// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "CAsyncLogBuffer.hpp"
#include "CLogFile.hpp"
#include "CNetIndexList.hpp"


START_ATF_NAMESPACE
    struct CAsyncLogBufferList
    {
        unsigned int m_uiMaxBufferCnt;
        unsigned int m_uiMaxBufferSize;
        CAsyncLogBuffer *m_pLogBuffer;
        CNetIndexList m_klistEmpty;
        CNetIndexList m_klistProc;
    public:
        CAsyncLogBufferList()
        {
            using org_ptr = void (WINAPIV*)(struct CAsyncLogBufferList*);
            (org_ptr(0x1403bd460L))(this);
        };
        void ctor_CAsyncLogBufferList()
        {
            using org_ptr = void (WINAPIV*)(struct CAsyncLogBufferList*);
            (org_ptr(0x1403bd460L))(this);
        };
        unsigned int GetBufferSize()
        {
            using org_ptr = unsigned int (WINAPIV*)(struct CAsyncLogBufferList*);
            return (org_ptr(0x1403c1770L))(this);
        };
        int GetEmptySize()
        {
            using org_ptr = int (WINAPIV*)(struct CAsyncLogBufferList*);
            return (org_ptr(0x1403c1790L))(this);
        };
        int GetProcCount()
        {
            using org_ptr = int (WINAPIV*)(struct CAsyncLogBufferList*);
            return (org_ptr(0x1403c1720L))(this);
        };
        bool Init(unsigned int uiMaxBufferCnt, unsigned int uiMaxBufferSize, struct CLogFile* logLoading)
        {
            using org_ptr = bool (WINAPIV*)(struct CAsyncLogBufferList*, unsigned int, unsigned int, struct CLogFile*);
            return (org_ptr(0x1403bd510L))(this, uiMaxBufferCnt, uiMaxBufferSize, logLoading);
        };
        bool Log(char* pszFileName, char* szLog, int iLen)
        {
            using org_ptr = bool (WINAPIV*)(struct CAsyncLogBufferList*, char*, char*, int);
            return (org_ptr(0x1403bd780L))(this, pszFileName, szLog, iLen);
        };
        void ProcWrite()
        {
            using org_ptr = void (WINAPIV*)(struct CAsyncLogBufferList*);
            (org_ptr(0x1403bd860L))(this);
        };
        static void WriteFile(char* pszFileName, int nLen, char* pszData)
        {
            using org_ptr = void (WINAPIV*)(char*, int, char*);
            (org_ptr(0x1403bd960L))(pszFileName, nLen, pszData);
        };
        ~CAsyncLogBufferList()
        {
            using org_ptr = void (WINAPIV*)(struct CAsyncLogBufferList*);
            (org_ptr(0x1403c1340L))(this);
        };
        void dtor_CAsyncLogBufferList()
        {
            using org_ptr = void (WINAPIV*)(struct CAsyncLogBufferList*);
            (org_ptr(0x1403c1340L))(this);
        };
    };
END_ATF_NAMESPACE
