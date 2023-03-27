#include<stdio.h>
int main()
{
	int arr[]={-1,7,-1,5,8,9,4,-3,7,9};

	int *a=arr;

	int s1=1;
	int s2=1;
int tr=0;
	while(a<arr+6)
	{
		if(!(*a%2==0))
		{
			if(!(*a%3==0))
					{
					if(!(*a%5==0))
						s2=s2+*a;

				}
		}else
			tr=1;


		a=a+1;

	}
	printf("%d ",s1*s2);
}
