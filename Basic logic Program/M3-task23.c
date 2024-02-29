#include<stdio.h>
main()
{
	int x,y;
	
	printf("enter the value of x = ");
	scanf("%d",&x);
	
	printf("enter the value of y = ");
	scanf("%d",&y);
	
	x=x*y;
	y=x/y;
	x=x/y;
	
	printf("\n after swaping x = %d",x);
	printf("\n after swaping y = %d",y);
}
