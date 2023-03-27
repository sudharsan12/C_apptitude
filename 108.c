#include<stdio.h>
int main()
{

	char a[5]={'s','t','a','r','t'};
	int i;
	for(i=1;i<3;i++)
	{
		switch(a[i])
		{
			case 'a':
				a[i+1]=a[i];
				break;
			case 's':
				a[i-1]=a[i];
				break;
			default:
				a[i]=a[i-1];
		}
	}
	for(i=1;i<4;i++)
		printf("%c ,",a[i]);

}

