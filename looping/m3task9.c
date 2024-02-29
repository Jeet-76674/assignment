#include<stdio.h>
main()
{
	int n,rem,sum=0,i;
	printf("enter the number : ");
	scanf("%d",&n);
	
	for(i=1;n!=0;i++)
	{
		rem=n%10;
		sum=sum+rem;
		n=n/10;
	}
	printf("summation of given number = -%d",sum);
}	
