#include<stdio.h>
int main()
{
	union a
	{
		int i;
		char ch[2];
	};
	union a z;
		z.i=512;
	printf("%d %d",z.ch[0],z.ch[1]);

}
