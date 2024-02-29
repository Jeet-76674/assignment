#include<stdio.h>
main()
{
	int i,a[10],sumod=0,sumev=0,ev=0,od=0;
	for(i=0;i<10;i++)
	{
		printf("enter the number = ");
		scanf("%d",&a[i]);
		
	}
	for(i=0;i<10;i++)
	{
	if(a[i]%2==0)
		{
			ev++;
			sumev=sumev+a[i];
			i++;
		}	
		
		else if(a[i]%2==1)
		{
			od++;
			sumod=sumod+a[i];
			i++;
		}
	}
	printf("there are %d even numbers\n",ev);
	printf("there are %d odd numbers\n",od);
	printf("sum of even numbers = %d\n",sumev);
	printf("sum of odd numbers = %d\n",sumod);
}
