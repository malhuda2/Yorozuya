// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "_ENTRY.hpp"


START_ATF_NAMESPACE
    struct _BSP_FILE_HEADER
    {
        unsigned int version;
        _ENTRY CPlanes;
        _ENTRY CFaceId;
        _ENTRY Node;
        _ENTRY Leaf;
        _ENTRY MatListInLeaf;
        _ENTRY Object;
        _ENTRY Track;
        _ENTRY EventObjectID;
        _ENTRY ReadSpare[35];
        _ENTRY BVertex;
        _ENTRY WVertex;
        _ENTRY FVertex;
        _ENTRY VertexColor;
        _ENTRY UV;
        _ENTRY LgtUV;
        _ENTRY Face;
        _ENTRY FaceId;
        _ENTRY VertexId;
        _ENTRY ReadMatGroup;
        _ENTRY FreeSpare[32];
    };
END_ATF_NAMESPACE
