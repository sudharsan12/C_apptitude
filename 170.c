#include<stdio.h>
int main()
{
	int n=80,i,result=0;
	for(i=1;i<=n;i++)
	{
		if(i%2==0)
			result+=1;
		if(i%4==0)
			result-=2;
		if(i%8==0)
			result+=1;
	}
	printf("%d \n",result);
}
