
#pragma once

#ifdef MAIN_WIN_DEFINE
#define EXTERN_FOR_SYNCHRONIZE	/*extern*/
#else
#define EXTERN_FOR_SYNCHRONIZE extern
#endif

EXTERN_FOR_SYNCHRONIZE CRITICAL_SECTION g_hOutOfSceneMgrCS;
EXTERN_FOR_SYNCHRONIZE CRITICAL_SECTION g_hMapRouteCS;
