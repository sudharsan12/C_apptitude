#include<stdio.h>

int calc(int x,int *py,int **ppz)
{
	int y,z;
	**ppz+=1;
	z=**ppz;//8
	*py+=**ppz;//16
	y=*py;//16
	x+=*py;//23
	return x+y+z;
}
int main()
{
	int c,*b,**a;
	c=7;
	b=&c;
	a=&b;
	printf("%d  ",calc(c,b,a));
}
