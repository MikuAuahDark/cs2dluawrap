/* This header is generated by generate_func.lua */

#include "../cs2dluafunc.h"

LuaFunctionPointer luaFunction = {
	(void*) 5392U, (void*) 5392U,
	(void*) 3424352U, (void*) 4811656U,
	3587594058U, 3013000793U,
	/* lua_newstate */ (lua_State*(*)(lua_Alloc, void*)) 11872,
	/* lua_close */ (void(*)(lua_State*)) 12192,
	/* lua_newthread */ (lua_State*(*)(lua_State*)) 5616,
	/* lua_atpanic */ (lua_CFunction(*)(lua_State*, lua_CFunction)) 5584,
	/* lua_gettop */ (int(*)(lua_State*)) 5728,
	/* lua_settop */ (void(*)(lua_State*, int)) 5760,
	/* lua_pushvalue */ (void(*)(lua_State*, int)) 6224,
	/* lua_remove */ (void(*)(lua_State*, int)) 5840,
	/* lua_insert */ (void(*)(lua_State*, int)) 5920,
	/* lua_replace */ (void(*)(lua_State*, int)) 6000,
	/* lua_checkstack */ (int(*)(lua_State*, int)) 5312,
	/* lua_xmove */ (void(*)(lua_State*, lua_State*, int)) 5440,
	/* lua_isnumber */ (int(*)(lua_State*, int)) 6384,
	/* lua_isstring */ (int(*)(lua_State*, int)) 6448,
	/* lua_iscfunction */ (int(*)(lua_State*, int)) 6336,
	/* lua_isuserdata */ (int(*)(lua_State*, int)) 6496,
	/* lua_type */ (int(*)(lua_State*, int)) 6272,
	/* lua_typename */ (const char*(*)(lua_State*, int)) 6304,
	/* lua_equal */ (int(*)(lua_State*, int, int)) 6624,
	/* lua_rawequal */ (int(*)(lua_State*, int, int)) 6544,
	/* lua_lessthan */ (int(*)(lua_State*, int, int)) 6720,
	/* lua_tonumber */ (lua_Number(*)(lua_State*, int)) 6800,
	/* lua_tointeger */ (lua_Integer(*)(lua_State*, int)) 6864,
	/* lua_toboolean */ (int(*)(lua_State*, int)) 6928,
	/* lua_tolstring */ (const char*(*)(lua_State*, int, size_t*)) 6976,
	/* lua_objlen */ (size_t(*)(lua_State*, int)) 7104,
	/* lua_tocfunction */ (lua_CFunction(*)(lua_State*, int)) 7232,
	/* lua_touserdata */ (void*(*)(lua_State*, int)) 7280,
	/* lua_tothread */ (lua_State*(*)(lua_State*, int)) 7328,
	/* lua_topointer */ (const void*(*)(lua_State*, int)) 7376,
	/* lua_pushnil */ (void(*)(lua_State*)) 7456,
	/* lua_pushnumber */ (void(*)(lua_State*, lua_Number)) 7488,
	/* lua_pushinteger */ (void(*)(lua_State*, lua_Integer)) 7536,
	/* lua_pushlstring */ (void(*)(lua_State*, const char*, size_t)) 7568,
	/* lua_pushstring */ (void(*)(lua_State*, const char*)) 7648,
	/* lua_pushvfstring */ (const char*(*)(lua_State*, const char*, va_list)) 7712,
	/* lua_pushcclosure */ (void(*)(lua_State*, lua_CFunction, int)) 7888,
	/* lua_pushboolean */ (void(*)(lua_State*, int)) 8064,
	/* lua_pushlightuserdata */ (void(*)(lua_State*, void*)) 8112,
	/* lua_pushthread */ (int(*)(lua_State*)) 8144,
	/* lua_gettable */ (void(*)(lua_State*, int)) 8192,
	/* lua_getfield */ (void(*)(lua_State*, int, const char*)) 8240,
	/* lua_rawget */ (void(*)(lua_State*, int)) 8336,
	/* lua_rawgeti */ (void(*)(lua_State*, int, int)) 8400,
	/* lua_createtable */ (void(*)(lua_State*, int, int)) 8464,
	/* lua_newuserdata */ (void*(*)(lua_State*, size_t)) 10688,
	/* lua_getmetatable */ (int(*)(lua_State*, int)) 8544,
	/* lua_getfenv */ (void(*)(lua_State*, int)) 8640,
	/* lua_settable */ (void(*)(lua_State*, int)) 8768,
	/* lua_setfield */ (void(*)(lua_State*, int, const char*)) 8832,
	/* lua_rawset */ (void(*)(lua_State*, int)) 8928,
	/* lua_rawseti */ (void(*)(lua_State*, int, int)) 9056,
	/* lua_setmetatable */ (int(*)(lua_State*, int)) 9184,
	/* lua_setfenv */ (int(*)(lua_State*, int)) 9360,
	/* lua_call */ (void(*)(lua_State*, int, int)) 9520,
	/* lua_pcall */ (int(*)(lua_State*, int, int, int)) 9632,
	/* lua_cpcall */ (int(*)(lua_State*, lua_CFunction, void*)) 9760,
	/* lua_load */ (int(*)(lua_State*, lua_Reader, void*, const char*)) 9936,
	/* lua_dump */ (int(*)(lua_State*, lua_Writer, void*)) 10048,
	/* lua_yield */ (int(*)(lua_State*, int)) 71040,
	/* lua_resume */ (int(*)(lua_State*, int)) 70864,
	/* lua_status */ (int(*)(lua_State*)) 10112,
	/* lua_gc */ (int(*)(lua_State*, int, int)) 10128,
	/* lua_error */ (int(*)(lua_State*)) 10320,
	/* lua_next */ (int(*)(lua_State*, int)) 10352,
	/* lua_concat */ (void(*)(lua_State*, int)) 10432,
	/* lua_getallocf */ (lua_Alloc(*)(lua_State*, void**)) 2147483647,
	/* lua_setallocf */ (void(*)(lua_State*, lua_Alloc,void*)) 2147483647,
	/* lua_getstack */ (int(*)(lua_State*, int, lua_Debug*)) 12544,
	/* lua_getinfo */ (int(*)(lua_State*, const char*, lua_Debug*)) 15104,
	/* lua_getlocal */ (const char*(*)(lua_State*, const lua_Debug*, int)) 2147483647,
	/* lua_setlocal */ (const char*(*)(lua_State*, const lua_Debug*, int)) 2147483647,
	/* lua_getupvalue */ (const char*(*)(lua_State*, int, int)) 2147483647,
	/* lua_setupvalue */ (const char*(*)(lua_State*, int, int)) 2147483647,
	/* lua_sethook */ (int(*)(lua_State*, lua_Hook, int, int)) 2147483647,
	/* lua_gethook */ (lua_Hook(*)(lua_State*)) 2147483647,
	/* lua_gethookmask */ (int(*)(lua_State*)) 2147483647,
	/* lua_gethookcount */ (int(*)(lua_State*)) 2147483647,
	/* luaopen_base */ (int(*)(lua_State*)) 48512,
	/* luaopen_table */ (int(*)(lua_State*)) 39920,
	/* luaopen_io */ (int(*)(lua_State*)) 37216,
	/* luaopen_os */ (int(*)(lua_State*)) 33104,
	/* luaopen_string */ (int(*)(lua_State*)) 30944,
	/* luaopen_math */ (int(*)(lua_State*)) 22544,
	/* luaopen_debug */ (int(*)(lua_State*)) 20576,
	/* luaopen_package */ (int(*)(lua_State*)) 43168,
	/* luaL_openlibs */ (void(*)(lua_State*)) 4960,
	/* luaI_openlib */ (void(*)(lua_State*, const char*, const luaL_Reg*, int)) 2224,
	/* luaL_register */ (void(*)(lua_State*, const char*, const luaL_Reg*)) 2576,
	/* luaL_getmetafield */ (int(*)(lua_State*, int, const char*)) 1648,
	/* luaL_callmeta */ (int(*)(lua_State*, int, const char*)) 1776,
	/* luaL_typerror */ (int(*)(lua_State*, int, const char*)) 368,
	/* luaL_argerror */ (int(*)(lua_State*, int, const char*)) 176,
	/* luaL_checklstring */ (const char*(*)(lua_State*, int, size_t*)) 944,
	/* luaL_optlstring */ (const char*(*)(lua_State*, int, const char*, size_t*)) 1008,
	/* luaL_checknumber */ (lua_Number(*)(lua_State*, int)) 1296,
	/* luaL_optnumber */ (lua_Number(*)(lua_State*, int, lua_Number)) 1392,
	/* luaL_checkinteger */ (lua_Integer(*)(lua_State*, int)) 1488,
	/* luaL_optinteger */ (lua_Integer(*)(lua_State*, int, lua_Integer)) 1584,
	/* luaL_checkstack */ (void(*)(lua_State*, int, const char*)) 752,
	/* luaL_checktype */ (void(*)(lua_State*, int, int)) 816,
	/* luaL_checkany */ (void(*)(lua_State*, int)) 880,
	/* luaL_newmetatable */ (int(*)(lua_State*, const char*)) 496,
	/* luaL_checkudata */ (void*(*)(lua_State*, int, const char*)) 624,
	/* luaL_where */ (void(*)(lua_State*, int)) 0,
	/* luaL_checkoption */ (int(*)(lua_State*, int, const char*, const char* const*)) 1120,
	/* luaL_ref */ (int(*)(lua_State*, int)) 3440,
	/* luaL_unref */ (void(*)(lua_State*, int, int)) 3632,
	/* luaL_loadfile */ (int(*)(lua_State*, const char*)) 3984,
	/* luaL_loadbuffer */ (int(*)(lua_State*, const char*, size_t, const char*)) 4704,
	/* luaL_loadstring */ (int(*)(lua_State*, const char*)) 4752,
	/* luaL_newstate */ (lua_State*(*)(void)) 4896,
	/* luaL_gsub */ (const char*(*)(lua_State*, const char*, const char*, const char*)) 3120,
	/* luaL_findtable */ (const char*(*)(lua_State*, int, const char*, int)) 1952,
	/* luaL_buffinit */ (void(*)(lua_State*, luaL_Buffer*)) 1920,
	/* luaL_prepbuffer */ (char*(*)(luaL_Buffer*)) 2912,
	/* luaL_addlstring */ (void(*)(luaL_Buffer*, const char*, size_t)) 2960,
	/* luaL_addstring */ (void(*)(luaL_Buffer*, const char*)) 3072,
	/* luaL_addvalue */ (void(*)(luaL_Buffer*)) 3280,
	/* luaL_pushresult */ (void(*)(luaL_Buffer*)) 2688,
};

