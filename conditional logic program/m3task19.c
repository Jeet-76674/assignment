#include<stdio.h>
void main()
{
	int a,id;
	char name;
	printf("Firsr enter your name = ");
	scanf("%s",&name);
	printf("Enter your customer id = ");
	scanf("%d",&id);	
	printf("Enter unit consumed by you = ");
	scanf("%d",&a);
	
	if(a<350)
	{
		printf("your bill ammount = %f",(float)a*1.20);	
	}
	else if(a>=350 && a<600)
	{
		printf("your bill ammount = %f",(float)a*1.50);	
	}
	else if(a>=600 && a<800)
	{
		printf("your bill ammount = %f",(float)a*1.80);	
	}
	else if(a>=800)
	{
		printf("your bill ammount = %f",(float)a*2);	
	}
}

