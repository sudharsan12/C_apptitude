#include<stdio.h>
#define PRINT(int) printf(#inti="%d ",int)// # is string operator
int main()
{
	int x=2,y=3,z=4;
	PRINT(x);
	PRINT(y);
	PRINT(z);
}

