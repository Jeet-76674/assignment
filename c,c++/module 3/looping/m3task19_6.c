#include<stdio.h>
main()
{
	int i,j;
	char abc;
	for(i=1;i<6;i++)
	{
		abc='A';
		for(j=1;j<=i;j++)
		{		
				printf("%c ",abc);
				abc++;		
		}
		printf("\n");
	}
}
