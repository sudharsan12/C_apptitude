#include<stdio.h>
struct point
{
	int x,y,z;
};
int main()
{
	struct point p={.y=0,.z=1 ,.x=2};
	printf("%d %d %d ",p.x,p.y,p.z);
// 2 0 1
}
