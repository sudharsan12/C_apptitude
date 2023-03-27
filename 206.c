#include<stdio.h>
int main()

{
	int num1=10,num2=10;
	int result1=num1 &num2 ^num1 |num2;
	int result2=num1<<2|num2>>2;
	printf("%d %d",result1,result2);
}
