#include<stdio.h>
int decode(char *ptr)
{
	int retval=0;
	if(ptr)
	{
		while(*ptr && *ptr<='9' &&*ptr >='0')
		{
			retval=(retval *10)+(*ptr-'0');
			ptr++;
		}
	}
	return retval;
}

int main()
{
	printf("%d \n",decode("7sences")+decode("6"));

}
