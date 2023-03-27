#include<stdio.h>
int main()
{
	int i=5;
	printf("%d %d %d %d %d %d \n",i++,i--,++i,--i,i);
	 //  
	// here precedence of the right to left                         i)  4  ,5 ,5 , 4 ,  5
	// but assigning is left to right                                ii)  4,5,5,5,5  garbage value
	//
	// beacuse the extra one access specify is inclued
}
