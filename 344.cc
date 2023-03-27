
#include<stdio.h>
int main()
{
	int arr[]={1,9,0,11,25,11,10,9,3,19};

	int a=100;
	int b=109;
	int *d=arr;

	while(a!=b+1)
	{
		if(a%2==0)
		{
			*d=(a-100)+(a-99);

			printf("%d ",*d);

		}
		a+=1;
	}
}
