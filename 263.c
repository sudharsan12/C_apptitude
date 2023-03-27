#include<stdio.h>
int x;
int area(int y)
{
    printf("%d \n",y);
	if(y%10==0)
    {
        printf("hai\n");
		return (y+=(10+x++));
    }
	return x+10;
}
int main()
{
	int x=10;
	x++;
	area(x)+x;
	x--;
	x+=10;
	printf("%d",area(x));
}
