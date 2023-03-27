#include<stdio.h>
int main()
{
	int arr[]={25,30,10,50,95,25};
	int i=40;
	int j=1;
	do
	{
	 //   printf("%d \n",i);
		arr[j]+=2*arr[j]+i++;

		j++;
	}while(j<5);
	printf("%d",arr[j-1]);
}
