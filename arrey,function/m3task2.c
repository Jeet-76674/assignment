#include<stdio.h>
main()
{
	int a,b,c,d;
	printf("enter the 1st numer : ");
	scanf("%d",&a);
	printf("enter the 2nd numer : ");
	scanf("%d",&b);
	replay:
	printf("\npress 1 for addition");
	printf("\npress 2 for substraction");
	printf("\npress 3 for multiplication");
	printf("\npress 4 for divistion");
	printf("\nEnter your chioce : ");
	scanf("%d",&c);
	switch(c)
	{
		case 1:
			printf("ADDITION = %d",a+b);
			break;
		case 2:
			printf("SUBSTRACTION = %d",a-b);
			break;	
		case 3:
			printf("MULTIPLICATION = %d",a*b);
			break;
		case 4:
			printf("DIVISTION = %d",(float)a/b);
			break;
			
		default:
			printf("Enter valid choice.");		
	}
	printf("\nDo you want to perform more?");
	printf("\npress 1 for Yes & 0 for No");
	scanf("%d",&d);
	
	if(d==1)
	{
		goto replay;
	}
	else
	{
		printf("Thank you!!!");
	}
}
