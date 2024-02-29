#include<stdio.h>
void main()
{
	char ch;
	printf("enter the character = ");
	scanf("%c",&ch);
	
	if(ch=='a' ||ch=='e' ||ch=='i' ||ch=='o' ||ch=='u')
	{
		printf("Enterd character is vowel");
	}
	else
	{
		printf("Enterd character is not vowel");
	}
}
