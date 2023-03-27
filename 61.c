#include<stdio.h>
int main()
{
	int a[]={100,200,300,400};
	printf("%d %d \n",a,sizeof(a));
	printf("%d \n",&a);
	int b[][2]={100,200,300,400};
	printf("%d %d \n",b,sizeof(b));
	printf("%d \n",&b);

}
