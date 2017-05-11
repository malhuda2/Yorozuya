// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "_SYSTEMTIME.hpp"
#include "_devicemodeW.hpp"
#include "wchar_t.hpp"


START_ATF_NAMESPACE
    #pragma pack(push, 8)
    struct _JOB_INFO_2W
    {
        unsigned int JobId;
        wchar_t *pPrinterName;
        wchar_t *pMachineName;
        wchar_t *pUserName;
        wchar_t *pDocument;
        wchar_t *pNotifyName;
        wchar_t *pDatatype;
        wchar_t *pPrintProcessor;
        wchar_t *pParameters;
        wchar_t *pDriverName;
        _devicemodeW *pDevMode;
        wchar_t *pStatus;
        void *pSecurityDescriptor;
        unsigned int Status;
        unsigned int Priority;
        unsigned int Position;
        unsigned int StartTime;
        unsigned int UntilTime;
        unsigned int TotalPages;
        unsigned int Size;
        _SYSTEMTIME Submitted;
        unsigned int Time;
        unsigned int PagesPrinted;
    };
    #pragma pack(pop)
END_ATF_NAMESPACE
