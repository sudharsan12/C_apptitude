#include<stdio.h>
int main()
{
	int a=10,b,c;
	b=a<=20?b=30:c=30;
	// another way to writing
	*(a<=20?&b:&c)=30;
}
