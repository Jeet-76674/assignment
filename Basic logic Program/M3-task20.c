#include<stdio.h>
/*.Accept monthly salary from the user and deduct 10% insurance premium,
10% loan installment find out of remaining salary*/
main()
{
	float n,insurance_premium,loan_installment;
	
	printf("enter your monthly salary = ");
	scanf("%f",&n);
	
	loan_installment = (n*10)/100;
	printf("\nyour monthly loan installment deduction  = %f",loan_installment);
	insurance_premium = (n*10)/100;
	printf("\nyour monthly insurance premium deduction  = %f",insurance_premium);
	
	
	printf("\n\n\n\aremaining monthly salary = %f",n-insurance_premium-loan_installment);
	
	
}
