// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "tagPAGERANGE.hpp"


START_ATF_NAMESPACE
    struct tagPAGESET
    {
        unsigned int cbStruct;
        int fOddPages;
        int fEvenPages;
        unsigned int cPageRange;
        tagPAGERANGE rgPages[1];
    };
END_ATF_NAMESPACE
