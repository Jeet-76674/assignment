#include<stdio.h>
void main()
{
	int i=1,sum=0,n;
	printf("enter the 10 numbers for which you want sum.\n");
	while(i<11)
	{
		printf("enter the number = ");
		scanf("%d",&n);
		i++;	
		sum=sum+n;
	
	}
	printf("sum of all 10 number = %d",sum);
	
}
