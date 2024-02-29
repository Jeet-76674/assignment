#include<stdio.h>
main()
{
	int a[5],i,j=0;
	
	for(i=0;i<5;i++)
	{
	
	printf("enter the value = ");
	scanf("%d",&a[i]);
	
	}
	for(i=0;i<5;i++)
	{
		j=j+a[i];
	}
	printf("sum of array = %d",j);
}
