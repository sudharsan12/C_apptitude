#include<stdio.h>
int main()
{
	char *str[]={"AABBB","BBBCC","CCDDD","DDDEE"};
	char **sp[]={str+1,str,str+3,str+2};
	char ***ps;
	ps=sp;
	++ps;
	printf("%s ",(**++ps+2));
}
