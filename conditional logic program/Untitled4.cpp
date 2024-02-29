#include<stdio.h>
main()
{
	
	int r;
	printf("enter the year = ");
	scanf("%d",r);
	
	if(r%4==0)
	{
		printf("enterd year is leap year");
	}
	else
	{
		printf("enterd year is not leap year");
	
	}
	return 0;
}
