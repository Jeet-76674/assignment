#include<stdio.h>
main()
{
	int a[5],i,j,temp;
	
	for(i=0;i<5;i++)
	{
	
	printf("enter the value = ");
	scanf("%d",&a[i]);
	
	}
	for(i=0;i<5;i++)
	{
		if(a[i]%2==0)
		{
			printf("%d is even number.\n",a[i]);
		}
		else
		{
			printf("%d is odd number.\n",a[i]);
		}
	}
	
}
