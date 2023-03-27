#include<stdio.h>
int main()
{
	int i=-3,j=2,k=0,m;
	m=++i&&++j||++k;
	printf("m=%d i=%d j=%d k=%d \n",m,i,j,k);
	// m=1 i=-2,j=3,k=0
	i=-3,j=2,k=0,m;
	m=++i||++j&&++k;
	printf("m=%d i=%d j=%d k=%d \n",m,i,j,k);
	// m=1 i=-2 j=2, k=0
	i=-3,j=2,k=0,m;
	m=++i&&++j&&++k;
	printf("m=%d i=%d j=%d k=%d \n",m,i,j,k);
	// m=1 i=-2 j=3, k=1
}
