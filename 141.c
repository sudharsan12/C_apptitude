#include<stdio.h>
int main()
{
	int n=10,i=1,j=1,k=1;
	while(k<=n)
	{
		printf("%d ",k);
		if(k==j)
		{
			i=i+1;
			j=i+j;
			printf("\n");
		}
		k+=2;
		n-=2;
	}
}
