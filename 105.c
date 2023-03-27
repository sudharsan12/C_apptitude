#include<stdio.h>
int main()
{
	char *a="CY6E4";
	int i,num=0;
	for(i=0;i<5;i++)
		if(a[i]>=49&&a[i]<=58)
		   num+=a[i]-'0';
	printf("%d \n",num);
}
