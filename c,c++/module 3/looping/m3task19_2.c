#include<stdio.h>
main()
{
	int i,j;
	char abc='A';
	for(i=1;i<6;i++)
	{
		for(j=1;j<=i;j++)
		{
				printf("%c ",abc);
				abc++;		
		}
		printf("\n");
	}
}
