#include<stdio.h>
int main()
{
	int n=1101101,i,d,t1=1,t2=1;
	i=n;
	while(n>0)
	{
		d=n%2;
		t1=t1+(d*d*d);
		t2=t2+1;
		n=n/100;
	}
	if(t1==t2)
		printf("T\n");
	else
		printf("F\n");

	printf("%d %d\n",t1,t2);
			}
