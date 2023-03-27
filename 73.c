#include<stdio.h>
int main()
{
	struct site
	{
		char nmae[10]="sudharsn";
		int no=200;
	};
	struct site *ptr;
	printf("%s ",ptr->nmae);
	printf("%d ",ptr->no);


	// compiler error 
	// this nor add data inside the structure
}
