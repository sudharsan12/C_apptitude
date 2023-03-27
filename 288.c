#include<stdio.h>
int main()
{
	int arr[]={9,18,10,9,11};
	int cat[]={2,-1,4,2,1};

	int n=5;
int i,j;

	for(i=0;i<n;i=i+1)
	{
		for(j=0;j<n;j=j+1)
		{
			if(arr[i]%cat[j]==0)
			{
				int temp=arr[j];
				arr[j]=cat[i];
				cat[i]=temp;
			}
		}
	}

	for(i=0;i<n;i=i+1)
		printf("%d %d \n",cat[i],arr[i]);
}

