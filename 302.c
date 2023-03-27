#include<stdio.h>
int main()
{
	int i,j;

	int a[]={5,4,1,-4,2,-1,1,1};

	int N=sizeof(a)/sizeof(a[0]);

	for(i=2;i<2*N/3;i++)
	{
		a[i]=a[i]*2;
		i++;
	}
	N++;

	for(j=3*N/4;j>N%2;j--)
	{

		int i=j/2;
		a[i]=a[i]-2;
		printf("%d ",a[i]);
	}
}
