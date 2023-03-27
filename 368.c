#include<stdio.h>
int main()
{
	char arr[8]={'z','0','h','0','c','0','r','p'};
	char *ptr=(arr+2)[3];

	printf("%s",*ptr);
	switch(*ptr)
	{
		case 'z':
			printf("Z");
			break;
		case '0':
			printf("0");
			break;
		case 'h':
			printf("h");
			break;
		case 'o':
			printf("0");
			break;
		default:
			printf("zoho");
			break;
	}
}
