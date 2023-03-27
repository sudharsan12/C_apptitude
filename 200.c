#include<stdio.h>
int main()
{
	int i=9,j=10,k=4,l=8;
	int m=0;
	while(k)
	{
		m=-i+j++-k--+ ++l;
	}
	printf("%d%d%d%d%d",i,j,k,l,m);
}

