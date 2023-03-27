#include<stdio.h>
int fun(int n)
{
	if(n>1)
		n=fun(n/10)+(n%10);
	else
		n=0;
	return n;
}

int main()
{
	printf("%d \n",fun(80));
	
}
