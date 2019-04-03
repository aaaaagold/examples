#include <iostream>
using namespace std;
void a(int x,int y){cout<<'a'<<' '<<x+y<<endl;}
void b(int x,int y){cout<<'b'<<' '<<x-y<<endl;}
void c(int x,int y){cout<<'c'<<' '<<x/y<<endl;}
int main()
{
	std::ios::sync_with_stdio(false); cin.tie(nullptr);
	void (*fs[])(int a,int b)={a,b,c};
	for(int n=3;--n;)
	{
		for(int x=0,size=sizeof(fs)/sizeof(fs[0]);x<size;++x)
			fs[x](n,n);
		cout<<endl;
	}
	return 0;
}
