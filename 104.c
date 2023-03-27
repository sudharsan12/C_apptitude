#include<stdio.h>
int main()
{
	int a[]={1,4,3,5,3,1};
	int i,c=0,j;
	for(i=0;i<6-1;i++)
	{
		for(j=i+1;j<6;j++)
			if(a[i]>a[j])
				c++;
	}
	printf("%d \n",c);
}
