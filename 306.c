#include<stdio.h>
int main()
{

	int N;
scanf("%d",&N);

	    int num=4,i=2;

	while(i<=N)
	{
		int c=N-i+3;

		num=num+c;

		i=i*10;
	}
	printf("%d ",num);
}

