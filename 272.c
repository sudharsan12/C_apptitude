#include<stdio.h>
int main()
{
	int a=2,b=4,sum=9;

	while(sum!=0)
	{
		sum=a+b;
		a=a+sum-b;
		b=b+sum-a;
		printf("%d",sum);
	}
}
