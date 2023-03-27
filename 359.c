#include<stdio.h>
int fun(int x,int *py,int **ppz)
{
	int y,z;

	**ppz+=1;
	z=**ppz;

	*py+=**ppz;
	y=*py;
	x+=*py;

	return x+y+z;
}

int main()
{
	int c,*b,**a;
	c=5;
	b=&c;
	a=&b;

	printf("%d",fun(c,b,a));
}
