#include<stdio.h>
void foo(int a)
{
	int count=0;
	do
	{
		if(a%3==2)
		{
			count+=1;
			a+=1;
		}
		if(a%3==1)
		{
			count+=2;
			a+=2;
		}else
			count+=3;
	}while(count<10);
printf("%d \n",a);
}
int main()
{
	int x=37;
	foo(x);
}
