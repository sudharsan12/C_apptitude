#include<stdio.h>
int main()
{
	int a=3,b=2,p=1,q=1,i,j;
	for(i=1;i<5;i++)
	{
		p=1;
		for(j=1;j<i;j++)
			p=p+a-j;
		q=b*p;
		printf("%d ",q);
        }
}
