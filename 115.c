#include<stdio.h>
int main()
{
	int a[][3]={1,2,3,4,5,6};
	int (*ptr)[3]=a; // base address-> (*ptr)  [3] ->number of element to the pass
	printf("%d %d \n",(*ptr)[1],(*ptr)[2]);
	++ptr;
	printf("%d %d \n",(*ptr)[1],(*ptr)[2]);

//	int *ptr[3]; array of pointer storing address

}
