#include<stdio.h>
int main()
{
	int A=0,B=2,i=3,N=10;

	while(i<=N)
	{
		if(i%3==0){
			A=(A*3)%5;
			printf("%d",A);
		}else
		{
			B=B*(B*3)%5;
			printf("%d",B);
		}
		i=i+1;
	}
}