LUA_API lua_State* lua_newstate(lua_Alloc a, void* b)
{
	return luaFunction.lua_newstate(a, b);
}

LUA_API void lua_close(lua_State* a)
{
	luaFunction.lua_close(a);
}

LUA_API lua_State* lua_newthread(lua_State* a)
{
	return luaFunction.lua_newthread(a);
}

LUA_API lua_CFunction lua_atpanic(lua_State* a, lua_CFunction b)
{
	return luaFunction.lua_atpanic(a, b);
}

LUA_API int lua_gettop(lua_State* a)
{
	return luaFunction.lua_gettop(a);
}

LUA_API void lua_settop(lua_State* a, int b)
{
	luaFunction.lua_settop(a, b);
}

LUA_API void lua_pushvalue(lua_State* a, int b)
{
	luaFunction.lua_pushvalue(a, b);
}

LUA_API void lua_remove(lua_State* a, int b)
{
	luaFunction.lua_remove(a, b);
}

LUA_API void lua_insert(lua_State* a, int b)
{
	luaFunction.lua_insert(a, b);
}

LUA_API void lua_replace(lua_State* a, int b)
{
	luaFunction.lua_replace(a, b);
}

LUA_API int lua_checkstack(lua_State* a, int b)
{
	return luaFunction.lua_checkstack(a, b);
}

