#include<stdio.h>
#include<string.h>
#include<malloc.h>
struct emp
{
	int len;
	char name[1];
};
int main()
{
	char newname[]="sudharsan";
	struct emp *p=(struct emp*)malloc(sizeof(struct emp)-1+strlen(newname)+1);// 8-1+9+1=17
	printf("%d \n",sizeof(struct emp)-1);
	p->len=strlen(newname);
	strcpy(p->name,newname);
	p->len=4;
	int i;
	for(i=0;i<1000;i++)
	(p->name-4)[i]='Y';
	printf("%u %u %u",p,&(p->len),&(p->name));
	printf("%d %s ",p->len,p->name);

}
