#include<stdio.h>
typedef struct num
{
int a:3;
int b:2;
}num;

int main()
{
	num v;
	v.a=4;
	v.b=2;

	printf("%d  %d \n",v.a,v.b);
}
