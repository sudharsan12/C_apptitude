#include<stdio.h>
int main()
{
	int a[]={11,18,22,7,15,26};
	int sum=0,i;
	for(i=0;i<5;i++)
	{
		switch(a[i]%2)
		{
		case 1:
			sum=sum-a[i];
			break;
		case 0:
			sum=sum+a[i];
			break;
		default:
	
					sum=sum*a[i];
		}
	}
	printf("%d",sum);
}
