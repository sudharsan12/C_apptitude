#include<stdio.h>
struct addr
{
	char city[10];
	char street[30];
	int pin;
};
struct tag
{
	char name[30];
	int gender;
	struct addr locate;
}person, *kd=&person;


// *(kd->name+2)= *((*kd).name+2)
int main()
{
//	kd->name="sudharsan";
	printf("%u %u\n",&person,kd);
	*(kd->name+2)='A';
	printf("%c \n",*(kd->name+2));
}
