#include<stdio.h>
int main()
{
	int i,j;
	int arr[]={5,69,25,42,31,28,44};
	int len=8,count=0;

	for(i=0;i<len;i++)
	{
		if(arr[i]%3==0)
		{
			for(j=i;j<len;j++)
				arr[j]=arr[j+1];
			i--;
			len--;
		}
	}
	for(i=0;i<len;i++)
           //printf("%d ",arr[i]);
		count=count+arr[i];
	printf("%d",count);
}
