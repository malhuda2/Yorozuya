// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"


START_ATF_NAMESPACE
    struct CMoveMapLimitRightVtbl
    {
        void (WINAPIV *CleanUp)(struct CMoveMapLimitRight *_this);
        void (WINAPIV *Load)(struct CMoveMapLimitRight *_this, CPlayer *);
        void (WINAPIV *LogIn)(struct CMoveMapLimitRight *_this, CPlayer *);
        void (WINAPIV *CreateComplete)(struct CMoveMapLimitRight *_this, CPlayer *);
        void (WINAPIV *LogOut)(struct CMoveMapLimitRight *_this, CPlayer *);
        bool (WINAPIV *IsHaveRight)(struct CMoveMapLimitRight *_this);
        void (WINAPIV *SetFlag)(struct CMoveMapLimitRight *_this, int, bool);
    };
END_ATF_NAMESPACE
