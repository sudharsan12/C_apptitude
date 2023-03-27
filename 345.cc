#include<stdio.h>
int main()
{
	int arr[]={2,3,5,6,9,7,7,9,9,10};
	int *x=arr;
	int s1=0;
	int s2=0;

	while(x<arr+8)
	{
		if(*x%3==0)
			s1=s2-*x;
		else
			s2=s1-*x;

		x=x+1;
	}
	printf("%d ",s2-s1);
}

