#include<stdio.h>
int main()
{
	int arr[]={0,-5,3,-5,2,-1,1,1,-1};

	int size=9;

	int last=arr[size-1];

	arr[size-1]=-1;

	int i;
	for(i=size-2;i>=0;i=i-1)
	{
		int temp=arr[i];
		arr[i]=last;
		if(last<temp)
			last=temp;
	}
	for(i=0;i<size;i++)
		printf("%d ",arr[i]);
}
