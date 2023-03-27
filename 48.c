#include<stdio.h>
int main()
{
	int b;
	b=f(20);
	printf("%d \n",b);
}
int f(int a)
{
	a>20?return (10):return (20);

	// the retrn statement doesnot write in the ternary function inside
	
	//soultion
	// return(a>20?10:20);
}
