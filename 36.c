#include<stdio.h>
int main()
{
	int *p,c=10;
	*p++=c;
	printf("%d ",*p); //0
	printf("%d ",*(p-1)); //10


	// here the p stored address is 1000
	//  *p++; 1000=10
	//  and it moved on the 1004=0
}
