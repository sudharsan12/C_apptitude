#include<stdio.h>
int main()
{
	int x=200,y=7;
	do
	{
		if(x/2<10)
			y/=2;
		if(y/2<5)
			x/=2;
		printf("Zoho\n");
	}while(x>0);
}
