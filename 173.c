#include<stdio.h>
#define THIS 0x01
#define THAT 0x02

int main()
{

	unsigned char va=0x00;
	va|=THIS;
	va|=THAT;
	if(va==THIS&THAT)
		printf("%d ",THAT);
	if(va& THAT>>1)
		printf("%d ",THIS);

}
