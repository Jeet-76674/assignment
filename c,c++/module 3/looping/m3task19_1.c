#include<stdio.h>
main()
{
	int i,j;
	for(i=1;i<6;i++)
	{
		for(j=1;j<=i;j++)
		{
			if(j%2==1) 
			{
				printf("1");		
			}
			else if(j%2==0) 
			{
				printf("0");		
			}
		}
		printf("\n");
	}
}
