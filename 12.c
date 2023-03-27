#include<stdio.h>
int sum(a,b) int a,b; // it is working proberly
{
	return a+b;
}
int main()
{
	int a=10,b=30;
	int res=sum(a,b);
	printf("%d \n",res);
}
