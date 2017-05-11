// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "ListHeap.hpp"


START_ATF_NAMESPACE
    namespace info
    {
        using ListHeapInitialize2_ptr = bool (WINAPIV*)(struct ListHeap<LendItemSheet::Cell>*, uint64_t);
        using ListHeapInitialize2_clbk = bool (WINAPIV*)(struct ListHeap<LendItemSheet::Cell>*, uint64_t, ListHeapInitialize2_ptr);
        using ListHeapctor_ListHeap4_ptr = void (WINAPIV*)(struct ListHeap<LendItemSheet::Cell>*);
        using ListHeapctor_ListHeap4_clbk = void (WINAPIV*)(struct ListHeap<LendItemSheet::Cell>*, ListHeapctor_ListHeap4_ptr);
        using ListHeapRelease6_ptr = void (WINAPIV*)(struct ListHeap<LendItemSheet::Cell>*);
        using ListHeapRelease6_clbk = void (WINAPIV*)(struct ListHeap<LendItemSheet::Cell>*, ListHeapRelease6_ptr);
        using ListHeapempty8_ptr = bool (WINAPIV*)(struct ListHeap<LendItemSheet::Cell>*);
        using ListHeapempty8_clbk = bool (WINAPIV*)(struct ListHeap<LendItemSheet::Cell>*, ListHeapempty8_ptr);
        using ListHeappop10_ptr = bool (WINAPIV*)(struct ListHeap<LendItemSheet::Cell>*, struct LendItemSheet::Cell*);
        using ListHeappop10_clbk = bool (WINAPIV*)(struct ListHeap<LendItemSheet::Cell>*, struct LendItemSheet::Cell*, ListHeappop10_ptr);
        using ListHeappop12_ptr = bool (WINAPIV*)(struct ListHeap<LendItemSheet::Cell>*);
        using ListHeappop12_clbk = bool (WINAPIV*)(struct ListHeap<LendItemSheet::Cell>*, ListHeappop12_ptr);
        using ListHeappush14_ptr = bool (WINAPIV*)(struct ListHeap<LendItemSheet::Cell>*, struct LendItemSheet::Cell*);
        using ListHeappush14_clbk = bool (WINAPIV*)(struct ListHeap<LendItemSheet::Cell>*, struct LendItemSheet::Cell*, ListHeappush14_ptr);
        using ListHeapsize16_ptr = uint64_t (WINAPIV*)(struct ListHeap<LendItemSheet::Cell>*);
        using ListHeapsize16_clbk = uint64_t (WINAPIV*)(struct ListHeap<LendItemSheet::Cell>*, ListHeapsize16_ptr);
        using ListHeaptop18_ptr = struct LendItemSheet::Cell* (WINAPIV*)(struct ListHeap<LendItemSheet::Cell>*);
        using ListHeaptop18_clbk = struct LendItemSheet::Cell* (WINAPIV*)(struct ListHeap<LendItemSheet::Cell>*, ListHeaptop18_ptr);
        using ListHeapdtor_ListHeap20_ptr = void (WINAPIV*)(struct ListHeap<LendItemSheet::Cell>*);
        using ListHeapdtor_ListHeap20_clbk = void (WINAPIV*)(struct ListHeap<LendItemSheet::Cell>*, ListHeapdtor_ListHeap20_ptr);
        
        using ListHeap__CIndexListExctor_CIndexListEx2_ptr = void (WINAPIV*)(struct ListHeap<LendItemSheet::Cell>::CIndexListEx*);
        using ListHeap__CIndexListExctor_CIndexListEx2_clbk = void (WINAPIV*)(struct ListHeap<LendItemSheet::Cell>::CIndexListEx*, ListHeap__CIndexListExctor_CIndexListEx2_ptr);
        using ListHeap__CIndexListExPush4_ptr = bool (WINAPIV*)(struct ListHeap<LendItemSheet::Cell>::CIndexListEx*, struct CNetIndexList::_index_node*, unsigned int);
        using ListHeap__CIndexListExPush4_clbk = bool (WINAPIV*)(struct ListHeap<LendItemSheet::Cell>::CIndexListEx*, struct CNetIndexList::_index_node*, unsigned int, ListHeap__CIndexListExPush4_ptr);
        using ListHeap__CIndexListExdtor_CIndexListEx6_ptr = void (WINAPIV*)(struct ListHeap<LendItemSheet::Cell>::CIndexListEx*);
        using ListHeap__CIndexListExdtor_CIndexListEx6_clbk = void (WINAPIV*)(struct ListHeap<LendItemSheet::Cell>::CIndexListEx*, ListHeap__CIndexListExdtor_CIndexListEx6_ptr);
        
    }; // end namespace info
END_ATF_NAMESPACE
#include "ListHeap.hpp"


