#include<stdio.h>
main()
{   char a[10],b[10];
	int i,j;
	printf("enter the string a = ");
	gets(a);
	printf("enter the string b = ");
	gets(b);
	
	for(i=0;a[i]!='\0';i++)
	{
		
	}
//	printf("length of string is = %d",i);
	for(j=0;b[j]!='\0';j++)
	{
		
	}
//	printf("length of string is = %d",j);
    if(i==j)
    {
    	printf("After comparing both string result = 0");
	}
	else if(i>j)
    {
    	printf("After comparing both string result = 1");
	}
	else if(i<j)
    {
    	printf("After comparing both string result = -01");
	}	
}
