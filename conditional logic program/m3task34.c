#include<stdio.h>
main()
{
	int a;
	printf("Enter the number of month = ");
	scanf("%d",&a);
	switch(a)
	{
	case 1:
		printf("january");
		break;
	case 2:
		printf("February");
		break;
	case 3:
		printf("March");
		break;
	case 4:
		printf("April");
		break;
	case 5:
		printf("May");
		break;
	case 6:
		printf("June");
		break;
	case 7:
		printf("July");
		break;
	case 8:
		printf("Augast");
		break;
	case 9:
		printf("Septamber");
		break;
	case 10:
		printf("October");
		break;
	case 11:
		printf("November");
		break;
	case 12:
		printf("December");
		break;
					
	default:
		printf("enter mumber only from 1 to 12");
		break;
}
}
