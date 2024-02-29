/*3. WAP to check if the given year is a leap year or not.*/
#include<stdio.h>
int main()
{
	
	int y,x;
	printf("enter the year = ");
	scanf("%f",y);
	x=y%4;
	if(x==0)
	{
		printf("enterd year is leap year");
	}
	else
	{
		printf("enterd year is not leap year");
	}
    return 0;
}

