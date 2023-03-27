#include<stdio.h>
int main()
{
	int x=5,y=6;
	 int * const ptrx=&x;
//	ptrx=&x;
//	ptrx=&y;
	printf("%d \n",x);
}
