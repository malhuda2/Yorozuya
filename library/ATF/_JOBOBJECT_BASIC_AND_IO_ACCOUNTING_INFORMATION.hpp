// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "_IO_COUNTERS.hpp"
#include "_JOBOBJECT_BASIC_ACCOUNTING_INFORMATION.hpp"


START_ATF_NAMESPACE
    struct _JOBOBJECT_BASIC_AND_IO_ACCOUNTING_INFORMATION
    {
        _JOBOBJECT_BASIC_ACCOUNTING_INFORMATION BasicInfo;
        _IO_COUNTERS IoInfo;
    };
END_ATF_NAMESPACE