LUA_API void lua_xmove(lua_State* a, lua_State* b, int c)
{
	luaFunction.lua_xmove(a, b, c);
}

LUA_API int lua_isnumber(lua_State* a, int b)
{
	return luaFunction.lua_isnumber(a, b);
}

LUA_API int lua_isstring(lua_State* a, int b)
{
	return luaFunction.lua_isstring(a, b);
}

LUA_API int lua_iscfunction(lua_State* a, int b)
{
	return luaFunction.lua_iscfunction(a, b);
}

LUA_API int lua_isuserdata(lua_State* a, int b)
{
	return luaFunction.lua_isuserdata(a, b);
}

LUA_API int lua_type(lua_State* a, int b)
{
	return luaFunction.lua_type(a, b);
}

LUA_API const char* lua_typename(lua_State* a, int b)
{
	return luaFunction.lua_typename(a, b);
}

LUA_API int lua_equal(lua_State* a, int b, int c)
{
	return luaFunction.lua_equal(a, b, c);
}

LUA_API int lua_rawequal(lua_State* a, int b, int c)
{
	return luaFunction.lua_rawequal(a, b, c);
}

LUA_API int lua_lessthan(lua_State* a, int b, int c)
{
	return luaFunction.lua_lessthan(a, b, c);
}

LUA_API lua_Number lua_tonumber(lua_State* a, int b)
{
	return luaFunction.lua_tonumber(a, b);
}

