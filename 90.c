#include<stdio.h>
#define sqare(x)  x*x
int main()
{
	int i;
	i=256/sqare(4); // 256/4*4  here associatvity right to left so that  1)256/4=64*4 =256
         //ans  256	
	printf("%d ",i);
}
