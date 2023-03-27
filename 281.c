#include<stdio.h>
void main()
{
	int n=21;
	int out=1;
	while(n>=3)
	{
		n/=2;
		out *=(n/2);

		printf("%d %d \n",n,out);
	}
	printf("%d \n",n*out);
}
