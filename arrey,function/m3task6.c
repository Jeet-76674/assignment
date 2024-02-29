#include<stdio.h>
main()
{
	int a[3][3],b[3][3],add[3][3],sub[3][3],mult[3][3],i,j,k;
	
	
	printf("enter first metrix :\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
		printf("\n");
	}
	printf("enter second metrix :\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&b[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			add[i][j]=a[i][j]+b[i][j];
		}
		printf("\n");
	}
	printf("addition of two metrix : \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d ",add[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			sub[i][j]=a[i][j]-b[i][j];
		}
		printf("\n");
	}
	printf("Substraction of two metrix : \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d ",sub[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<3;i++)
	{
		
		for(j=0;j<3;j++)
		{
			mult[3][3]=0;
			for(k=0;k<3;k++)
			{
				mult[i][j]=mult[i][j]+a[i][k]*b[k][j];
			}
		}
		printf("\n");
	}
	printf("Multiplication of two metrix : \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d ",mult[i][j]);
		}
		printf("\n");
	}
}
