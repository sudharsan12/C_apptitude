#include<stdio.h>
#include<string.h>
int main()
{
	char *s;
	char *fun();
	s=fun();
	printf("%s \n",s);
}
char *fun()
{
	static char buf[30];
	strcpy(buf,"sudharsan hai da");

	return(buf);

}
