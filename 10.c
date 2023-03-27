#include<stdio.h>
int main()
{
	display();// here displyed is called before in such case compiler will assum that is declared function
}
int  display()// it will assmue to returned  an int and accept an unspecied number of agruments
{
	printf("hi\n");
}
