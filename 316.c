#include<stdio.h>
int main()
{
	int arr[]={11,13,11,10,11,12,12,22,19,21};

	int *i=arr;
	int *j=arr+1;
	int *l=arr+5;

	printf("%d  %d  %d \n",*i,*j,*l);
	while(j<l)
	{
		if(*j<*i)
			i=j;
				j=j+1;

	}
printf("%d ",*i);


}