START_ATF_NAMESPACE
    namespace info
    {
        using ListHeapInitialize2_ptr = bool (WINAPIV*)(struct ListHeap<TimeLimitJade::WaitCell>*, uint64_t);
        using ListHeapInitialize2_clbk = bool (WINAPIV*)(struct ListHeap<TimeLimitJade::WaitCell>*, uint64_t, ListHeapInitialize2_ptr);
        using ListHeapctor_ListHeap4_ptr = void (WINAPIV*)(struct ListHeap<TimeLimitJade::WaitCell>*);
        using ListHeapctor_ListHeap4_clbk = void (WINAPIV*)(struct ListHeap<TimeLimitJade::WaitCell>*, ListHeapctor_ListHeap4_ptr);
        using ListHeapRelease6_ptr = void (WINAPIV*)(struct ListHeap<TimeLimitJade::WaitCell>*);
        using ListHeapRelease6_clbk = void (WINAPIV*)(struct ListHeap<TimeLimitJade::WaitCell>*, ListHeapRelease6_ptr);
        using ListHeapempty8_ptr = bool (WINAPIV*)(struct ListHeap<TimeLimitJade::WaitCell>*);
        using ListHeapempty8_clbk = bool (WINAPIV*)(struct ListHeap<TimeLimitJade::WaitCell>*, ListHeapempty8_ptr);
        using ListHeappop10_ptr = bool (WINAPIV*)(struct ListHeap<TimeLimitJade::WaitCell>*, struct TimeLimitJade::WaitCell*);
        using ListHeappop10_clbk = bool (WINAPIV*)(struct ListHeap<TimeLimitJade::WaitCell>*, struct TimeLimitJade::WaitCell*, ListHeappop10_ptr);
        using ListHeappop12_ptr = struct TimeLimitJade::WaitCell* (WINAPIV*)(struct ListHeap<TimeLimitJade::WaitCell>*, unsigned int);
        using ListHeappop12_clbk = struct TimeLimitJade::WaitCell* (WINAPIV*)(struct ListHeap<TimeLimitJade::WaitCell>*, unsigned int, ListHeappop12_ptr);
        using ListHeappop14_ptr = bool (WINAPIV*)(struct ListHeap<TimeLimitJade::WaitCell>*);
        using ListHeappop14_clbk = bool (WINAPIV*)(struct ListHeap<TimeLimitJade::WaitCell>*, ListHeappop14_ptr);
        using ListHeappush16_ptr = bool (WINAPIV*)(struct ListHeap<TimeLimitJade::WaitCell>*, struct TimeLimitJade::WaitCell*);
        using ListHeappush16_clbk = bool (WINAPIV*)(struct ListHeap<TimeLimitJade::WaitCell>*, struct TimeLimitJade::WaitCell*, ListHeappush16_ptr);
        using ListHeapsize18_ptr = uint64_t (WINAPIV*)(struct ListHeap<TimeLimitJade::WaitCell>*);
        using ListHeapsize18_clbk = uint64_t (WINAPIV*)(struct ListHeap<TimeLimitJade::WaitCell>*, ListHeapsize18_ptr);
        using ListHeaptop20_ptr = struct TimeLimitJade::WaitCell* (WINAPIV*)(struct ListHeap<TimeLimitJade::WaitCell>*);
        using ListHeaptop20_clbk = struct TimeLimitJade::WaitCell* (WINAPIV*)(struct ListHeap<TimeLimitJade::WaitCell>*, ListHeaptop20_ptr);
        using ListHeapdtor_ListHeap22_ptr = void (WINAPIV*)(struct ListHeap<TimeLimitJade::WaitCell>*);
        using ListHeapdtor_ListHeap22_clbk = void (WINAPIV*)(struct ListHeap<TimeLimitJade::WaitCell>*, ListHeapdtor_ListHeap22_ptr);
        
        using ListHeap__CIndexListExctor_CIndexListEx2_ptr = void (WINAPIV*)(struct ListHeap<TimeLimitJade::WaitCell>::CIndexListEx*);
        using ListHeap__CIndexListExctor_CIndexListEx2_clbk = void (WINAPIV*)(struct ListHeap<TimeLimitJade::WaitCell>::CIndexListEx*, ListHeap__CIndexListExctor_CIndexListEx2_ptr);
        using ListHeap__CIndexListExPush4_ptr = bool (WINAPIV*)(struct ListHeap<TimeLimitJade::WaitCell>::CIndexListEx*, struct CNetIndexList::_index_node*, unsigned int);
        using ListHeap__CIndexListExPush4_clbk = bool (WINAPIV*)(struct ListHeap<TimeLimitJade::WaitCell>::CIndexListEx*, struct CNetIndexList::_index_node*, unsigned int, ListHeap__CIndexListExPush4_ptr);
        using ListHeap__CIndexListExdtor_CIndexListEx6_ptr = void (WINAPIV*)(struct ListHeap<TimeLimitJade::WaitCell>::CIndexListEx*);
        using ListHeap__CIndexListExdtor_CIndexListEx6_clbk = void (WINAPIV*)(struct ListHeap<TimeLimitJade::WaitCell>::CIndexListEx*, ListHeap__CIndexListExdtor_CIndexListEx6_ptr);
        
    }; // end namespace info
