#include<stdio.h>
int main()
{
	int a=5;
	int b=0;//a++ + ++a + a++ + ++a;
	printf("%d \n",b);
	b= (a+1) + (a+2) + (3+a) + (4+a);
	printf("%d \n",b);
}
