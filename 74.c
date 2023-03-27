#include<stdio.h>
int main()
{
	struct site
	{
		char nmae[10];
		int no;
	};
	struct site *ptr;
	printf("%s ",ptr->nmae);
	printf("%d ",ptr->no);


	// runtime  error 
	// this ptr doesnot allocte any space for store the value 
	
}
