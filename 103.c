#include<stdio.h>
int dos(int a,int b)
{
	return (a^b);
}
int main()
{
	int a[]={1,2,3,4,5};
	int sum=0,i;
	for(i=0;i<5;i++)
		sum+=dos(a[i],2);
	printf("%d \n",sum);
}
