#include<stdio.h>
int sub(int a,int b)
{
	return a-b;
}
int add(int a,int b)
{
	return a+b;
}
int mul(int a,int b)
{
	return a*b;
}

int main()
{
	int a,b,c,res;
	a=2,b=3,c=5;
	res=add(a,b)*mul(a,c)+sub(c,a);
	printf("  %d\n",res);  

}
