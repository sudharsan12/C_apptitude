#include<stdio.h>
int main()
{

	int d=267;
	int s=3;

	while(1)
	{
	int r=d%2;

	if(!(r>=3))
		s=s-1;
	d=d/2;

	if(!(d>1))
	{
		printf("%d",s);
		break;
	}

	}
}
