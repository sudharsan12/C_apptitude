#include<stdio.h>
int main()
{
	int a=15,b=7,c=1;
	while(b>0)
	{
		c=c+a-b;
		b=b-1;
		a=a+1;
	}
	printf("%d \n",c);
}
