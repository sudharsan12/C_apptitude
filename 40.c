#include<stdio.h>
int main()
{
	float a=0.7;
	if(a<0.7f)
		printf("C");
	else
		printf("C++");

	printf("%f \n",a);
	printf("%f \n",0.7f);
	printf("%f \n",0.7);


	// here 
	// a value 0.700000
	// 0.7f    0.700000
	// both are equal
	
	// here 
	// a value 0.700000
	// 0.7f    0.7000000000
	// both are not equal
}
