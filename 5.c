#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char d[3][16]={"rohit","polard","bolt"};
typedef struct ipl
{
	char s[16];
	struct ipl *mi;
}IPL;
int main()
{
	int i;
	IPL *cup=0,*new;
	for(i=0;i<2;i++)
	{
		new=malloc(sizeof(IPL));
	       strcpy(new->s,d[i]);
	       new->mi=cup;
	       cup=new;
	}
	printf("%s \n",cup->mi->s);
}
