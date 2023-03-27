#include<stdio.h>
int main()
{
	int n=500,flag=7,result=0,t=1;
	while(n!=0)
	{

		result=result+((n%7)*t);
		printf("%d ",result);
		n=n-(n%flag);
		t=t*10;
		n=n/flag;
	}
	printf("%d",result);
}
