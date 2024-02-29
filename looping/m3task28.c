#include<stdio.h>
main()
{
	int i,j=0,k,sum=0,n=10;
	
	for(i=1;i<=n;i++)
	{
		if(i%2==0)
		{
			j=2*j;
		}
		else
		{
			j=j+i;
		}
	 printf(" %d ",j);
	}

}
