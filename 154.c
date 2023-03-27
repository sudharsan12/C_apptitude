#include<stdio.h>
int main()
{
	int c[]={11,12,13,14,15};
	int j,*q=c;
	for(j=0;j<4;j++)
		++q;
	printf("%d  \n",*q);
}
