#include<stdio.h>
main()
{
	int x,y,z;
	
	printf("enter the value of x = ");
	scanf("%d",&x);
	
	printf("enter the value of y = ");
	scanf("%d",&y);
	
	z=x;
	x=y;
	y=z;
	
	printf("\n after swaping x = %d",x);
	printf("\n after swaping y = %d",y);
}
