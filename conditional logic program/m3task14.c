//14.WAP to find the largest of three numbers.
#include<stdio.h>
void main()
{
	int a,b,c;
	printf("enter firsr the number = ");
	scanf("%d",&a);
	printf("enter second the number = ");
	scanf("%d",&b);
	printf("enter third the number = ");
	scanf("%d",&c);
	if(a>=b && a>=c )
	{
		printf("%d is the largest number",a);
	}
	else if(b>=a && b>=c)
	{
		printf("%d is the largest number",b);
	}
	else
	{
		printf("%d is the largest number",c);
	}
	
	
}
