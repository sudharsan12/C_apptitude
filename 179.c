#include<stdio.h>

int main()
{

	int res=7,i=63;
	
	while(i>res)
	{
		switch(res%6)
		{

			case 0:res+=4;
			case 1:res+=7;
			case 2:res+=9;
			default:res+=10;
		}
		i--;
	}
	printf("%d \n",res);
}
