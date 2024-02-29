/*8. WAP to accept the height of a person in centimeters and categorize the
person according to their height.*/
#include<stdio.h>
void main()
{
	float h;
	printf("enter your hight in centimeter = ");
	scanf("%f",&h);
	
	if(h<150)
	{
		printf("As per your hight you are short person");  //height is less than 150 cm, we categorize them as short
	}
	else if(h>=150 && h<166)
	{
	    printf("As per your hight you are average person");	//If the height is between 150 and 165 cm, it is called average height
	}
	else
	{
		printf("As per your hight you are taller person"); //If the height is between 165 and 195, it falls into the category of taller people
	}
}
