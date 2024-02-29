#include<stdio.h>
#include<math.h>
main()
{
	float N;
	printf("enter the Number = ");
	scanf("%f",&N);
	
	printf("\nThe first power N¹ = %f",pow((N),1));
	printf("\nThe second power N² = %f",pow((N),2));
	printf("\nThe third power N³ = %f",pow((N),3));
}
