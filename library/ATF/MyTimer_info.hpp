// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "MyTimer.hpp"


START_ATF_NAMESPACE
    namespace info
    {
        using MyTimerGetTime2_ptr = struct MyTimer::TIME* (WINAPIV*)();
        using MyTimerGetTime2_clbk = struct MyTimer::TIME* (WINAPIV*)(MyTimerGetTime2_ptr);
        
        using MyTimer__TIMEctor_TIME2_ptr = void (WINAPIV*)(struct MyTimer::TIME*);
        using MyTimer__TIMEctor_TIME2_clbk = void (WINAPIV*)(struct MyTimer::TIME*, MyTimer__TIMEctor_TIME2_ptr);
        
    }; // end namespace info
END_ATF_NAMESPACE
