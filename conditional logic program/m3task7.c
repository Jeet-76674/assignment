//7. Accept marks from user and check pass or fail
#include<stdio.h>
void main()
{
	float a,t,x,y;
	printf("enter the total marks = ");
	scanf("%f",&t);
	printf("enter the your marks = ");
	scanf("%f",&a);
	
	x= (a*100)/t;    //to convert yor marks into %
	y= 33;   // 33% of total marks which is passing %
	
	if(x>=y)
	{
		printf("congratulation you are pass");
	}
	else
	{
		printf("Oops! you  faild");
	}
}
