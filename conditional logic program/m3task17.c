/*17.Write a C program to check whether a triangle can be formed with the given
values for the angles.*/
#include<stdio.h>
void main()
{
	int a,b,c;
	printf("enter firsr the angle = ");
	scanf("%d",&a);
	printf("enter second the angle = ");
	scanf("%d",&b);
	printf("enter third the angle = ");
	scanf("%d",&c);
	
	if(a+b+c==180)
	{
		printf("Triangle can be formed.");
	}
	else
	{
		printf("Triangle can not be formed.");
	}
}
	
