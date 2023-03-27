#include<stdio.h>
int main()
{
	char *str[]={"11222","44433","99888","00033"};
	char **p[]={str+1,str,str+3,str+2};
	char  ***ps;
	ps=p;
	++ps;
	printf("%s",**++ps+2);

}
