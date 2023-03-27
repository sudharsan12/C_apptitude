#include<stdio.h>
int main()
{
	union
	{
		int i;
		int i2;
	}myvar={.i2=100};
	printf("%d \n",myvar.i);
}
