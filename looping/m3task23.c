#include<stdio.h>
main()
{
	int n,i,a=0,rem;
	printf("enter the number = ");
	scanf("%d",&n);
	
	for(i=1;n!=0;i++)
	{
		rem=n%10;
		a=a*10+rem;
		n=n/10;
	}
	printf("reverse number = %d",a);
}
