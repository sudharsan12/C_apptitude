#include<stdio.h>
int main()
{
	int a[10][10]={{1,2,},{3,4},{5,6},{7,8},{9,10}};

	int *p=a[3];
	/*
	for(int i=0;i<10;i++)
    {
        for(int j=0;j<10;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
*/
printf("%d ",*p);
	int result=(*p+2)*a[4][1]+(++*p)+(*p+7);


	printf("%d ",result);

}
