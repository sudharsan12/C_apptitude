#include<stdio.h>
int main()
{
	int p=-1,q=2,r=0,result=0;
	int idx;
	for(idx=0;idx<10;idx++)
	{
		r=p+q;
		if(r<101)
			result+=r;
		p=q;
		q=r;
	}
	printf("%d",result);
}
