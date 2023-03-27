#include<stdio.h>
int main()
{
	int n=10,res=0,i;
	for(i=1;i<=n;i++){

		if(i%2==0)
			res+=1;
		if(i%4==0)
			res-=2;
		if(i%5==0)
			res+=1;
	}
	printf("%d \n",res);
}
