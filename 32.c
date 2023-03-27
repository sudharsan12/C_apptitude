#include<stdio.h>
int main()
{
	int a=10,b,c,i;

	i=a>=20?b=20:(c=30);
	printf("%d \n",i);
	i=(a<=20)?b:(c=30);
	printf("%d \n",i);
}
