void foo(int arr2d[][100],int len)
{
}
int main()
{
	int cnt=11;
	int (*fxSzArrV)[100] = new int[cnt][100];
	foo(fxSzArrV,cnt);
	delete [] fxSzArrV;
}
