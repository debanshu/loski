#ifndef loskiaux_h
#define loskiaux_h


#include <lua.h>
#include <lauxlib.h>


LUALIB_API int luaL_pushresults(lua_State *L, int nres, int err,
                                const char *(*geterrmsg) (int));
LUALIB_API int luaL_pushobjtab(lua_State *L, int regidx, int validx);
LUALIB_API void luaL_newsentinel(lua_State *L, lua_CFunction f);
LUALIB_API void luaL_cancelsentinel(lua_State *L);
LUALIB_API void luaL_newclass(lua_State *L,
                              const char *name,
                              const luaL_Reg *mth,
                              int nup);
LUALIB_API void luaL_newsubclass(lua_State *L,
                                 const char *super,
                                 const char *name,
                                 const luaL_Reg *mth,
                                 int nup);
LUALIB_API void *luaL_testinstance(lua_State *L, int idx, const char *cls);
LUALIB_API void *luaL_checkinstance(lua_State *L, int idx, const char *cls);
LUALIB_API void luaL_printstack(lua_State *L);


#endif
