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

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define LUA_CORE

#include "lua.h"
#include "lualib.h"
#include "lauxlib.h"


/* Platform selection */
#if defined(_WIN32)
#	define CS2DLUA_TARGET_WIN
#	include "address/win_1.0.1.1.h"
#elif defined(__APPLE__)
#	define CS2DLUA_TARGET_MAC
#	error "Patches welcome for macOS!"
#else
#	define CS2DLUA_TARGET_LINUX
#	include "address/linux_1.0.1.1.h"
#endif

/* CS2D is 32-bit only in Windows and Linux */
#if defined(CS2DLUA_TARGET_WIN) || defined(CS2DLUA_TARGET_LINUX)
#	if defined(__x86_64__) || defined(_WIN64)
#		error "Only 32-bit target is supported for Windows and Linux!"
#	endif
#endif

/* Reimplement some function */
LUA_API const char* lua_pushfstring(lua_State *L, const char *fmt, ...)
{
	va_list va;
	va_start(va, fmt);
	const char *r = lua_pushvfstring(L, fmt, va);
	va_end(va);
	return r;
}

LUALIB_API int luaL_error (lua_State *L, const char *fmt, ...)
{
	va_list argp;
	va_start(argp, fmt);
	luaL_where(L, 1);
	lua_pushvfstring(L, fmt, argp);
	va_end(argp);
	lua_concat(L, 2);
	return lua_error(L);
}

/* Initialization */
int cs2dlua_init(size_t baseAddress)
{
	const char *testOffset;
	const char *targetOffset = NULL;
	short *pattern = NULL;
	size_t patternLen, i, patternSize, *luaFuncPtr;

	/* If match field is NULL that means it's initialized */
	if (luaFunction.findMatch == NULL)
		return 1;
	
	/* Build pattern */
	patternLen = strlen(luaFunction.findMatch);
	patternSize = sizeof (short) * (patternLen + 2);
	pattern = malloc(patternSize);
	/* First 4 byte is length in short */
	(*(size_t *) pattern) = patternLen;
	/* The rest is the pattern as short */
	for (i = 0; i < patternLen; i++)
		pattern[i + 2] = luaFunction.findMatch[i];
	
	/* Test for dedicated */
	testOffset = ((const char *) luaFunction.findDedicatedOffset) + baseAddress;
	if (memcmp(testOffset, pattern, patternSize) == 0)
		targetOffset = luaFunction.dedicatedOffset;

	/* Test for client */
	testOffset = ((const char *) luaFunction.findClientOffset) + baseAddress;
	if (memcmp(testOffset, pattern, patternSize) == 0)
		targetOffset = luaFunction.clientOffset;

	/* Free memory */
	free(pattern); pattern = NULL;

	if (targetOffset == NULL)
	{
		/* Not found */
		fprintf(stderr, "CS2DLua: Failed to find pattern.");
		return 0;
	}

	/* Load offset */
	targetOffset += baseAddress;
	luaFuncPtr = (size_t *) &luaFunction;
	for (i = 5; i < sizeof(LuaFunctionPointer)/sizeof(void*); i++)
	{
		if (luaFuncPtr[i] == 0x7FFFFFFF)
			luaFuncPtr[i] = 0;
		else
			luaFuncPtr[i] += (size_t) targetOffset;
	}

	/* Set activated flag */
	luaFunction.findMatch = NULL;
	return 1;
}

/* Platform-specific startup */
#if defined(CS2DLUA_TARGET_WIN)
#define WIN32_LEAN_AND_MEAN
#include <Windows.h>
#include <Psapi.h>

BOOL APIENTRY DllMain(HINSTANCE _, DWORD reason, LPVOID __)
{
	if (reason == DLL_PROCESS_ATTACH)
		return cs2dlua_init((size_t) GetModuleHandleA(NULL));
}

#elif defined(CS2DLUA_TARGET_LINUX)


__attribute__ ((constructor)) void DllMain(void)
{
	char _dummy[sizeof (unsigned long) == 4 ? 4 : -1];
	FILE *f = fopen("/proc/self/maps", "r");

	if (f)
	{
		// First 8 bytes only
		char addr[9];
		addr[8] = 0;

		if (fread(addr, 1, 8, f) == 8)
		{
			size_t address = (size_t) strtoul(addr, NULL, 16);

			if (address)
				cs2dlua_init(address);
		}

		fclose(f);
	}
}

#elif defined(CS2DLUA_TARGET_MAC)
#	error "Patches welcome for macOS!"
#else
#	error "Unknown OS"
#endif
