#include<stdio.h>
#include<stdlib.h>
void fun(int **);
void print(int *);
void main()
{
	int *kk=0;
	fun(&kk);
	print(kk);
}
void fun(int **k)
{
	int *p=malloc(sizeof(int));
	*p=511;
	*k=p;
}
void print(int *g)
{
	printf("%d \n",*g);
}
