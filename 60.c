#include<stdio.h>
int main()
{
	char a[]="sudhrsan";
	char *b="sudharsan";
	printf("%d  %d\n",sizeof(a),sizeof(b));
	printf("%d  %d\n",sizeof(*a),sizeof(*b));

}
