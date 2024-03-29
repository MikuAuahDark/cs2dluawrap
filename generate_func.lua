-- CS2D Lua wrapper
-- Copyright (c) 2021 Miku AuahDark
--
-- Permission is hereby granted, free of charge, to any person obtaining a
-- copy of this software and associated documentation files (the "Software"),
-- to deal in the Software without restriction, including without limitation
-- the rights to use, copy, modify, merge, publish, distribute, sublicense,
-- and/or sell copies of the Software, and to permit persons to whom the
-- Software is furnished to do so, subject to the following conditions:
--
-- The above copyright notice and this permission notice shall be included in
-- all copies or substantial portions of the Software.
--
-- THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
-- OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
-- FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
-- AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
-- LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
-- FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
-- DEALINGS IN THE SOFTWARE.

-- This is one shot tool, doesn't have to be optimized.
-- usage: generate_func.lua <cs2dluafunc.h> <addresslist.lua>

local arg = {...}
local cs2dLuaFunc = assert(arg[1], "cs2dluafunc.h")
local addressList = assert(arg[2], "addresslist.lua")

-- Load address list
addressList = assert(loadfile(addressList))()
local intSuffix = addressList.x64 and "ULL" or "U"

-- Write header
io.write((([[
/* This header is generated by generate_func.lua */

#include "../cs2dluafunc.h"

LuaFunctionPointer luaFunction = {
]]):gsub("\r\n", "\n")))

-- Dedicated & client address
io.write("\t(void*) ", addressList.dedicated, "U, (void*) ", addressList.client, "U,\n")
-- Match string
io.write("\t", addressList.checksumDedicated, "U, ", addressList.checksumClient, "U,\n")

local function trim(s)
	return (s:gsub("^%s*(.-)%s*$", "%1"))
end

local function split(text, delim, removeempty)
	local t = {}

	local b = 0
	while b ~= nil do
		local c, d = text:find(delim, b + 1, true)
		c = c or (#text + 1)

		t[#t + 1] = text:sub(b + 1, c - 1)
		b = d
	end

	if removeempty then
		local a = #t
		while a > 0 and #t[a] == 0 do
			t[a] = nil
			a = a - 1
		end
	end

	return t
end

local lines = {}

for line in io.lines(cs2dLuaFunc) do
	if line:find("/*MATCHGEN*/", 1, true) then
		lines[#lines + 1] = line
	end
end

for _, line in ipairs(lines) do
	local retType, name, paramList = line:match("^%s*/%*MATCHGEN%*/([^%)]+)%(%*([^%)]+)%)%s*%(([^%)]+)%);")

	-- Trim
	retType = trim(retType)
	name = trim(name)
	paramList = trim(paramList)

	-- Parameter list
	local params = split(trim(paramList), ",")
	for i = 1, #params do
		params[i] = trim(params[i])
	end

	local funcPtr = (addressList.functions[name] or 2147483647) % 4294967296
	io.write("\t/* ", name, " */ (", retType, "(*)(", paramList, ")) ", funcPtr, intSuffix, ",\n")
end

io.write("};\n\n")
io.write("#ifndef CS2DLUAWRAP_NOFUNCDEF\n\n")

-- It's important that these function won't work when wrapped
local blacklist = {"lua_pushfstring", "luaL_error"}

for _, line in ipairs(lines) do
	local retType, name, paramList = line:match("^%s*/%*MATCHGEN%*/([^%)]+)%(%*([^%)]+)%)%s*%(([^%)]+)%);")

	-- Trim
	retType = trim(retType)
	name = trim(name)
	paramList = trim(paramList)

	local isBlacklisted = false
	for i = 1, #blacklist do
		if blacklist[i] == name then
			isBlacklisted = true
			break
		end
	end

	if not(isBlacklisted) then
		local undef = not(addressList.functions[name])

		-- Parameter list
		local params = split(trim(paramList), ",")
		local plist = {}
		for i = 1, #params do
			local p = trim(params[i])
			if p ~= "void" then
				local c = string.char(i + 96)
				params[i] = p.." "..c
				plist[#plist + 1] = c
			else
				params[i] = p
			end
		end

		local useLuaLib = name:find("lua_") == nil

		if undef then
			io.write("/*\n")
		end

		-- Write function wrapper
		io.write(useLuaLib and "LUALIB_API " or "LUA_API ", retType, " ", name, "(", table.concat(params, ", "), ")\n{\n")
		if retType ~= "void" then
			io.write("\treturn luaFunction.", name, "(", table.concat(plist, ", "), ");\n}\n")
		else
			io.write("\tluaFunction.", name, "(", table.concat(plist, ", "), ");\n}\n")
		end

		if undef then
			io.write("*/\n\n")
		else
			io.write("\n")
		end
	end
end

io.write("#endif /* CS2DLUAWRAP_NOFUNCDEF */\n")
