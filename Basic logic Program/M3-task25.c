#include<stdio.h>
main()
{
	int p1,p2,p3,p4,p5;
	
	printf("enter first expense = ");
	scanf("%d",&p1);
	
	printf("enter second expense = ");
	scanf("%d",&p2);
	
	printf("enter third expense = ");
	scanf("%d",&p3);
	
	printf("enter fourth expense = ");
	scanf("%d",&p4);
	
	printf("enter fifth expense = ");
	scanf("%d",&p5);
	
	
	printf("\nAvrage expense = %d",(p1+p2+p3+p4+p5)/5);
}
