#include<stdio.h>
int main()
{
	//char arr[5]="sudh";
	arr++;
	printf("%u \n",arr); // here compilation error because l value required
	                      //   ex strating address is 1000
			      //   it increment 1000=1000+1 it is not possible 
			      //   because this arry stored in stack section not incremnt the this memory
	
	char *arr="sudhar";
	printf("%u \n",&arr);   // here "sudhar" stored in data section this starting address
	                        // stored in the stack section memmor &p=> 1000
				// p=2000  this 2000 is starting address of data section string memory
	printf("%u \n",arr);
	arr++;
	printf("%u \n",arr);
}
