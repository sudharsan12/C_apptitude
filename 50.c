#include<stdio.h>
#define CIRCUM(R) (3.14*R*R)
int main()
{
	float r=1.0,c;
	c=CIRCUM(r);  // here c=(3.14*1.0*1.0); ;
	printf("%f ",c);
	if(CIRCUM(r)==6.28)  //if((3.14*1.0*1.0):==6.28) //making error
		printf("google\n");
}
