#include<stdio.h>
int main()
{

	int arr[]={2,8,19,7,9,2,6,8,12,19};
	int i=0,j=0;
	int *a=arr;


while(a<=arr+4)
{
	int n=*a;
	if(a==arr)
		i=n+1;
	else
	{
		if(n>i)
		{
			j=i;
			i=n;
		}else
		{
			if(n>j)
				j=n;
		}
	}

	a=a+1;
}
printf("%d",j);

}
