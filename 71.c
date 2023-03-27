#include<stdio.h>
int i=0;
int fun(int n)
{
i++;
	if(n%2)
		return n++;
	else
		return fun(fun(n-1));

}
int main()
{
	int res=fun(200);
	printf("res=%d i=%d \n",res,i);
}
