// mingw

#ifndef __FIB__H____
#define __FIB__H____

#ifdef __cplusplus
extern "C" {
#endif

#ifdef BUILD_DLL
#define FIB_DLL __declspec(dllexport)
#else
#define FIB_DLL __declspec(dllimport)
#endif

void __stdcall FIB_DLL hello(const char *s);
long long unsigned FIB_DLL fib(int n);

#ifdef __cplusplus
}
#endif

#endif
