#include<stdio.h>
void abc(char *s)
{
	if(s[0]=='\0')
		return ;
	abc(s+1);
	abc(s+1);
	printf("%c",s[0]);
}

int main()
{
	abc("Appa");
	printf("\n");
	char p[10]="sudharsan";
	int i;
	char c;
	for(i=0;i<3;i++)
	c=++*p;
printf("%c  \n",c);	
}
