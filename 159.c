#include<stdio.h>
int f(int b)
{
	if(b==0)
		return 0;
	else if (b%2==1)
	{
		printf("b");
		f(b-2);
	}else
	{
		printf("c");
		f(b/2);
	}
}
int main()
{
	int a;
	a=f(8);
	printf("%d ",a);
	int b=-3;



}
