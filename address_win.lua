-- All address are: module+(dedicated OR client)+lua* functons
-- windows
local w = {}
local winData = {
	dedicated = 0x1510, client = 0x1510,
	findDedicated = 0x341a60+0x2600,
	findClient = 0x495588+0x1600,
	match = "1.0.1.1",
	functions = w,
}
w.luaL_where = 0x0
w.luaL_error = 0x70
w.luaL_argerror = 0xB0
w.luaL_typerror = 0x170
w.luaL_newmetatable = 0x1F0
w.luaL_checkudata = 0x270
w.luaL_checkstack = 0x2F0
w.luaL_checktype = 0x330
w.luaL_checkany = 0x370
w.luaL_checklstring = 0x3B0
w.luaL_optlstring = 0x3F0
w.luaL_checkoption = 0x460
w.luaL_checknumber = 0x510
w.luaL_optnumber = 0x570
w.luaL_checkinteger = 0x5D0
w.luaL_optinteger = 0x630
w.luaL_getmetafield = 0x670
w.luaL_callmeta = 0x6F0
w.luaL_buffinit = 0x780
w.luaL_findtable = 0x7A0
w.luaI_openlib = 0x8B0
w.luaL_register = 0xA10
w.luaL_pushresult = 0xA80
w.luaL_prepbuffer = 0xB60
w.luaL_addlstring = 0xB90
w.luaL_addstring = 0xC00
w.luaL_gsub = 0xC30
w.luaL_addvalue = 0xCD0
w.luaL_ref = 0xD70
w.luaL_unref = 0xE30
w.luaL_loadfile = 0xF90
w.luaL_loadbuffer = 0x1260
w.luaL_loadstring = 0x1290
w.luaL_newstate = 0x1320
w.luaL_openlibs = 0x1360
w.lua_checkstack = 0x14C0
w.lua_xmove = 0x1540
w.lua_setlevel = 0x15B0
w.lua_atpanic = 0x15D0
w.lua_newthread = 0x15F0
w.lua_gettop = 0x1660
w.lua_settop = 0x1680
w.lua_remove = 0x16D0
w.lua_insert = 0x1720
w.lua_replace = 0x1770
w.lua_pushvalue = 0x1850
w.lua_type = 0x1880
w.lua_typename = 0x18A0
w.lua_iscfunction = 0x18C0
w.lua_isnumber = 0x18F0
w.lua_isstring = 0x1930
w.lua_isuserdata = 0x1960
w.lua_rawequal = 0x1990
w.lua_equal = 0x19E0
w.lua_lessthan = 0x1A40
w.lua_tonumber = 0x1A90
w.lua_tointeger = 0x1AD0
w.lua_toboolean = 0x1B10
w.lua_tolstring = 0x1B40
w.lua_objlen = 0x1BC0
w.lua_tocfunction = 0x1C40
w.lua_touserdata = 0x1C70
w.lua_tothread = 0x1CA0
w.lua_topointer = 0x1CD0
w.lua_pushnil = 0x1D20
w.lua_pushnumber = 0x1D40
w.lua_pushinteger = 0x1D70
w.lua_pushlstring = 0x1D90
w.lua_pushstring = 0x1DE0
w.lua_pushvfstring = 0x1E20
w.lua_pushfstring = 0x1E80
w.lua_pushcclosure = 0x1ED0
w.lua_pushboolean = 0x1F80
w.lua_pushlightuserdata = 0x1FB0
w.lua_pushthread = 0x1FD0
w.lua_gettable = 0x2000
w.lua_getfield = 0x2030
w.lua_rawget = 0x2090
w.lua_rawgeti = 0x20D0
w.lua_createtable = 0x2110
w.lua_getmetatable = 0x2160
w.lua_getfenv = 0x21C0
w.lua_settable = 0x2240
w.lua_setfield = 0x2280
w.lua_rawset = 0x22E0
w.lua_rawseti = 0x2360
w.lua_setmetatable = 0x23E0
w.lua_setfenv = 0x2490
w.lua_call = 0x2530
w.lua_pcall = 0x25A0
w.lua_cpcall = 0x2620
w.lua_load = 0x26D0
w.lua_dump = 0x2740
w.lua_status = 0x2780
w.lua_gc = 0x2790
w.lua_error = 0x2850
w.lua_next = 0x2870
w.lua_concat = 0x28C0
w.lua_newuserdata = 0x29C0
w.lua_newstate = 0x2E60
w.lua_close = 0x2FA0
w.lua_getstack = 0x3100
w.lua_getinfo = 0x3B00
w.luaopen_debug = 0x5060
w.luaopen_math = 0x5810
w.luaopen_string = 0x78E0
w.luaopen_os = 0x8150
w.luaopen_io = 0x9160
w.luaopen_table = 0x9BF0
w.luaopen_package = 0xA8A0
w.luaopen_base = 0xBD80
w.lua_resume = 0x114D0
w.lua_yield = 0x11580

return winData