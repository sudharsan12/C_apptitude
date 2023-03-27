#include<stdio.h>
int main()
{

	int i,j,x=8;

	for(i=0,j=9;i<=8;i++)
	{
		if(x-i<5)
		{
			printf("%d  \n",x-i*j);
			j++;
		}else
		{
		
		printf("%d \n",i*j);
		}
	}
}
