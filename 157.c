#include<stdio.h>

int main()
{
	int a[]={-5,0,15,-20,-25};
	int i=0,j,m;
	i=++a[2];
	printf("%d \n",i);
	j=a[2]++;
	m=a[i++];
	printf("%d %d %d",m,i,j);
	int k=5;
	printf("  %d %d",k,k++);
}
