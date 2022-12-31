#include<stdio.h>
main()
{
	//2d character array
	char name[5][20];
	int i;
	printf("\n enter 5 student name=");
	for(i=0;i<5;i++)
	{
		scanf("%s",name[i]);
	}
	printf("\n display 5 student name=");
	for(i=0;i<5;i++)
	{
		printf("\n %s",name[i]);
	}
}