// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "CRect.hpp"


START_ATF_NAMESPACE
    namespace info
    {
        using CRectBottomRight1_ptr = struct CPoint* (WINAPIV*)(struct CRect*);
        using CRectBottomRight1_clbk = struct CPoint* (WINAPIV*)(struct CRect*, CRectBottomRight1_ptr);
        using CRectBottomRight2_ptr = struct CPoint* (WINAPIV*)(struct CRect*);
        using CRectBottomRight2_clbk = struct CPoint* (WINAPIV*)(struct CRect*, CRectBottomRight2_ptr);
        using CRectctor_CRect3_ptr = void (WINAPIV*)(struct CRect*, int, int, int, int);
        using CRectctor_CRect3_clbk = void (WINAPIV*)(struct CRect*, int, int, int, int, CRectctor_CRect3_ptr);
        using CRectctor_CRect4_ptr = void (WINAPIV*)(struct CRect*, struct tagPOINT, struct tagPOINT);
        using CRectctor_CRect4_clbk = void (WINAPIV*)(struct CRect*, struct tagPOINT, struct tagPOINT, CRectctor_CRect4_ptr);
        using CRectctor_CRect5_ptr = void (WINAPIV*)(struct CRect*, struct tagPOINT, struct tagSIZE);
        using CRectctor_CRect5_clbk = void (WINAPIV*)(struct CRect*, struct tagPOINT, struct tagSIZE, CRectctor_CRect5_ptr);
        using CRectctor_CRect6_ptr = void (WINAPIV*)(struct CRect*, struct tagRECT*);
        using CRectctor_CRect6_clbk = void (WINAPIV*)(struct CRect*, struct tagRECT*, CRectctor_CRect6_ptr);
        using CRectctor_CRect7_ptr = void (WINAPIV*)(struct CRect*, struct tagRECT*);
        using CRectctor_CRect7_clbk = void (WINAPIV*)(struct CRect*, struct tagRECT*, CRectctor_CRect7_ptr);
        using CRectctor_CRect8_ptr = void (WINAPIV*)(struct CRect*);
        using CRectctor_CRect8_clbk = void (WINAPIV*)(struct CRect*, CRectctor_CRect8_ptr);
        using CRectCenterPoint9_ptr = struct CPoint* (WINAPIV*)(struct CRect*, struct CPoint*);
        using CRectCenterPoint9_clbk = struct CPoint* (WINAPIV*)(struct CRect*, struct CPoint*, CRectCenterPoint9_ptr);
        using CRectCopyRect10_ptr = void (WINAPIV*)(struct CRect*, struct tagRECT*);
        using CRectCopyRect10_clbk = void (WINAPIV*)(struct CRect*, struct tagRECT*, CRectCopyRect10_ptr);
        using CRectDeflateRect11_ptr = void (WINAPIV*)(struct CRect*, int, int);
        using CRectDeflateRect11_clbk = void (WINAPIV*)(struct CRect*, int, int, CRectDeflateRect11_ptr);
        using CRectDeflateRect12_ptr = void (WINAPIV*)(struct CRect*, int, int, int, int);
        using CRectDeflateRect12_clbk = void (WINAPIV*)(struct CRect*, int, int, int, int, CRectDeflateRect12_ptr);
        using CRectDeflateRect13_ptr = void (WINAPIV*)(struct CRect*, struct tagRECT*);
        using CRectDeflateRect13_clbk = void (WINAPIV*)(struct CRect*, struct tagRECT*, CRectDeflateRect13_ptr);
        using CRectDeflateRect14_ptr = void (WINAPIV*)(struct CRect*, struct tagSIZE);
        using CRectDeflateRect14_clbk = void (WINAPIV*)(struct CRect*, struct tagSIZE, CRectDeflateRect14_ptr);
        using CRectEqualRect15_ptr = int (WINAPIV*)(struct CRect*, struct tagRECT*);
        using CRectEqualRect15_clbk = int (WINAPIV*)(struct CRect*, struct tagRECT*, CRectEqualRect15_ptr);
        using CRectHeight16_ptr = int (WINAPIV*)(struct CRect*);
        using CRectHeight16_clbk = int (WINAPIV*)(struct CRect*, CRectHeight16_ptr);
        using CRectInflateRect17_ptr = void (WINAPIV*)(struct CRect*, int, int);
        using CRectInflateRect17_clbk = void (WINAPIV*)(struct CRect*, int, int, CRectInflateRect17_ptr);
        using CRectInflateRect18_ptr = void (WINAPIV*)(struct CRect*, int, int, int, int);
        using CRectInflateRect18_clbk = void (WINAPIV*)(struct CRect*, int, int, int, int, CRectInflateRect18_ptr);
        using CRectInflateRect19_ptr = void (WINAPIV*)(struct CRect*, struct tagRECT*);
        using CRectInflateRect19_clbk = void (WINAPIV*)(struct CRect*, struct tagRECT*, CRectInflateRect19_ptr);
        using CRectInflateRect20_ptr = void (WINAPIV*)(struct CRect*, struct tagSIZE);
        using CRectInflateRect20_clbk = void (WINAPIV*)(struct CRect*, struct tagSIZE, CRectInflateRect20_ptr);
        using CRectIntersectRect21_ptr = int (WINAPIV*)(struct CRect*, struct tagRECT*, struct tagRECT*);
        using CRectIntersectRect21_clbk = int (WINAPIV*)(struct CRect*, struct tagRECT*, struct tagRECT*, CRectIntersectRect21_ptr);
        using CRectIsRectEmpty22_ptr = int (WINAPIV*)(struct CRect*);
        using CRectIsRectEmpty22_clbk = int (WINAPIV*)(struct CRect*, CRectIsRectEmpty22_ptr);
        using CRectIsRectNull23_ptr = int (WINAPIV*)(struct CRect*);
        using CRectIsRectNull23_clbk = int (WINAPIV*)(struct CRect*, CRectIsRectNull23_ptr);
        using CRectMoveToX24_ptr = void (WINAPIV*)(struct CRect*, int);
        using CRectMoveToX24_clbk = void (WINAPIV*)(struct CRect*, int, CRectMoveToX24_ptr);
        using CRectMoveToXY25_ptr = void (WINAPIV*)(struct CRect*, int, int);
        using CRectMoveToXY25_clbk = void (WINAPIV*)(struct CRect*, int, int, CRectMoveToXY25_ptr);
        using CRectMoveToXY26_ptr = void (WINAPIV*)(struct CRect*, struct tagPOINT);
        using CRectMoveToXY26_clbk = void (WINAPIV*)(struct CRect*, struct tagPOINT, CRectMoveToXY26_ptr);
        using CRectMoveToY27_ptr = void (WINAPIV*)(struct CRect*, int);
        using CRectMoveToY27_clbk = void (WINAPIV*)(struct CRect*, int, CRectMoveToY27_ptr);
        using CRectMulDiv28_ptr = struct CRect* (WINAPIV*)(struct CRect*, struct CRect*, int, int);
        using CRectMulDiv28_clbk = struct CRect* (WINAPIV*)(struct CRect*, struct CRect*, int, int, CRectMulDiv28_ptr);
        using CRectNormalizeRect29_ptr = void (WINAPIV*)(struct CRect*);
        using CRectNormalizeRect29_clbk = void (WINAPIV*)(struct CRect*, CRectNormalizeRect29_ptr);
        using CRectOffsetRect30_ptr = void (WINAPIV*)(struct CRect*, int, int);
        using CRectOffsetRect30_clbk = void (WINAPIV*)(struct CRect*, int, int, CRectOffsetRect30_ptr);
        using CRectOffsetRect31_ptr = void (WINAPIV*)(struct CRect*, struct tagPOINT);
        using CRectOffsetRect31_clbk = void (WINAPIV*)(struct CRect*, struct tagPOINT, CRectOffsetRect31_ptr);
        using CRectOffsetRect32_ptr = void (WINAPIV*)(struct CRect*, struct tagSIZE);
        using CRectOffsetRect32_clbk = void (WINAPIV*)(struct CRect*, struct tagSIZE, CRectOffsetRect32_ptr);
        using CRectPtInRect33_ptr = int (WINAPIV*)(struct CRect*, struct tagPOINT);
        using CRectPtInRect33_clbk = int (WINAPIV*)(struct CRect*, struct tagPOINT, CRectPtInRect33_ptr);
        using CRectSetRect34_ptr = void (WINAPIV*)(struct CRect*, int, int, int, int);
        using CRectSetRect34_clbk = void (WINAPIV*)(struct CRect*, int, int, int, int, CRectSetRect34_ptr);
        using CRectSetRect35_ptr = void (WINAPIV*)(struct CRect*, struct tagPOINT, struct tagPOINT);
        using CRectSetRect35_clbk = void (WINAPIV*)(struct CRect*, struct tagPOINT, struct tagPOINT, CRectSetRect35_ptr);
        using CRectSetRectEmpty36_ptr = void (WINAPIV*)(struct CRect*);
        using CRectSetRectEmpty36_clbk = void (WINAPIV*)(struct CRect*, CRectSetRectEmpty36_ptr);
        using CRectSize37_ptr = struct CSize* (WINAPIV*)(struct CRect*, struct CSize*);
        using CRectSize37_clbk = struct CSize* (WINAPIV*)(struct CRect*, struct CSize*, CRectSize37_ptr);
        using CRectSubtractRect38_ptr = int (WINAPIV*)(struct CRect*, struct tagRECT*, struct tagRECT*);
        using CRectSubtractRect38_clbk = int (WINAPIV*)(struct CRect*, struct tagRECT*, struct tagRECT*, CRectSubtractRect38_ptr);
        using CRectSwapLeftRight39_ptr = void (WINAPIV*)(struct tagRECT*);
        using CRectSwapLeftRight39_clbk = void (WINAPIV*)(struct tagRECT*, CRectSwapLeftRight39_ptr);
        using CRectSwapLeftRight40_ptr = void (WINAPIV*)(struct CRect*);
        using CRectSwapLeftRight40_clbk = void (WINAPIV*)(struct CRect*, CRectSwapLeftRight40_ptr);
        using CRectTopLeft41_ptr = struct CPoint* (WINAPIV*)(struct CRect*);
        using CRectTopLeft41_clbk = struct CPoint* (WINAPIV*)(struct CRect*, CRectTopLeft41_ptr);
        using CRectTopLeft42_ptr = struct CPoint* (WINAPIV*)(struct CRect*);
        using CRectTopLeft42_clbk = struct CPoint* (WINAPIV*)(struct CRect*, CRectTopLeft42_ptr);
        using CRectUnionRect43_ptr = int (WINAPIV*)(struct CRect*, struct tagRECT*, struct tagRECT*);
        using CRectUnionRect43_clbk = int (WINAPIV*)(struct CRect*, struct tagRECT*, struct tagRECT*, CRectUnionRect43_ptr);
        using CRectWidth44_ptr = int (WINAPIV*)(struct CRect*);
        using CRectWidth44_clbk = int (WINAPIV*)(struct CRect*, CRectWidth44_ptr);
        
    }; // end namespace info
END_ATF_NAMESPACE
