#include<stdio.h>
#include<stdlib.h>
void print(int *);
void scan(int *);
void main()
{
	int a;
	scan(&a);
	print(&a);
}
void scan(int *s)
{
	int *p=malloc(sizeof(s));
	*p=10;
	*s=*p;

}
void print(int *k)
{
	printf("%d \n",*k);
}
