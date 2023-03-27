#include<stdio.h>
int k=10;
int func(int a,int b)
{
	k=(k+a*b);
	return k;
}
int main()
{
	int a=2,b=5,c=7;
	c=func(b,a);
	printf("%d \n",c);
	a=func(c,b);
	printf("%d \n",a);
	b=func(a,c);
	printf("%d \n",b);
	printf("%d \n",k);
}
