#include<stdio.h>
int main()
{
	int A=22245,R=3;

	while(A>R)
	{
	int D=A%10;

		R=R*10+D;

		A=A/10;
	}
	printf("%d ",A);
}
