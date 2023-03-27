#include<stdio.h>
#define  n 9
int func()
{
	int i;
	int arr1[n],arr2[n],arr3[n];
	arr1[0]=arr2[0]=arr3[0]=0;
	arr1[1]=1;
	arr2[1]=2;
	arr3[3]=3;
	for(i=2;i<=n;i++)
	{
		arr1[i]=arr2[i-1]+arr2[i-2];
		arr2[i]=2*arr1[i];
		arr3[i]=3*arr1[i];
	}

	printf("%d  %d  %d ",arr1[n],arr2[n-1],arr3[n-2]);

	return arr1[n];
}
int main()
{
	printf("%d\n",func(n));
}
