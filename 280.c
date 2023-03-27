#include<stdio.h>
int main()
{
	int i;
	char ch[]={'z','o','h','o'};
	char *ptr,*str1;
	ptr=ch;
	str1=ch;

	printf("%d  %d  %d \n",'0','A','a');

	i=(*ptr--+ ++*str1)-10;

	printf("%d \n",i);
}
