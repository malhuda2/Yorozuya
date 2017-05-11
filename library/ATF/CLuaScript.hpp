// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "CLuaCommand.hpp"
#include "CLuaScriptVtbl.hpp"


START_ATF_NAMESPACE
    #pragma pack(push, 8)
    struct CLuaScript
    {
        struct _State
        {
            bool m_bExist;
            bool m_bAttached;
        public:
            _State()
            {
                using org_ptr = void (WINAPIV*)(struct _State*);
                (org_ptr(0x140402270L))(this);
            };
            void ctor__State()
            {
                using org_ptr = void (WINAPIV*)(struct _State*);
                (org_ptr(0x140402270L))(this);
            };
        };
        CLuaScriptVtbl *vfptr;
        struct lua_State *m_MyState;
        char m_strName[260];
    public:
        CLuaScript()
        {
            using org_ptr = void (WINAPIV*)(struct CLuaScript*);
            (org_ptr(0x140401ed0L))(this);
        };
        void ctor_CLuaScript()
        {
            using org_ptr = void (WINAPIV*)(struct CLuaScript*);
            (org_ptr(0x140401ed0L))(this);
        };
        lua_State* GetLuaState()
        {
            using org_ptr = lua_State* (WINAPIV*)(struct CLuaScript*);
            return (org_ptr(0x140401f50L))(this);
        };
        char* GetName()
        {
            using org_ptr = char* (WINAPIV*)(struct CLuaScript*);
            return (org_ptr(0x140401f30L))(this);
        };
        bool RunCommand(struct CLuaCommand* pCommand)
        {
            using org_ptr = bool (WINAPIV*)(struct CLuaScript*, struct CLuaCommand*);
            return (org_ptr(0x1403ff0d0L))(this, pCommand);
        };
        void SetName(char* strName)
        {
            using org_ptr = void (WINAPIV*)(struct CLuaScript*, char*);
            (org_ptr(0x140401f70L))(this, strName);
        };
        ~CLuaScript()
        {
            using org_ptr = void (WINAPIV*)(struct CLuaScript*);
            (org_ptr(0x140401f10L))(this);
        };
        void dtor_CLuaScript()
        {
            using org_ptr = void (WINAPIV*)(struct CLuaScript*);
            (org_ptr(0x140401f10L))(this);
        };
    };
    #pragma pack(pop)
END_ATF_NAMESPACE
