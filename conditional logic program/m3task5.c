#include<stdio.h>
void main()
{
	int a;
	printf("enter the number = ");
	scanf("%d",&a);
	
	if(a==0)
	{
		printf("Enterd number is zero");
	}
	else if(a>0)
	{
		printf("Enterd number is positive");
	}
	else
	{
		printf("Enterd number is negative");
	}
	
	
}
