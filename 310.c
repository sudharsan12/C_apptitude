#include<stdio.h>

int main()
{
	int D=267,s=3;

	while(D>1)
	{
		int R=D%2;

		if(!(R>=3))
		{
			s=s-1;
		}
			D=D/2;

	}
	printf("%d ",s);
}
