#include<stdio.h>
int main()
{
	char s[10]="abc360*";
	char *p=s;
	p=p+3;
	printf("%s \n",p);//360*
	p--;
	*p++='d';  // here * and ++ is same priority so associativity wise left to right  * is execute first then ++;
	*p='\0';
	printf("%s \n",s);// abd
}
