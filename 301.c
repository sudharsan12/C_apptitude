#include<stdio.h>
int main()
{
int num1=10,num2=10;

int res_1=num1&num2^num1|num2;
int res_2=num1<<2|num2>>2;

printf("%d%d",res_1,res_2);

}

