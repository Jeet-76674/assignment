#include<stdio.h>
/*print a multiplication table*/
main()
{
	int a,i=1;
	printf("enter the number for which you want multiplication table = ");
	scanf("%d",&a);
	printf("\nthe table of %d is shown below",a);
	while(i<=10)
	{
		printf("\n%d x %d = %d",a,i,a*i);
		i++;
	}
}
	
