#include<stdio.h>
int main()
	{
		int a[3][4]={1,2,3,
			4,5,6,
			7,8,9,
			10,11,12};
		printf("&a=%u\n",&a);
		printf("&a+1=%u\n",&a+1);
		printf("a=%u \n",a);
		printf("a+1=%u \n",a+1);
		printf("*a=%u \n",*a);
		printf("*(a+1)=%u \n",*(a+1));
		printf("**(a+1)=%u \n",**(a+1));
	}




