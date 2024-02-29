/*32.Write a C program to input basic salary of an employee and calculateits
Gross salary according to following:
Basic Salary <= 10000 : HRA = 20%, DA = 80%
Basic Salary <= 20000 : HRA = 25%, DA = 90%
Basic Salary > 20000 : HRA = 30%, DA = 95%*/
#include<stdio.h>
main()
{
	int a;
	printf("Enter your basic salary = ");
	scanf("%d",&a);
	
	if(a<=10000)
	{
		printf("Your HRA = %.2f",(float)(20*a)/100);
		printf("Your DA = %.2f",(float)(80*a)/100);
	}
	else if(a<=20000)
	{
		printf("Your HRA = %.2f",(float)(25*a)/100);
		printf("Your DA = %.2f",(float)(90*a)/100);
	}
	else if(a>20000)
	{
		printf("Your HRA = %.2f",(float)(30*a)/100);
		printf("Your DA = %.2f",(float)(95*a)/100);
	}
	
	
}
