#include<stdio.h>
void f(int *a,int m)
{
	int j=0;
	for(j=0;j<4;j++)
		*(a+j)=*(a+j)-5;
}
int main()
{
	int a[]={'s','v','c','e'};
	f(a,4);
	printf("%d \n",a[1]-'a');

}

