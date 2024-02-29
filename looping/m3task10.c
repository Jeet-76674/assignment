#include<stdio.h>
main()
{
	int n,fd,ld,sum;
	printf("enter the number : ");
	scanf("%d",&n);
	
	ld=n%10;
	while(n>=10)
	{
		n=n/10;
	}
	
	fd=n;
	sum=fd+ld;
	
	printf("summation of given number = -%d",sum);
	
	


}
