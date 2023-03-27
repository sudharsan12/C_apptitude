#include<stdio.h>
int main()
{
	int a[]={3,2,1,6,5};
	int i,j,temp;
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			if((a[i]%2>=a[j]%2))
			{
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
			}
		}
	}
	for(i=0;i<4;i++)
		printf("%d  ",a[i]);
}
