#include<stdio.h>
#include<math.h>
/*calculate the compound intrest*/
main()
{
	float p,r,t,CI;
	
	printf("enter the principle ammont = ");
	scanf("%f",&p);
	
	printf("\nenter the rate = ");
	scanf("%f",&r);
	
	printf("\nenter the time = ");
	scanf("%f",&t);
	
	CI = p * (pow((1+r/100),t));
	
	printf("\n The compound intrest = %f",CI);
	
}
