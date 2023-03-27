#include<stdio.h>
int main()
{
	int i=0,j;
	j=i++*i++;
	printf("%d %d\n",j,i);
	j=i++&&i++;
	printf("%d %d\n",j,i);

	// 1 &&3=1
	// 2 &&5=1
	// 0 &&4=0

}
