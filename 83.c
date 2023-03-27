#include "stdio.h"
int main()
{
	struct  {
		int i1;
		char c;
	}myvar={ .i1=100,.c='A'};
	printf("%d %c\n",myvar.i1,myvar.c);
}
