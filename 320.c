#include<stdio.h>
int main()
{



	int count=63;
	int i,j,k=8;
	for(i=1,j=2;i<k && j<k ;i++)
	{
		if(i==3)
		{
			i=0;
			j++;
		}
		count=count-1;
	}
	printf("%d ",count);
}
