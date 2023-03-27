#include<stdio.h>
void fun(char *p)
{
	if(*p=='\0')
		return;
	fun(p+1);
	fun(p+1);
	printf("%c ",*p);

}
int main()
{
	fun("xyz");
}