LUA_API lua_Integer lua_tointeger(lua_State* a, int b)
{
	return luaFunction.lua_tointeger(a, b);
}

LUA_API int lua_toboolean(lua_State* a, int b)
{
	return luaFunction.lua_toboolean(a, b);
}

LUA_API const char* lua_tolstring(lua_State* a, int b, size_t* c)
{
	return luaFunction.lua_tolstring(a, b, c);
}

LUA_API size_t lua_objlen(lua_State* a, int b)
{
	return luaFunction.lua_objlen(a, b);
}

LUA_API lua_CFunction lua_tocfunction(lua_State* a, int b)
{
	return luaFunction.lua_tocfunction(a, b);
}

LUA_API void* lua_touserdata(lua_State* a, int b)
{
	return luaFunction.lua_touserdata(a, b);
}

LUA_API lua_State* lua_tothread(lua_State* a, int b)
{
	return luaFunction.lua_tothread(a, b);
}

LUA_API const void* lua_topointer(lua_State* a, int b)
{
	return luaFunction.lua_topointer(a, b);
}

LUA_API void lua_pushnil(lua_State* a)
{
	luaFunction.lua_pushnil(a);
}

LUA_API void lua_pushnumber(lua_State* a, lua_Number b)
{
	luaFunction.lua_pushnumber(a, b);
}

LUA_API void lua_pushinteger(lua_State* a, lua_Integer b)
{
	luaFunction.lua_pushinteger(a, b);
}

LUA_API void lua_pushlstring(lua_State* a, const char* b, size_t c)
{
	luaFunction.lua_pushlstring(a, b, c);
}

LUA_API void lua_pushstring(lua_State* a, const char* b)
{
	luaFunction.lua_pushstring(a, b);
}

LUA_API const char* lua_pushvfstring(lua_State* a, const char* b, va_list c)
{
	return luaFunction.lua_pushvfstring(a, b, c);
}

