#include<stdio.h>
main()
{
	int n,i,fact=1,j;
	
	for(j=1;j<6;j++)
	{
		printf("\nenter the number : ");
	scanf("%d",&n);
	
	i=n;
	while(i>=1)
	{
		fact=fact*i;
		i--;
	}
	printf("\nfactorial of given number = %d",fact);
	}
}
