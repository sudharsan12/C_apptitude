#include<stdio.h>
int main()
{
int num=5;
int i=60;
while(i>num)
{
	switch(num%9)
	{
		case 0:num=num+3;
		case 1:num=num+7;
		case 2:num=num+8;
		case 3:num=num+6;
		default:num=num+1;
	}
	i--;
}
printf("%d%d",num,i);
}
