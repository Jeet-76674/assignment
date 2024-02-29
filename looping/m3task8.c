#include<stdio.h>

main()
{
	int n,rem,i,b=0,c;
	
	printf("enter the number : ");
	scanf("%d",&n);
	for(i=1;n!=0;i++)
	{
		rem=n%10;
		n=n/10;
		for(i=1;rem>b;i++)
		{
			b=rem;
		}
	}
	printf(" highest number = %d",b);
}
	

