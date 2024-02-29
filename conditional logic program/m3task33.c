#include<stdio.h>
main()
{
	int a;
	printf("Enter the number = ");
	scanf("%d",&a);
	switch(a)
	{
	case 1:
		printf("monday");
		break;
	case 2:
		printf("tuesday");
		break;
	case 3:
		printf("wednasday");
		break;
	case 4:
		printf("thusday");
		break;
	case 5:
		printf("friday");
		break;
	case 6:
		printf("saturday");
		break;
	case 7:
		printf("sunday");
		break;
	default:
		printf("enter mumber only from 1 to 7");
		break;
}
}
