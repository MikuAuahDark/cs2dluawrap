-- All address are: module+(dedicated OR client)+lua* functions
-- windows
local w = {}
local winData = {
	-- base: 0x400000
	-- Offset is relative to luaL_where
	dedicated = 0x1510, client = 0x1510,
	checksumDedicated = 0x95441DC2,
	checksumClient = 0x11137C23,
	functions = w,
}
w.luaL_where = 0x0 --[[0x401510]]
w.luaL_error = 0x70 --[[0x401580]]
w.luaL_argerror = 0xB0 --[[0x4015C0]]
w.luaL_typerror = 0x170 --[[0x401680]]
w.luaL_newmetatable = 0x1F0 --[[0x401700]]
w.luaL_checkudata = 0x270 --[[0x401780]]
w.luaL_checkstack = 0x2F0 --[[0x401800]]
w.luaL_checktype = 0x330 --[[0x401840]]
w.luaL_checkany = 0x370 --[[0x401880]]
w.luaL_checklstring = 0x3B0 --[[0x4018C0]]
w.luaL_optlstring = 0x3F0 --[[0x401900]]
w.luaL_checkoption = 0x460 --[[0x401970]]
w.luaL_checknumber = 0x510 --[[0x401A20]]
w.luaL_optnumber = 0x570 --[[0x401A80]]
w.luaL_checkinteger = 0x5D0 --[[0x401AE0]]
w.luaL_optinteger = 0x630 --[[0x401B40]]
w.luaL_getmetafield = 0x670 --[[0x401B80]]
w.luaL_callmeta = 0x6F0 --[[0x401C00]]
w.luaL_buffinit = 0x780 --[[0x401C90]]
w.luaL_findtable = 0x7A0 --[[0x401CB0]]
w.luaI_openlib = 0x8B0 --[[0x401DC0]]
w.luaL_register = 0xA10 --[[0x401F20]]
w.luaL_pushresult = 0xA80 --[[0x401F90]]
w.luaL_prepbuffer = 0xB60 --[[0x402070]]
w.luaL_addlstring = 0xB90 --[[0x4020A0]]
w.luaL_addstring = 0xC00 --[[0x402110]]
w.luaL_gsub = 0xC30 --[[0x402140]]
w.luaL_addvalue = 0xCD0 --[[0x4021E0]]
w.luaL_ref = 0xD70 --[[0x402280]]
w.luaL_unref = 0xE30 --[[0x402340]]
w.luaL_loadfile = 0xF90 --[[0x4024A0]]
w.luaL_loadbuffer = 0x1260 --[[0x402770]]
w.luaL_loadstring = 0x1290 --[[0x4027A0]]
w.luaL_newstate = 0x1320 --[[0x402830]]
w.luaL_openlibs = 0x1360 --[[0x402870]]
w.lua_checkstack = 0x14C0 --[[0x4029D0]]
w.lua_xmove = 0x1540 --[[0x402A50]]
w.lua_setlevel = 0x15B0 --[[0x402AC0]]
w.lua_atpanic = 0x15D0 --[[0x402AE0]]
w.lua_newthread = 0x15F0 --[[0x402B00]]
w.lua_gettop = 0x1660 --[[0x402B70]]
w.lua_settop = 0x1680 --[[0x402B90]]
w.lua_remove = 0x16D0 --[[0x402BE0]]
w.lua_insert = 0x1720 --[[0x402C30]]
w.lua_replace = 0x1770 --[[0x402C80]]
w.lua_pushvalue = 0x1850 --[[0x402D60]]
w.lua_type = 0x1880 --[[0x402D90]]
w.lua_typename = 0x18A0 --[[0x402DB0]]
w.lua_iscfunction = 0x18C0 --[[0x402DD0]]
w.lua_isnumber = 0x18F0 --[[0x402E00]]
w.lua_isstring = 0x1930 --[[0x402E40]]
w.lua_isuserdata = 0x1960 --[[0x402E70]]
w.lua_rawequal = 0x1990 --[[0x402EA0]]
w.lua_equal = 0x19E0 --[[0x402EF0]]
w.lua_lessthan = 0x1A40 --[[0x402F50]]
w.lua_tonumber = 0x1A90 --[[0x402FA0]]
w.lua_tointeger = 0x1AD0 --[[0x402FE0]]
w.lua_toboolean = 0x1B10 --[[0x403020]]
w.lua_tolstring = 0x1B40 --[[0x403050]]
w.lua_objlen = 0x1BC0 --[[0x4030D0]]
w.lua_tocfunction = 0x1C40 --[[0x403150]]
w.lua_touserdata = 0x1C70 --[[0x403180]]
w.lua_tothread = 0x1CA0 --[[0x4031B0]]
w.lua_topointer = 0x1CD0 --[[0x4031E0]]
w.lua_pushnil = 0x1D20 --[[0x403230]]
w.lua_pushnumber = 0x1D40 --[[0x403250]]
w.lua_pushinteger = 0x1D70 --[[0x403280]]
w.lua_pushlstring = 0x1D90 --[[0x4032A0]]
w.lua_pushstring = 0x1DE0 --[[0x4032F0]]
w.lua_pushvfstring = 0x1E20 --[[0x403330]]
w.lua_pushfstring = 0x1E80 --[[0x403390]]
w.lua_pushcclosure = 0x1ED0 --[[0x4033E0]]
w.lua_pushboolean = 0x1F80 --[[0x403490]]
w.lua_pushlightuserdata = 0x1FB0 --[[0x4034C0]]
w.lua_pushthread = 0x1FD0 --[[0x4034E0]]
w.lua_gettable = 0x2000 --[[0x403510]]
w.lua_getfield = 0x2030 --[[0x403540]]
w.lua_rawget = 0x2090 --[[0x4035A0]]
w.lua_rawgeti = 0x20D0 --[[0x4035E0]]
w.lua_createtable = 0x2110 --[[0x403620]]
w.lua_getmetatable = 0x2160 --[[0x403670]]
w.lua_getfenv = 0x21C0 --[[0x4036D0]]
w.lua_settable = 0x2240 --[[0x403750]]
w.lua_setfield = 0x2280 --[[0x403790]]
w.lua_rawset = 0x22E0 --[[0x4037F0]]
w.lua_rawseti = 0x2360 --[[0x403870]]
w.lua_setmetatable = 0x23E0 --[[0x4038F0]]
w.lua_setfenv = 0x2490 --[[0x4039A0]]
w.lua_call = 0x2530 --[[0x403A40]]
w.lua_pcall = 0x25A0 --[[0x403AB0]]
w.lua_cpcall = 0x2620 --[[0x403B30]]
w.lua_load = 0x26D0 --[[0x403BE0]]
w.lua_dump = 0x2740 --[[0x403C50]]
w.lua_status = 0x2780 --[[0x403C90]]
w.lua_gc = 0x2790 --[[0x403CA0]]
w.lua_error = 0x2850 --[[0x403D60]]
w.lua_next = 0x2870 --[[0x403D80]]
w.lua_concat = 0x28C0 --[[0x403DD0]]
w.lua_newuserdata = 0x29C0 --[[0x403ED0]]
w.lua_getallocf = 0x2970 --[[0x403E80]]
w.lua_setallocf = 0x29A0 --[[0x403EB0]]
w.lua_getupvalue = 0x2A90 --[[0x403FA0]]
w.lua_setupvalue = 0x2AE0 --[[0x403FF0]]
w.lua_newstate = 0x2E60 --[[0x404370]]
w.lua_close = 0x2FA0 --[[0x4044B0]]
w.lua_sethook = 0x3090 --[[0x4045A0]]
w.lua_gethook = 0x30D0 --[[0x4045E0]]
w.lua_gethookmask = 0x30E0 --[[0x4045F0]]
w.lua_gethookcount = 0x30F0 --[[0x404600]]
w.lua_getstack = 0x3100 --[[0x404610]]
w.lua_getlocal = 0x3240 --[[0x404750]]
w.lua_setlocal = 0x32A0 --[[0x4047B0]]
w.lua_getinfo = 0x3B00 --[[0x405010]]
w.luaopen_debug = 0x5060 --[[0x406570]]
w.luaopen_math = 0x5810 --[[0x406D20]]
w.luaopen_string = 0x78E0 --[[0x408DF0]]
w.luaopen_os = 0x8150 --[[0x409660]]
w.luaopen_io = 0x9160 --[[0x40A670]]
w.luaopen_table = 0x9BF0 --[[0x40B100]]
w.luaopen_package = 0xA8A0 --[[0x40BDB0]]
w.luaopen_base = 0xBD80 --[[0x40D290]]
w.lua_resume = 0x114D0 --[[0x4129E0]]
w.lua_yield = 0x11580 --[[0x412A90]]

return winData
