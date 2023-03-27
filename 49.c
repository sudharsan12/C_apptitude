#include<stdio.h>
#define sqr(x)  (x*x*x)
int main()
{
	int a,b=3;
	a=sqr(b++);
	printf(" %d  %d\n",a,b);
	// 60 6
}
