#include<stdio.h>
/*
int main()
{
	int (*p)()=fun; // fun is not declared
	(*p)();
}
fun()
{
	printf("\n loud and clear\n");
}
*/
// this make error 

//soltion for this problem
int fun() // this make definition of the fun
{
	printf("\n loud and clear\n");
}
int main()
{
	int (*p)()=fun; // this fun addresss stored on the *p this pointer
	p();
}
