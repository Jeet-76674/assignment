#include<stdio.h>

main()
{
	int n,i,fact=1;
	
	printf("enter the number : ");
	scanf("%d",&n);
	
	i=n;
	while(i>=1)
	{
		fact=fact*i;
		i--;
	}
	printf("factorial of given number = %d",fact);
}
