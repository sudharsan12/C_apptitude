#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct st
{
	int rn;
	char name[16];
}s;

void input(s **);
void main()
{
	s *k=0;
	input(&k);
}

void input(s **ptr)
{
	s *new;
	new=malloc(sizeof(s));
	int n=2;
	char a='a';
	strcpy(new->name,"kohli");
	new->rn=5;
	*ptr=new;
	printf("%d  \n",~new->rn);
	printf("%d  \n",~n);
	printf("%s  \n",new->name+3);
}


