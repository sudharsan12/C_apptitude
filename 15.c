#include<stdio.h>
int main()
{
	struct emp
	{
		char name[20];
		int age;
		float sal;
	};
	struct emp e={"tiger"};
	printf("%d %f\n",e.age,e.sal);// 0, 0.00000

}
// when the automatically structure is partially inialized ,remaining elements
// of the structure are initalized to 0
