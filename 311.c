#include<stdio.h>
int main()
{
	int T1=2312,T3=1,res;

	while(T1>0)
	{
		int T2=T1%10;

		T3=(T3*10)+T2;
		T1=T1/10;
		res=T3;
	}
	printf("%d ",res);
}
