#include<stdio.h>
int main()
{
	int i,j,k,n=5;
	for(i=0,k=0;i<=5;i++)
	{
		for(j=1;j<=k;j++)
			printf("#");
		if(i>n/2)
			k=k-3;
		else
		{
			k+=1;
			printf("\n");
		}
	}
	printf("%d \n",k);
}
