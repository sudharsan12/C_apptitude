#include<stdio.h>
int main()
{
	int i=0;
	switch(i)
	{
		// there is a no error on the switch statement
	}
	printf("hai\n");
int b;	
//	i>=1?b=200:b=100;//here lvalue required error was showing
	i <=1?b=200:(b=100); // solution
	printf("%d\n",i);
}
