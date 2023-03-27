#include<stdio.h>
int main()
{
	int a[]={2,4,6,7,9},res=0,n=5;
	int i=0,t;
	while(i<n)
	{
		t=a[i];
		while(t>5)
		{
			res+=1;
			t=t-(n/2);
		}
		i+=1;

	}
	printf("%d ",res);
}
