#include<stdio.h>
int main()
{
	struct st
	{
		int x;
		static int y;
	}s;
printf("%d ",sizeof(s));

// in c : cannot support struct & union inside static variable
// in c++: can support static inside the struct but union inside the struct doesnot support
}
