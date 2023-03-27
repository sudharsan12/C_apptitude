#include<stdio.h>
int main()
{
//int a=20; this make error because no linkage
	extern int a;
	printf("%d ",a);
}
//int a=20;
