#include<stdio.h>
#define p(x) ((x)*(x)*(x))
int main()
{
	int x=2;
	int n=p(x++);

	printf("%d %d \n",n,x);

}
