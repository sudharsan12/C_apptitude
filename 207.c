#include<stdio.h>
int main()
{
	int i,j,ch='P';
	for(i=5;i>=1;--i)
	{
		for(j=0;j<i&&i==5;++j)
			printf("%c",(ch+j+32));
	}
}
