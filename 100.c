#include<stdio.h>
int fun(int n)
{
	static int r=0;
	if(n<=0)
		return 1;
	if(n>3)
	{
		int res;
		r=n;
		return fun(n-2)+r;
		
	}
	return fun(n-1)+r;
}
int main()
{
	int n=10;
	printf("%d \n",fun(10));
}
