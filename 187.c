#include<stdio.h>
int main()
{
	int a=4,b=3;
	int *p=&a,*q=&b;
	int c;
	c=*q * *p++ + ++a / b--;          //  p-->1000 ->>&a -->>> 4
	                                 //  q-->1004 ->>&b -->>> 3
	                                  // *p++ ---> 1000++ move on next address 

	printf("%d$%d$%d\n",a,b,c);


       int t=10;
      p=&t;
      (*p)++;
      *p++;                              //  * ++ are same percedence but associatvity is right to left so that ++ is first then is star 
                                               //so address move on next show that the address value;
      printf("%d %d\n",t,*p);


}
