/*
** $Id: lualib.h,v 1.45.1.1 2017/04/19 17:20:42 roberto Exp $
** Lua standard libraries
** See Copyright Notice in lua.h
*/


#ifndef lualib_h
#define lualib_h

#include "lua.h"


/* version suffix for environment variable names */
#define LUA_VERSUFFIX          "_" LUA_VERSION_MAJOR "_" LUA_VERSION_MINOR


LUAMOD_API int (luaopen_base) (lua_State *L);

#define LUA_COLIBNAME	"async"
LUAMOD_API int (luaopen_coroutine) (lua_State *L);

#define LUA_TABLIBNAME	"table"
LUAMOD_API int (luaopen_table) (lua_State *L);

#define LUA_IOLIBNAME	"io"
LUAMOD_API int (luaopen_io) (lua_State *L);

#define LUA_OSLIBNAME	"os"
LUAMOD_API int (luaopen_os) (lua_State *L);

#define LUA_STRLIBNAME	"string"
LUAMOD_API int (luaopen_string) (lua_State *L);

#define LUA_UTF8LIBNAME	"utf8"
LUAMOD_API int (luaopen_utf8) (lua_State *L);

#define LUA_BITLIBNAME	"bit32"
LUAMOD_API int (luaopen_bit32) (lua_State *L);

#define LUA_MATHLIBNAME	"math"
LUAMOD_API int (luaopen_math) (lua_State *L);

#define LUA_COLORLIBNAME	"Color"
LUAMOD_API int (luaopen_color) (lua_State *L);

#define LUA_2DLIBNAME	"Vector2"
LUAMOD_API int (luaopen_2D) (lua_State *L);

#define LUA_3DLIBNAME	"Vector3"
LUAMOD_API int (luaopen_3D) (lua_State *L);

#define LUA_TRANSFORMNAME	"Transform"
LUAMOD_API int (luaopen_transform) (lua_State *L);

#define LUA_CORENAME	"core"
LUAMOD_API int (luaopen_lcinterface) (lua_State *L);

#define LUA_DBLIBNAME	"debug"
LUAMOD_API int (luaopen_debug) (lua_State *L);

#define LUA_LOADLIBNAME	"package"
LUAMOD_API int (luaopen_package) (lua_State *L);

#define LUA_DEVICENAME	"device"
LUAMOD_API int (luaopen_device) (lua_State *L);

#define LUA_COMPLEXNAME	"complex"
LUAMOD_API int (luaopen_complex) (lua_State *L);

#define LUA_STRUCTNAME	"struct"
LUAMOD_API int (luaopen_struct) (lua_State *L);

#define LUA_SIGNALNAME	"signal"
LUAMOD_API int (luaopen_signal) (lua_State *L);

#define LUA_FILESYSTEMNAME	"file"
LUAMOD_API int (luaopen_lfs) (lua_State *L);

#define LUA_SOCKETNAME	"msg"
LUAMOD_API int (luaopen_chan) (lua_State *L);

/* open all previous libraries */
LUALIB_API void (luaL_openlibs) (lua_State *L);



#if !defined(lua_assert)
#define lua_assert(x)	((void)0)
#endif


#endif