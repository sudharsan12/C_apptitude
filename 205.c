#include<stdio.h>
int fun(int p,int q)
{
	int count=0;
	while(p>q)
	{
		count+=-2;
		p-=2;
		q++;
	}
	return count;
}
int call(int p,int q)
{
	return fun(++p,q++);
}
int main()
{
	char p='A',q='Z',z=call(q,p);
	printf("%d",z);
}
