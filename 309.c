#include<stdio.h>
int main()
{
	int N=3245,T=N,s=0;

	while(T>0)
	{
		int D=T%10;
		int P=D*D*D;
		s=P+s;
		T=T/10;

	}
	if(s==N)
		printf("%d",s*2);
	else
		printf("%d",s);

}
