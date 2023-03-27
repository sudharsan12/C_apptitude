#include<stdio.h>
int main()
{

	int ar[]={11,13,11,10,11,12,12,22,19,21};

	int *i=ar;
	int *j=ar+1;
	int *l=ar+5;

	while(j<l)
	{
		if(*j<*i)
			i=j;
		j=j+1;
	}

	printf("%d",*i);

}
