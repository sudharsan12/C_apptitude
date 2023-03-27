#include<stdio.h>
int main()
{
	struct {
		int a[2];
	}arr[]={1,2};
	printf("%d %d \n",arr[0].a[0],arr[0].a[1]);
}
