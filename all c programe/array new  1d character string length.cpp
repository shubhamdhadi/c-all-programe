#include<stdio.h>
#include<string.h>
main()
{
	char s1[20];
	int len;
	printf("\n enter string=");
	gets(s1);
	
	printf("\n string is =%s",s1);
	
	len=strlen(s1);
	printf("\n lenght of string is %d",len);
}