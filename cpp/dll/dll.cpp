// mingw
#include <stdio.h>
#include "dll.h"

__stdcall void hello(const char *s)
{
	printf("Hello %s\n", s);
}

long long unsigned FIB_DLL fib(int n)
{
	return n<3?1:fib(n-2)+fib(n-1);
}
