#include<stdio.h>
fun()
{
here:
	printf("if it work \n");
}
int main()
{
	int i=1;
	while(i<=5)
	{
		printf("%d ",i);
		if(i>2)
			goto here;
	}
}
// output is error
// because  goto cannot take label on other function
