#include<stdio.h>
int main()
{
	int a=49;
	int b=36;
	int sum=2;

	while(a>=20)
	{

		sum=a*b;

		if(sum%5==0)
		{
			printf("%d",a);
		}
		a=a-1;
		b=b+1;
	}
	printf("%d",sum+b);
}
