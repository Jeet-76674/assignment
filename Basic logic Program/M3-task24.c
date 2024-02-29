#include<stdio.h>
main()
{
	char e1,e2,e3,e4,e5;
	int p1,p2,p3,p4,p5;
	
	printf("enter first employe name = ");
	scanf("%s",&e1);
	printf("enter first employe salary = ");
	scanf("%d",&p1);
	
	printf("\nenter second employe name = ");
	scanf("%s",&e2);
	printf("enter second employe salary = ");
	scanf("%d",&p2);
	
	printf("\nenter third employe name = ");
	scanf("%s",&e3);
	printf("enter third employe salary = ");
	scanf("%d",&p3);
	
	printf("\nenter fourth employe name = ");
	scanf("%s",&e4);
	printf("enter fourth employe salary = ");
	scanf("%d",&p4);
	
	printf("\nenter fifth employe name = ");
	scanf("%s",&e5);
	printf("enter fifth employe salary = ");
	scanf("%d",&p5);
	
	printf("\nTotal salary = %d",p1+p2+p3+p4+p5);
	printf("\nAvrage salary = %d",(p1+p2+p3+p4+p5)/5);
}