LUA_API void lua_pushcclosure(lua_State* a, lua_CFunction b, int c)
{
	luaFunction.lua_pushcclosure(a, b, c);
}

LUA_API void lua_pushboolean(lua_State* a, int b)
{
	luaFunction.lua_pushboolean(a, b);
}

LUA_API void lua_pushlightuserdata(lua_State* a, void* b)
{
	luaFunction.lua_pushlightuserdata(a, b);
}

LUA_API int lua_pushthread(lua_State* a)
{
	return luaFunction.lua_pushthread(a);
}

LUA_API void lua_gettable(lua_State* a, int b)
{
	luaFunction.lua_gettable(a, b);
}

LUA_API void lua_getfield(lua_State* a, int b, const char* c)
{
	luaFunction.lua_getfield(a, b, c);
}

LUA_API void lua_rawget(lua_State* a, int b)
{
	luaFunction.lua_rawget(a, b);
}

LUA_API void lua_rawgeti(lua_State* a, int b, int c)
{
	luaFunction.lua_rawgeti(a, b, c);
}

LUA_API void lua_createtable(lua_State* a, int b, int c)
{
	luaFunction.lua_createtable(a, b, c);
}

LUA_API void* lua_newuserdata(lua_State* a, size_t b)
{
	return luaFunction.lua_newuserdata(a, b);
}

LUA_API int lua_getmetatable(lua_State* a, int b)
{
	return luaFunction.lua_getmetatable(a, b);
}

LUA_API void lua_getfenv(lua_State* a, int b)
{
	luaFunction.lua_getfenv(a, b);
}

LUA_API void lua_settable(lua_State* a, int b)
{
	luaFunction.lua_settable(a, b);
}

LUA_API void lua_setfield(lua_State* a, int b, const char* c)
{
	luaFunction.lua_setfield(a, b, c);
}

LUA_API void lua_rawset(lua_State* a, int b)
{
	luaFunction.lua_rawset(a, b);
}

LUA_API void lua_rawseti(lua_State* a, int b, int c)
{
	luaFunction.lua_rawseti(a, b, c);
}

LUA_API int lua_setmetatable(lua_State* a, int b)
{
	return luaFunction.lua_setmetatable(a, b);
}

LUA_API int lua_setfenv(lua_State* a, int b)
{
	return luaFunction.lua_setfenv(a, b);
}

LUA_API void lua_call(lua_State* a, int b, int c)
{
	luaFunction.lua_call(a, b, c);
}

LUA_API int lua_pcall(lua_State* a, int b, int c, int d)
{
	return luaFunction.lua_pcall(a, b, c, d);
}

LUA_API int lua_cpcall(lua_State* a, lua_CFunction b, void* c)
{
	return luaFunction.lua_cpcall(a, b, c);
}

LUA_API int lua_load(lua_State* a, lua_Reader b, void* c, const char* d)
{
	return luaFunction.lua_load(a, b, c, d);
}

LUA_API int lua_dump(lua_State* a, lua_Writer b, void* c)
{
	return luaFunction.lua_dump(a, b, c);
}

LUA_API int lua_yield(lua_State* a, int b)
{
	return luaFunction.lua_yield(a, b);
}

LUA_API int lua_resume(lua_State* a, int b)
{
	return luaFunction.lua_resume(a, b);
}

LUA_API int lua_status(lua_State* a)
{
	return luaFunction.lua_status(a);
}

LUA_API int lua_gc(lua_State* a, int b, int c)
{
	return luaFunction.lua_gc(a, b, c);
}

LUA_API int lua_error(lua_State* a)
{
	return luaFunction.lua_error(a);
}

LUA_API int lua_next(lua_State* a, int b)
{
	return luaFunction.lua_next(a, b);
}

LUA_API void lua_concat(lua_State* a, int b)
{
	luaFunction.lua_concat(a, b);
}

/*
LUA_API lua_Alloc lua_getallocf(lua_State* a, void** b)
{
	return luaFunction.lua_getallocf(a, b);
}
*/

