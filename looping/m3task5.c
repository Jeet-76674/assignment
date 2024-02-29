#include<stdio.h>
main()
{
	int i,a,fact=1;
	printf("enter the number = ");
	scanf("%d",&a);
	
	for(i=a;i>=1;i--)
	{
		fact=fact*i;
	}
	printf("Factorial of %d = %d",a,fact);
}
