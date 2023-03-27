#include<stdio.h>
#define FNC(x,y)((x)>(y))?(x*y):(y-x);

int main()
{

	int p=11,q=5,r=2;
	r+=FNC(++p,q++);  // (++p,q++)?(++p*q++):(q++-++p);
	printf("%d,%d,%d",p,q,r);

}

