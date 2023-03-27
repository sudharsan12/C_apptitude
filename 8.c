#include<stdio.h>
int main()
{
	extern int i;
	i=20;
	printf("%d  ",sizeof(i));
   // this is compiler error
   //  because extern int i is declaration
   //  not a definition
}
