#include<stdio.h>
int main()
{
	int a[]={9,8,7,6,5,4,3,2,1,0};
	int i;
	for(i=0;i<2;i++)
		printf("%d \n",a[a[i]]);

}
