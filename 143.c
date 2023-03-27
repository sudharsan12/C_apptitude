#include<stdio.h>
int main()
{
	int x=4,y=3,m,a,b,t;
	a=x;
	b=y;
	while(b!=0)
	{
		t=b;
		b=a%b;
		a=t;
	}
	m=(x*y)%a;
	printf("%d,%d",m,a);
}
