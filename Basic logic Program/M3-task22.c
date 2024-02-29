#include<stdio.h>

/*Calculate compound interest (Compound Interest formula:
a. Formula to calculate compound interest annually is given by:
Amount= P(1 + R/100)t
b. Compound Interest = Amount – P*/
main()
{
	float p,r,t,CI,amount;
	
	printf("enter the principle ammont = ");
	scanf("%f",&p);
	
	printf("\nenter the rate = ");
	scanf("%f",&r);
	
	printf("\nenter the time = ");
	scanf("%f",&t);
	
	amount=p*(1+r/100)*t;
	CI = amount - p;
	
	printf("\n Ans a) : The  amount = %f",amount);
	printf("\n Ans b) : The compound intrest = %f",CI);
	
}