/*
LUA_API void lua_setallocf(lua_State* a, lua_Alloc b, void* c)
{
	luaFunction.lua_setallocf(a, b, c);
}
*/

LUA_API int lua_getstack(lua_State* a, int b, lua_Debug* c)
{
	return luaFunction.lua_getstack(a, b, c);
}

LUA_API int lua_getinfo(lua_State* a, const char* b, lua_Debug* c)
{
	return luaFunction.lua_getinfo(a, b, c);
}

/*
LUA_API const char* lua_getlocal(lua_State* a, const lua_Debug* b, int c)
{
	return luaFunction.lua_getlocal(a, b, c);
}
*/

/*
LUA_API const char* lua_setlocal(lua_State* a, const lua_Debug* b, int c)
{
	return luaFunction.lua_setlocal(a, b, c);
}
*/

/*
LUA_API const char* lua_getupvalue(lua_State* a, int b, int c)
{
	return luaFunction.lua_getupvalue(a, b, c);
}
*/

/*
LUA_API const char* lua_setupvalue(lua_State* a, int b, int c)
{
	return luaFunction.lua_setupvalue(a, b, c);
}
*/

/*
LUA_API int lua_sethook(lua_State* a, lua_Hook b, int c, int d)
{
	return luaFunction.lua_sethook(a, b, c, d);
}
*/

/*
LUA_API lua_Hook lua_gethook(lua_State* a)
{
	return luaFunction.lua_gethook(a);
}
*/

/*
LUA_API int lua_gethookmask(lua_State* a)
{
	return luaFunction.lua_gethookmask(a);
}
*/

/*
LUA_API int lua_gethookcount(lua_State* a)
{
	return luaFunction.lua_gethookcount(a);
}
*/

LUALIB_API int luaopen_base(lua_State* a)
{
	return luaFunction.luaopen_base(a);
}

LUALIB_API int luaopen_table(lua_State* a)
{
	return luaFunction.luaopen_table(a);
}

LUALIB_API int luaopen_io(lua_State* a)
{
	return luaFunction.luaopen_io(a);
}

LUALIB_API int luaopen_os(lua_State* a)
{
	return luaFunction.luaopen_os(a);
}

LUALIB_API int luaopen_string(lua_State* a)
{
	return luaFunction.luaopen_string(a);
}

LUALIB_API int luaopen_math(lua_State* a)
{
	return luaFunction.luaopen_math(a);
}

LUALIB_API int luaopen_debug(lua_State* a)
{
	return luaFunction.luaopen_debug(a);
}

LUALIB_API int luaopen_package(lua_State* a)
{
	return luaFunction.luaopen_package(a);
}

LUALIB_API void luaL_openlibs(lua_State* a)
{
	luaFunction.luaL_openlibs(a);
}

LUALIB_API void luaI_openlib(lua_State* a, const char* b, const luaL_Reg* c, int d)
{
	luaFunction.luaI_openlib(a, b, c, d);
}

LUALIB_API void luaL_register(lua_State* a, const char* b, const luaL_Reg* c)
{
	luaFunction.luaL_register(a, b, c);
}

LUALIB_API int luaL_getmetafield(lua_State* a, int b, const char* c)
{
	return luaFunction.luaL_getmetafield(a, b, c);
}

LUALIB_API int luaL_callmeta(lua_State* a, int b, const char* c)
{
	return luaFunction.luaL_callmeta(a, b, c);
}

LUALIB_API int luaL_typerror(lua_State* a, int b, const char* c)
{
	return luaFunction.luaL_typerror(a, b, c);
}

LUALIB_API int luaL_argerror(lua_State* a, int b, const char* c)
{
	return luaFunction.luaL_argerror(a, b, c);
}

LUALIB_API const char* luaL_checklstring(lua_State* a, int b, size_t* c)
{
	return luaFunction.luaL_checklstring(a, b, c);
}

