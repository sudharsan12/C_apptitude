#include<stdio.h>
int main()
{
	int a=10;
	f();     /// showing warning implict declartion
	void f();
	printf("\n %d ",a);
}
void f()
{
printf("hi\n");
}

