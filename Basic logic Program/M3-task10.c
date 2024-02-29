#include<stdio.h>
main()
{
	float w,l,h;
	printf("enter the width of Rectangular prism = ");
	scanf("%f",&w);
	
	printf("enter the length of Rectangular prism = ");
	scanf("%f",&l);
	
	printf("enter the hight of Rectangular prism = ");
	scanf("%f",&h);
	
	printf("Area of Rectangle = %f ",(float)2*(w*l+h*l+w*h));
	
	
}
