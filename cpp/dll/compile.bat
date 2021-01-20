@rem mingw
g++ -c -DBUILD_DLL -o dll.o dll.cpp
g++ -shared -o dll.dll dll.o -Wl,--out-implib,libdll.a
g++ a.cpp dll.dll -L. -ldll
