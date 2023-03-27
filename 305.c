#include<stdio.h>

int main()
{
	int s=8,N=3,M=0;
int i=0;
	while(s<2000)
	{
		s=s+N-M;

		N=N*M;

		M=M%3;

		printf("%d \n",s);
		i++;
		if(i==8)
			break;

	}
}
