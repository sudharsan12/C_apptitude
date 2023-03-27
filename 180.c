#include<stdio.h>
int main()
{
	int a=15,b=7,c=1,d=0;
	while(d!=a)
	{
		c=c+a-b;
		a=a+1;
		b=b-1;
		d=a-b;
	}
	printf("%d  \n",c-d);
}
