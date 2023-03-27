#include<stdio.h>
#include<string.h>
int m=0;
void swap(char *x,char *y)
{
	char temp=*x;
	*x=*y;
	*y=temp;
}

void calculate(char *a,int i,int n)
{
	int j=0;
	if(i==n)
	{
		printf("%s\n",a);
	m++;
	}
	else
		for(j=i;j<=n;j++)
		{

			swap((a+i),(a+j));
			calculate(a,i+1,n);
			swap((a+i),(a+j));
		}
}
int main()
{
	char str[10]="SVCE";
	int len=0,i=0;
	len=strlen(str);
	calculate(str,0,len-1);
	printf("%d  \n",m);
}
