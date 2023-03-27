#include<stdio.h>
// f (struct emp);it will make error bcus this parametre struct not define before
struct emp
{
	char nme;
	int age;
};
int main()
{
	struct emp e={'h',14};
	f(e);
}
f(struct emp e)
{
	printf("%c %d\n",e.nme,e.age);
}
