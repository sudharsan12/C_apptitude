#include<stdio.h>
#include<string.h>
int m=0;
void swap(char *a,char  *b)
{
	char temp=*a;
	*a=*b;
	*b=temp;
}
void calc(char *str,int i,int n)
{
	int j=0;
	if(i==n)
	{
		printf("%s \n",str);
		m++;
	}
//	else
	
	for(j=i;j<=n;j++)
	{
		swap(str+i,str+j);
		calc(str,i+1,n);
		swap(str+i,str+j);
	}
	
}
int main()
{
	char a[10]="Zoh";
	int n=strlen(a);
	calc(a,0,n-1);
	printf("%s ",a);
	printf("%d ",m);

}
