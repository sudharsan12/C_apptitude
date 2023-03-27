#include<stdio.h>
#include<string.h>
int main()
{
	char *p="sudharsan";
	char *q="surya";
	char *res=strcat(p,q);
	printf("%s ",res);
	// there is no space to joint the two strings
	// so segmentation fault  
}
