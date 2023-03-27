#include<stdio.h>
void fun(char **p)
{
	char *t;
	t=(p+=sizeof(int))[-1];
	printf("%s \n",t);
	t=p[1];
	printf("%s \n",t);
}
int main()
{
	char *ptr[]={"ab","cd","ef","gh","ij","kl"};
	fun(ptr);

}
