// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "CList.hpp"
#include "CNoTrackObject.hpp"


START_ATF_NAMESPACE
    struct  CControlSiteFactoryMgr : CNoTrackObject
    {
        CList<IControlSiteFactory *,IControlSiteFactory *> m_lstFactory;
        struct COleControlSiteFactory *m_pOleControlSiteDefaultFactory;
    };
END_ATF_NAMESPACE
