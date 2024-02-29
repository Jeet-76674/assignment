#include<stdio.h>
main()
{
	int  bill;
	printf(" enter the bill amount = ");
	scanf("%d",&bill);
	if (bill<256)
	{
		printf("bill is invalid");
	}
	else if(bill>800)
	{
		
		printf("bill = %d ",(118*bill)/100);
	}
	else
	{
		printf("bill = %d ",bill);
	}
}
