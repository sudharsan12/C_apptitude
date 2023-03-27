#include<stdio.h>
int main()
{
	int i=32,j=0234,k,l,m;
	printf("%x ",j);
	k=i|j;
	l=i&j;
	m=k^l;
	printf("%d %d %d %d %d\n",i,j,k,l,m);
}
