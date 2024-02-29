#include<stdio.h>
void main()
{
	int a;
		
	printf("Enter unit consumed by you = ");
	scanf("%d",&a);
	
	if(a<=50)
	{
		printf("your bill ammount = %.2f",(float)a*0.50);	
	}
	else if(a>50 && a<=150)
	{
		printf("your bill ammount = %.2f",(float)a*0.75);	
	}
	else if(a>150 && a<=250)
	{
		printf("your bill ammount = %.2f",(float)a*1.20);	
	}
	else if(a>250)
	{
		printf("your bill ammount = %.2f",(float)a*1.50+(120*a*1.50)/100);	
	}
}

