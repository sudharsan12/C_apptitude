#include<stdio.h>
void main()
{
	int a=3,b=5,c=7,d=77,e;
	

	e=a>=4?5:9>b?(c=55):d<500?(a=33):88; // this here many ternry is here it will execute right -> to-> left so that last ternary is executed first
//        -------
//           3    ------------
//                      2   --------------
//                                1
	printf("%d \n",e); //55   ///  e=c=55   
}

/// 1) e=a>=4?5:9>b?(c=55):d<500?(a=33):88;
//  2) e=a>=4?5:9>b?(c=55):(a=33);
//  3)e=a>=4?5:(c=55)
//  4)e=c=55