LUALIB_API const char* luaL_optlstring(lua_State* a, int b, const char* c, size_t* d)
{
	return luaFunction.luaL_optlstring(a, b, c, d);
}

LUALIB_API lua_Number luaL_checknumber(lua_State* a, int b)
{
	return luaFunction.luaL_checknumber(a, b);
}

LUALIB_API lua_Number luaL_optnumber(lua_State* a, int b, lua_Number c)
{
	return luaFunction.luaL_optnumber(a, b, c);
}

LUALIB_API lua_Integer luaL_checkinteger(lua_State* a, int b)
{
	return luaFunction.luaL_checkinteger(a, b);
}

LUALIB_API lua_Integer luaL_optinteger(lua_State* a, int b, lua_Integer c)
{
	return luaFunction.luaL_optinteger(a, b, c);
}

LUALIB_API void luaL_checkstack(lua_State* a, int b, const char* c)
{
	luaFunction.luaL_checkstack(a, b, c);
}

LUALIB_API void luaL_checktype(lua_State* a, int b, int c)
{
	luaFunction.luaL_checktype(a, b, c);
}

LUALIB_API void luaL_checkany(lua_State* a, int b)
{
	luaFunction.luaL_checkany(a, b);
}

LUALIB_API int luaL_newmetatable(lua_State* a, const char* b)
{
	return luaFunction.luaL_newmetatable(a, b);
}

LUALIB_API void* luaL_checkudata(lua_State* a, int b, const char* c)
{
	return luaFunction.luaL_checkudata(a, b, c);
}

LUALIB_API void luaL_where(lua_State* a, int b)
{
	luaFunction.luaL_where(a, b);
}

LUALIB_API int luaL_checkoption(lua_State* a, int b, const char* c, const char* const* d)
{
	return luaFunction.luaL_checkoption(a, b, c, d);
}

LUALIB_API int luaL_ref(lua_State* a, int b)
{
	return luaFunction.luaL_ref(a, b);
}

LUALIB_API void luaL_unref(lua_State* a, int b, int c)
{
	luaFunction.luaL_unref(a, b, c);
}

LUALIB_API int luaL_loadfile(lua_State* a, const char* b)
{
	return luaFunction.luaL_loadfile(a, b);
}

LUALIB_API int luaL_loadbuffer(lua_State* a, const char* b, size_t c, const char* d)
{
	return luaFunction.luaL_loadbuffer(a, b, c, d);
}

LUALIB_API int luaL_loadstring(lua_State* a, const char* b)
{
	return luaFunction.luaL_loadstring(a, b);
}

LUALIB_API lua_State* luaL_newstate(void)
{
	return luaFunction.luaL_newstate();
}

LUALIB_API const char* luaL_gsub(lua_State* a, const char* b, const char* c, const char* d)
{
	return luaFunction.luaL_gsub(a, b, c, d);
}

LUALIB_API const char* luaL_findtable(lua_State* a, int b, const char* c, int d)
{
	return luaFunction.luaL_findtable(a, b, c, d);
}

LUALIB_API void luaL_buffinit(lua_State* a, luaL_Buffer* b)
{
	luaFunction.luaL_buffinit(a, b);
}

LUALIB_API char* luaL_prepbuffer(luaL_Buffer* a)
{
	return luaFunction.luaL_prepbuffer(a);
}

LUALIB_API void luaL_addlstring(luaL_Buffer* a, const char* b, size_t c)
{
	luaFunction.luaL_addlstring(a, b, c);
}

LUALIB_API void luaL_addstring(luaL_Buffer* a, const char* b)
{
	luaFunction.luaL_addstring(a, b);
}

LUALIB_API void luaL_addvalue(luaL_Buffer* a)
{
	luaFunction.luaL_addvalue(a);
}

LUALIB_API void luaL_pushresult(luaL_Buffer* a)
{
	luaFunction.luaL_pushresult(a);
}

