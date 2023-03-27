#include<stdio.h>
#include<string.h>
struct test
{
	char str[20];

};
int main()
{
	struct test  st1,st2;
	strcpy(st1.str,"sudharsan");
	st2=st1;
	st1.str[0]='S';
	printf("%s \n",st2.str);
	printf("st1=%u st2=%u\n",&(st1.str),&(st2.str));
}
