/*.Write a C program to read temperature in centigrade and display a suitable
message according to the temperature state below:
Temp < 0 then Freezing weather
Temp 0-10 then Very Cold weather
Temp 10-20 then Cold weather
Temp 20-30 then Normal in Temp
Temp 30-40 then Its Hot
Temp >=40 then Its Very Hot*/
#include<stdio.h>
void main()
{
	float a;
	printf("enter the temperature in centigrade = ");
	scanf("%f",&a);
	
	if(a<0)
	{
		printf("it is Freezing weather");
	}
	else if(a>=0 && a<=10)
	{
		printf("it is Very Cold weather");
	}
	else if(a>10 && a<=20)
	{
		printf("it is Cold weather");
	}
	else if(a>20 && a<=30)
	{
		printf("it is Normal in Temprature weather");
	}
	else if(a>30 && a<40)
	{
		printf("it is Hot weather");
	}
	else
	{
		printf("it is Very Hot weather");
	}
}
