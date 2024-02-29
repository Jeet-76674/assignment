#include<stdio.h>
main()
{
	float temp;
	
	printf("Enter the tempreture(°F) = ");
	scanf("%f",&temp);
	
	printf("The tempreture(°c) = (%f - 32) x 5/9 = %f",temp,(temp-32)*5/9);
	
}
