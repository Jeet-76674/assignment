#include<stdio.h>
void main()
{
	int a;
	printf("enter the number of month{i.e : march = 3} = ");
	scanf("%d",&a);
	
	if(a==2)
	{
		printf("days = %d",28);
	}
	else if(a%2==0)
	{
		printf("days = %d",30);
	}
	else
	{
		printf("days = %d",31);
	}
	
	
}
