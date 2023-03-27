#include<stdio.h>
int main()
{
	int a=0,b=2,i=3,N=10;

	while(i<=N)
	{
		if(i%3==0)
		{
			a=(a*3)%5;
			printf("%d",a);
		}
		else
		{
			b=b*(b*3)%5;
			printf("%d",b);
		}
		i+=1;
	}
}
