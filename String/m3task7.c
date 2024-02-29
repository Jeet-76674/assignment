#include<stdio.h>
#include<string.h>
main()
{   char a[10],b[10];
	int i,j;
	printf("enter the string a = ");
	gets(a);
	printf("enter the string b = ");
	gets(b);
	
	printf("after copying 2nd string from 1st string = %s",strcat(a,b));
}
