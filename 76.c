#include<stdio.h>
struct st
{
	int x;
	struct st next;  // compiler error because a structure cannot contain a member of its  own type bcus if this not allowed them 
	                 // its impossible to known the size of struct
};
int main()
{
struct st temp;
temp.x=10;
temp.next=temp;
printf("%d ",temp.next.x);
}
