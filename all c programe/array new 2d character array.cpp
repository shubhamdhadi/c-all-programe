#include<stdio.h>
main()
{
	//2d character array
	char name[5][20]={"scott","tiger","blake","martin","john"};
	printf("\n %s",name[0]);
	printf("\n %s",name[2]);
	printf("\n %c",name[0][2]);
	printf("\n %c",name[1][3]);
	printf("\n %c",name[3][2]);
}