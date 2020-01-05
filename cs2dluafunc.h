/*
 * CS2D Lua wrapper
 * Copyright (c) 2020 Miku AuahDark
 *
 * Permission is hereby granted, free of charge, to any person obtaining a 
 * copy of this software and associated documentation files (the "Software"), 
 * to deal in the Software without restriction, including without limitation 
 * the rights to use, copy, modify, merge, publish, distribute, sublicense, 
 * and/or sell copies of the Software, and to permit persons to whom the 
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in 
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS 
 * OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, 
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE 
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER 
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING 
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER 
 * DEALINGS IN THE SOFTWARE.
 */

#ifndef _CS2D_LUA_FUNCTIONS_H
#define _CS2D_LUA_FUNCTIONS_H

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

#include "lua.h"
#include "lauxlib.h"

/*
 * Don't delete the "MATCHGEN" comment, it's used to generate the
 * function address list by "generate_func.lua"!
 */

typedef struct LuaFunctionPointer
{
	/* Offset */
	void *dedicatedOffset, *clientOffset;
	void *findDedicatedOffset, *findClientOffset;
	unsigned int checksumDedicated, checksumClient;

	/* State manipulation */
	/*MATCHGEN*/lua_State*   (*lua_newstate) (lua_Alloc, void*);
	/*MATCHGEN*/void         (*lua_close) (lua_State*);
	/*MATCHGEN*/lua_State*   (*lua_newthread) (lua_State*);
	/*MATCHGEN*/lua_CFunction(*lua_atpanic) (lua_State*, lua_CFunction);

	/* Basic stack manipulation */
	/*MATCHGEN*/int (*lua_gettop) (lua_State*);
	/*MATCHGEN*/void(*lua_settop) (lua_State*, int);
	/*MATCHGEN*/void(*lua_pushvalue) (lua_State*, int);
	/*MATCHGEN*/void(*lua_remove) (lua_State*, int);
	/*MATCHGEN*/void(*lua_insert) (lua_State*, int);
	/*MATCHGEN*/void(*lua_replace) (lua_State*, int);
	/*MATCHGEN*/int (*lua_checkstack) (lua_State*, int);
	/*MATCHGEN*/void(*lua_xmove) (lua_State*, lua_State*, int);

	/* Access functions (stack -> C) */
	/*MATCHGEN*/int          (*lua_isnumber) (lua_State*, int);
	/*MATCHGEN*/int          (*lua_isstring) (lua_State*, int);
	/*MATCHGEN*/int          (*lua_iscfunction) (lua_State*, int);
	/*MATCHGEN*/int          (*lua_isuserdata) (lua_State*, int);
	/*MATCHGEN*/int          (*lua_type) (lua_State*, int);
	/*MATCHGEN*/const char*  (*lua_typename) (lua_State*, int);
	/*MATCHGEN*/int          (*lua_equal) (lua_State*, int, int);
	/*MATCHGEN*/int          (*lua_rawequal) (lua_State*, int, int);
	/*MATCHGEN*/int          (*lua_lessthan) (lua_State*, int, int);
	/*MATCHGEN*/lua_Number   (*lua_tonumber) (lua_State*, int);
	/*MATCHGEN*/lua_Integer  (*lua_tointeger) (lua_State*, int);
	/*MATCHGEN*/int          (*lua_toboolean) (lua_State*, int);
	/*MATCHGEN*/const char*  (*lua_tolstring) (lua_State*, int, size_t*);
	/*MATCHGEN*/size_t       (*lua_objlen) (lua_State*, int);
	/*MATCHGEN*/lua_CFunction(*lua_tocfunction) (lua_State*, int);
	/*MATCHGEN*/void*        (*lua_touserdata) (lua_State*, int);
	/*MATCHGEN*/lua_State*   (*lua_tothread) (lua_State*, int);
	/*MATCHGEN*/const void*  (*lua_topointer) (lua_State*, int);

	/* Push functions (C -> stack) */
	/*MATCHGEN*/void       (*lua_pushnil) (lua_State*);
	/*MATCHGEN*/void       (*lua_pushnumber) (lua_State*, lua_Number);
	/*MATCHGEN*/void       (*lua_pushinteger) (lua_State*, lua_Integer);
	/*MATCHGEN*/void       (*lua_pushlstring) (lua_State*, const char*, size_t);
	/*MATCHGEN*/void       (*lua_pushstring) (lua_State*, const char*);
	/*MATCHGEN*/const char*(*lua_pushvfstring) (lua_State*, const char*, va_list);
	/*MATCHGEN*/void       (*lua_pushcclosure) (lua_State*, lua_CFunction, int);
	/*MATCHGEN*/void       (*lua_pushboolean) (lua_State*, int);
	/*MATCHGEN*/void       (*lua_pushlightuserdata) (lua_State*, void*);
	/*MATCHGEN*/int        (*lua_pushthread) (lua_State*);

	/* Get functions (Lua -> stack) */
	/*MATCHGEN*/void (*lua_gettable) (lua_State*, int);
	/*MATCHGEN*/void (*lua_getfield) (lua_State*, int, const char*);
	/*MATCHGEN*/void (*lua_rawget) (lua_State*, int);
	/*MATCHGEN*/void (*lua_rawgeti) (lua_State*, int, int);
	/*MATCHGEN*/void (*lua_createtable) (lua_State*, int, int);
	/*MATCHGEN*/void*(*lua_newuserdata) (lua_State*, size_t);
	/*MATCHGEN*/int  (*lua_getmetatable) (lua_State*, int);
	/*MATCHGEN*/void (*lua_getfenv) (lua_State*, int);

	/* Set functions (stack -> Lua) */
	/*MATCHGEN*/void(*lua_settable) (lua_State*, int);
	/*MATCHGEN*/void(*lua_setfield) (lua_State*, int, const char*);
	/*MATCHGEN*/void(*lua_rawset) (lua_State*, int);
	/*MATCHGEN*/void(*lua_rawseti) (lua_State*, int, int);
	/*MATCHGEN*/int (*lua_setmetatable) (lua_State*, int);
	/*MATCHGEN*/int (*lua_setfenv) (lua_State*, int);

	/* `load' and `call' functions (load and run Lua code) */
	/*MATCHGEN*/void(*lua_call) (lua_State*, int, int);
	/*MATCHGEN*/int (*lua_pcall) (lua_State*, int, int, int);
	/*MATCHGEN*/int (*lua_cpcall) (lua_State*, lua_CFunction, void*);
	/*MATCHGEN*/int (*lua_load) (lua_State*, lua_Reader, void*, const char*);
	/*MATCHGEN*/int (*lua_dump) (lua_State*, lua_Writer, void*);

	/* Coroutine functions */
	/*MATCHGEN*/int(*lua_yield) (lua_State*, int);
	/*MATCHGEN*/int(*lua_resume) (lua_State*, int);
	/*MATCHGEN*/int(*lua_status) (lua_State*);

	/* Garbage-collection function */
	/*MATCHGEN*/int(*lua_gc) (lua_State*, int, int);

	/* Miscellaneous functions */
	/*MATCHGEN*/int      (*lua_error) (lua_State*);
	/*MATCHGEN*/int      (*lua_next) (lua_State*, int);
	/*MATCHGEN*/void     (*lua_concat) (lua_State*, int);
	/*MATCHGEN*/lua_Alloc(*lua_getallocf) (lua_State*, void**);
	/*MATCHGEN*/void     (*lua_setallocf) (lua_State*, lua_Alloc,void*);

	/* Functions to be called by the debuger in specific events */
	/*MATCHGEN*/int        (*lua_getstack) (lua_State*, int, lua_Debug*);
	/*MATCHGEN*/int        (*lua_getinfo) (lua_State*, const char*, lua_Debug*);
	/*MATCHGEN*/const char*(*lua_getlocal) (lua_State*, const lua_Debug*, int);
	/*MATCHGEN*/const char*(*lua_setlocal) (lua_State*, const lua_Debug*, int);
	/*MATCHGEN*/const char*(*lua_getupvalue) (lua_State*, int, int);
	/*MATCHGEN*/const char*(*lua_setupvalue) (lua_State*, int, int);
	/*MATCHGEN*/int        (*lua_sethook) (lua_State*, lua_Hook, int, int);
	/*MATCHGEN*/lua_Hook   (*lua_gethook) (lua_State*);
	/*MATCHGEN*/int        (*lua_gethookmask) (lua_State*);
	/*MATCHGEN*/int        (*lua_gethookcount) (lua_State*);

	/* Lua libraries */
	/*MATCHGEN*/int (*luaopen_base) (lua_State*);
	/*MATCHGEN*/int (*luaopen_table) (lua_State*);
	/*MATCHGEN*/int (*luaopen_io) (lua_State*);
	/*MATCHGEN*/int (*luaopen_os) (lua_State*);
	/*MATCHGEN*/int (*luaopen_string) (lua_State*);
	/*MATCHGEN*/int (*luaopen_math) (lua_State*);
	/*MATCHGEN*/int (*luaopen_debug) (lua_State*);
	/*MATCHGEN*/int (*luaopen_package) (lua_State*);
	/*MATCHGEN*/void(*luaL_openlibs) (lua_State*);

	/* Auxillary functions */
	/*MATCHGEN*/void       (*luaI_openlib) (lua_State*, const char*, const luaL_Reg*, int);
	/*MATCHGEN*/void       (*luaL_register) (lua_State*, const char*, const luaL_Reg*);
	/*MATCHGEN*/int        (*luaL_getmetafield) (lua_State*, int, const char*);
	/*MATCHGEN*/int        (*luaL_callmeta) (lua_State*, int, const char*);
	/*MATCHGEN*/int        (*luaL_typerror) (lua_State*, int, const char*);
	/*MATCHGEN*/int        (*luaL_argerror) (lua_State*, int, const char*);
	/*MATCHGEN*/const char*(*luaL_checklstring) (lua_State*, int, size_t*);
	/*MATCHGEN*/const char*(*luaL_optlstring) (lua_State*, int, const char*, size_t*);
	/*MATCHGEN*/lua_Number (*luaL_checknumber) (lua_State*, int);
	/*MATCHGEN*/lua_Number (*luaL_optnumber) (lua_State*, int, lua_Number);
	/*MATCHGEN*/lua_Integer(*luaL_checkinteger) (lua_State*, int);
	/*MATCHGEN*/lua_Integer(*luaL_optinteger) (lua_State*, int, lua_Integer);
	/*MATCHGEN*/void       (*luaL_checkstack) (lua_State*, int, const char*);
	/*MATCHGEN*/void       (*luaL_checktype) (lua_State*, int, int);
	/*MATCHGEN*/void       (*luaL_checkany) (lua_State*, int);
	/*MATCHGEN*/int        (*luaL_newmetatable) (lua_State*, const char*);
	/*MATCHGEN*/void*      (*luaL_checkudata) (lua_State*, int, const char*);
	/*MATCHGEN*/void       (*luaL_where) (lua_State*, int);
	/*MATCHGEN*/int        (*luaL_checkoption) (lua_State*, int, const char*, const char* const*);
	/*MATCHGEN*/int        (*luaL_ref) (lua_State*, int);
	/*MATCHGEN*/void       (*luaL_unref) (lua_State*, int, int);
	/*MATCHGEN*/int        (*luaL_loadfile) (lua_State*, const char*);
	/*MATCHGEN*/int        (*luaL_loadbuffer) (lua_State*, const char*, size_t, const char*);
	/*MATCHGEN*/int        (*luaL_loadstring) (lua_State*, const char*);
	/*MATCHGEN*/lua_State* (*luaL_newstate) (void);
	/*MATCHGEN*/const char*(*luaL_gsub) (lua_State*, const char*, const char*, const char*);
	/*MATCHGEN*/const char*(*luaL_findtable) (lua_State*, int, const char*, int);

	/* Generic Buffer manipulation */
	/*MATCHGEN*/void (*luaL_buffinit) (lua_State*, luaL_Buffer*);
	/*MATCHGEN*/char*(*luaL_prepbuffer) (luaL_Buffer*);
	/*MATCHGEN*/void (*luaL_addlstring) (luaL_Buffer*, const char*, size_t);
	/*MATCHGEN*/void (*luaL_addstring) (luaL_Buffer*, const char*);
	/*MATCHGEN*/void (*luaL_addvalue) (luaL_Buffer*);
	/*MATCHGEN*/void (*luaL_pushresult) (luaL_Buffer*);
} LuaFunctionPointer;

#ifdef __cplusplus
} /* extern "C" */
#endif /* __cplusplus */
#endif
