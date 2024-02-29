#include<stdio.h>
void main()
{
	int i=1,sum=0,ev=0,od=0,n;
	printf("enter the 5 numbers.\n");
	while(i<6)
	{
		printf("enter the number = ");
		scanf("%d",&n);
		if(n%2==0)
		{
			ev++;
		}
		else
		{
		od++;
		}
		i++;
	
	}
	printf("odd number = %d\n",od);
	printf("even number = %d\n",ev);
	
}
