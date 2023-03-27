#include<stdio.h>
struct e 
{
	char s[10];
}v={"sudharsan"};// this valid

int main()
{
	struct e s;
	scanf("%s",s.s);
//	v w={"akil"};// here is invalid
	printf("%s ",s.s);
//	printf("%s ",w.s);
}

