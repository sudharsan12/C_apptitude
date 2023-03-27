#include<stdio.h>

int G(int x)
{
static int y=3;
y+=-1;
return (y+x);
}

int F(int x)
{
	int y;
	y=G(x);
	return (y);
}

int main()
{
	int x=6,y=2,count;
	for(count=-2;count<=0;++count)
	{
		y+=F(x)+G(x);
		printf("%d",y);
	}


}
