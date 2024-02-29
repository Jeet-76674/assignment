#include<stdio.h>
main()
{
	int n,i,a,j,n1,rem;
	for(j=1;j<6;j++)
	{
	
	printf("enter the number = ");
	scanf("%d",&n1);
	
	n=n1;
	for(i=1;n!=0;i++)
	{   
		rem=n%10;
		a=a*10+rem;
		n=n/10;
	}
	printf("reverse number = %d\n",a);
	a=0;
}
}

