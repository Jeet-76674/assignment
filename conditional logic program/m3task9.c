/*9. C Program to Check Uppercase or Lowercase or Digit or Special
Character*/
#include<stdio.h>
void main()
{
	char ch;
	printf("enter anythig = ");
	scanf("%c",&ch);
	
	if(ch>='A' && ch<='Z')
	{
		printf("It is Uppercase character");
	}
	else if(ch>='a' && ch<='z')
	{
		printf("It is Lowercase character");
	}
	else if(ch>='0' && ch<='9')
	{
		printf("It is digit");
	}
	else
	{
		printf("It is Special character");
	}
}
	
