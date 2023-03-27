#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct st
{

    int rn;
    char name[16];
}s;

void input(s **ptr)
{

 s *ne=malloc(sizeof(s));

 int n=2;
 char a='a';

 strcpy(ne->name,"kohli");
 ne->rn=5;
 *ptr=ne;

 printf("%d \n",~ne->rn);
 printf("%d \n",~n);
 printf("%s \n",ne->name+3);
}
int main()
{
s *k=0;
input(&k);
}
