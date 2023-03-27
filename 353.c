#include<stdio.h>

void mixit(char *s)
{
	int len=0,i;
	while(s[len]!='\0')
		len++;

     for(i=0;i<len-1;i+=2)
     {
	     char t=s[i];
	     s[i]=s[i+1];
	     s[i+1]=t;
     }
     for(i=1;i<len;i+=2)
     {
	     if(s[i]>='A' && s[i]<='Z')
	     {
		     s[i]='@';
	     }else
		     s[i]-=32;
     }

}

int main()
{
	char word[]="HappyDiwali";
	mixit(word);
	printf("%s",word);
}