END_ATF_NAMESPACE
#include "ListHeap.hpp"


START_ATF_NAMESPACE
    namespace info
    {
        using ListHeapInitialize2_ptr = bool (WINAPIV*)(struct ListHeap<TimeLimitJade::UseCell>*, uint64_t);
        using ListHeapInitialize2_clbk = bool (WINAPIV*)(struct ListHeap<TimeLimitJade::UseCell>*, uint64_t, ListHeapInitialize2_ptr);
        using ListHeapctor_ListHeap4_ptr = void (WINAPIV*)(struct ListHeap<TimeLimitJade::UseCell>*);
        using ListHeapctor_ListHeap4_clbk = void (WINAPIV*)(struct ListHeap<TimeLimitJade::UseCell>*, ListHeapctor_ListHeap4_ptr);
        using ListHeapRelease6_ptr = void (WINAPIV*)(struct ListHeap<TimeLimitJade::UseCell>*);
        using ListHeapRelease6_clbk = void (WINAPIV*)(struct ListHeap<TimeLimitJade::UseCell>*, ListHeapRelease6_ptr);
        using ListHeapempty8_ptr = bool (WINAPIV*)(struct ListHeap<TimeLimitJade::UseCell>*);
        using ListHeapempty8_clbk = bool (WINAPIV*)(struct ListHeap<TimeLimitJade::UseCell>*, ListHeapempty8_ptr);
        using ListHeappop10_ptr = bool (WINAPIV*)(struct ListHeap<TimeLimitJade::UseCell>*, struct TimeLimitJade::UseCell*);
        using ListHeappop10_clbk = bool (WINAPIV*)(struct ListHeap<TimeLimitJade::UseCell>*, struct TimeLimitJade::UseCell*, ListHeappop10_ptr);
        using ListHeappop12_ptr = bool (WINAPIV*)(struct ListHeap<TimeLimitJade::UseCell>*);
        using ListHeappop12_clbk = bool (WINAPIV*)(struct ListHeap<TimeLimitJade::UseCell>*, ListHeappop12_ptr);
        using ListHeappush14_ptr = bool (WINAPIV*)(struct ListHeap<TimeLimitJade::UseCell>*, struct TimeLimitJade::UseCell*);
        using ListHeappush14_clbk = bool (WINAPIV*)(struct ListHeap<TimeLimitJade::UseCell>*, struct TimeLimitJade::UseCell*, ListHeappush14_ptr);
        using ListHeapsize16_ptr = uint64_t (WINAPIV*)(struct ListHeap<TimeLimitJade::UseCell>*);
        using ListHeapsize16_clbk = uint64_t (WINAPIV*)(struct ListHeap<TimeLimitJade::UseCell>*, ListHeapsize16_ptr);
        using ListHeaptop18_ptr = struct TimeLimitJade::UseCell* (WINAPIV*)(struct ListHeap<TimeLimitJade::UseCell>*);
        using ListHeaptop18_clbk = struct TimeLimitJade::UseCell* (WINAPIV*)(struct ListHeap<TimeLimitJade::UseCell>*, ListHeaptop18_ptr);
        using ListHeapdtor_ListHeap20_ptr = void (WINAPIV*)(struct ListHeap<TimeLimitJade::UseCell>*);
        using ListHeapdtor_ListHeap20_clbk = void (WINAPIV*)(struct ListHeap<TimeLimitJade::UseCell>*, ListHeapdtor_ListHeap20_ptr);
        
        using ListHeap__CIndexListExctor_CIndexListEx2_ptr = void (WINAPIV*)(struct ListHeap<TimeLimitJade::UseCell>::CIndexListEx*);
        using ListHeap__CIndexListExctor_CIndexListEx2_clbk = void (WINAPIV*)(struct ListHeap<TimeLimitJade::UseCell>::CIndexListEx*, ListHeap__CIndexListExctor_CIndexListEx2_ptr);
        using ListHeap__CIndexListExPush4_ptr = bool (WINAPIV*)(struct ListHeap<TimeLimitJade::UseCell>::CIndexListEx*, struct CNetIndexList::_index_node*, unsigned int);
        using ListHeap__CIndexListExPush4_clbk = bool (WINAPIV*)(struct ListHeap<TimeLimitJade::UseCell>::CIndexListEx*, struct CNetIndexList::_index_node*, unsigned int, ListHeap__CIndexListExPush4_ptr);
        using ListHeap__CIndexListExdtor_CIndexListEx6_ptr = void (WINAPIV*)(struct ListHeap<TimeLimitJade::UseCell>::CIndexListEx*);
        using ListHeap__CIndexListExdtor_CIndexListEx6_clbk = void (WINAPIV*)(struct ListHeap<TimeLimitJade::UseCell>::CIndexListEx*, ListHeap__CIndexListExdtor_CIndexListEx6_ptr);
        
    }; // end namespace info
END_ATF_NAMESPACE
