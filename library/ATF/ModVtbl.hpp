// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"


START_ATF_NAMESPACE
    struct ModVtbl
    {
        unsigned int (WINAPIV *QueryInterfaceVersion)(Mod *_this);
        BYTE gap8[32];
        int (WINAPIV *AddLines)(Mod *_this, const char *, unsigned __int16, int, int, int, unsigned __int16, char *, int);
        int (WINAPIV *AddSecContrib)(Mod *_this, unsigned __int16, int, int, unsigned int);
        int (WINAPIV *QueryCBName)(Mod *_this, int *);
        int (WINAPIV *QueryName)(Mod *_this, char *, int *);
        int (WINAPIV *QuerySymbols)(Mod *_this, char *, int *);
        int (WINAPIV *QueryLines)(Mod *_this, char *, int *);
        int (WINAPIV *SetPvClient)(Mod *_this, void *);
        int (WINAPIV *GetPvClient)(Mod *_this, void **);
        int (WINAPIV *QueryFirstCodeSecContrib)(Mod *_this, unsigned __int16 *, int *, int *, unsigned int *);
        int (WINAPIV *QueryImod)(Mod *_this, unsigned __int16 *);
        int (WINAPIV *QueryDBI)(Mod *_this, DBI **);
        int (WINAPIV *Close)(Mod *_this);
        int (WINAPIV *QueryCBFile)(Mod *_this, int *);
        int (WINAPIV *QueryFile)(Mod *_this, char *, int *);
        int (WINAPIV *QueryTpi)(Mod *_this, TPI **);
        int (WINAPIV *AddSecContribEx)(Mod *_this, unsigned __int16, int, int, unsigned int, unsigned int, unsigned int);
        int (WINAPIV *QueryItsm)(Mod *_this, unsigned __int16 *);
        int (WINAPIV *QuerySrcFile)(Mod *_this, char *, int *);
        int (WINAPIV *QuerySupportsEC)(Mod *_this);
        int (WINAPIV *QueryPdbFile)(Mod *_this, char *, int *);
        int (WINAPIV *ReplaceLines)(Mod *_this, char *, int);
        bool (WINAPIV *GetEnumLines)(Mod *_this, EnumLines **);
        bool (WINAPIV *QueryLineFlags)(Mod *_this, unsigned int *);
        bool (WINAPIV *QueryFileNameInfo)(Mod *_this, unsigned int, wchar_t *, unsigned int *, unsigned int *, char *, unsigned int *);
        int (WINAPIV *AddPublicW)(Mod *_this, const wchar_t *, unsigned __int16, int, unsigned int);
        int (WINAPIV *AddLinesW)(Mod *_this, const wchar_t *, unsigned __int16, int, int, int, unsigned int, char *, int);
        int (WINAPIV *QueryNameW)(Mod *_this, wchar_t *, int *);
        int (WINAPIV *QueryFileW)(Mod *_this, wchar_t *, int *);
        int (WINAPIV *QuerySrcFileW)(Mod *_this, wchar_t *, int *);
        int (WINAPIV *QueryPdbFileW)(Mod *_this, wchar_t *, int *);
        int (WINAPIV *AddPublic2)(Mod *_this, const char *, unsigned __int16, int, unsigned int);
        int (WINAPIV *InsertLines)(Mod *_this, char *, int);
        int (WINAPIV *QueryLines2)(Mod *_this, int, char *, int *);
    };
END_ATF_NAMESPACE
