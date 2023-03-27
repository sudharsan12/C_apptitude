#include<stdio.h>
int main()
{
	int a=10;
	void f();
	a=f();   // it pointing error ignored the value 
	printf("\n %d ",a);
}
void f()
{
printf("hi\n");
}

