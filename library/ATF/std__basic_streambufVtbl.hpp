// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"


START_ATF_NAMESPACE
    namespace std
    {
        template<>
        struct basic_streambuf<wchar_t,char_traits<wchar_t> >Vtbl
        {
            void *(WINAPIV *__vecDelDtor)(basic_streambuf<wchar_t,char_traits<wchar_t> > *_this, unsigned int);
            __declspec(align(16)) unsigned __int16 (WINAPIV *pbackfail)(basic_streambuf<wchar_t,char_traits<wchar_t> > *_this, unsigned __int16);
            __int64 (WINAPIV *showmanyc)(basic_streambuf<wchar_t,char_traits<wchar_t> > *_this);
            unsigned __int16 (WINAPIV *underflow)(basic_streambuf<wchar_t,char_traits<wchar_t> > *_this);
            unsigned __int16 (WINAPIV *uflow)(basic_streambuf<wchar_t,char_traits<wchar_t> > *_this);
            __int64 (WINAPIV *xsgetn)(basic_streambuf<wchar_t,char_traits<wchar_t> > *_this, wchar_t *, __int64);
            __int64 (WINAPIV *_Xsgetn_s)(basic_streambuf<wchar_t,char_traits<wchar_t> > *_this, wchar_t *, unsigned __int64, __int64);
            __int64 (WINAPIV *xsputn)(basic_streambuf<wchar_t,char_traits<wchar_t> > *_this, const wchar_t *, __int64);
            fpos<int> *(WINAPIV *seekoff)(basic_streambuf<wchar_t,char_traits<wchar_t> > *_this, fpos<int> *result, __int64, int, int);
            fpos<int> *(WINAPIV *seekpos)(basic_streambuf<wchar_t,char_traits<wchar_t> > *_this, fpos<int> *result, fpos<int>, int);
            basic_streambuf<wchar_t,char_traits<wchar_t> > *(WINAPIV *setbuf)(basic_streambuf<wchar_t,char_traits<wchar_t> > *_this, wchar_t *, __int64);
            int (WINAPIV *sync)(basic_streambuf<wchar_t,char_traits<wchar_t> > *_this);
            void (WINAPIV *imbue)(basic_streambuf<wchar_t,char_traits<wchar_t> > *_this, locale *);
        };
    }; // end namespace std
END_ATF_NAMESPACE


START_ATF_NAMESPACE
    namespace std
    {
        template<>
        struct basic_streambuf<char,char_traits<char> >Vtbl
        {
            void *(WINAPIV *__vecDelDtor)(basic_streambuf<char,char_traits<char> > *_this, unsigned int);
            __declspec(align(16)) int (WINAPIV *pbackfail)(basic_streambuf<char,char_traits<char> > *_this, int);
            __int64 (WINAPIV *showmanyc)(basic_streambuf<char,char_traits<char> > *_this);
            int (WINAPIV *underflow)(basic_streambuf<char,char_traits<char> > *_this);
            int (WINAPIV *uflow)(basic_streambuf<char,char_traits<char> > *_this);
            __int64 (WINAPIV *xsgetn)(basic_streambuf<char,char_traits<char> > *_this, char *, __int64);
            __int64 (WINAPIV *_Xsgetn_s)(basic_streambuf<char,char_traits<char> > *_this, char *, unsigned __int64, __int64);
            __int64 (WINAPIV *xsputn)(basic_streambuf<char,char_traits<char> > *_this, const char *, __int64);
            fpos<int> *(WINAPIV *seekoff)(basic_streambuf<char,char_traits<char> > *_this, fpos<int> *result, __int64, int, int);
            fpos<int> *(WINAPIV *seekpos)(basic_streambuf<char,char_traits<char> > *_this, fpos<int> *result, fpos<int>, int);
            basic_streambuf<char,char_traits<char> > *(WINAPIV *setbuf)(basic_streambuf<char,char_traits<char> > *_this, char *, __int64);
            int (WINAPIV *sync)(basic_streambuf<char,char_traits<char> > *_this);
            void (WINAPIV *imbue)(basic_streambuf<char,char_traits<char> > *_this, locale *);
        };
    }; // end namespace std
END_ATF_NAMESPACE
