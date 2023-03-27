#include<stdio.h>
int main()
{
	struct {
		int a[2];
	}arr[]={{1},{2}};
	printf("%d %d %d %d \n",arr[0].a[0],arr[0].a[1],arr[1].a[0],arr[1].a[1]);

	// 1 0 2 0
}
