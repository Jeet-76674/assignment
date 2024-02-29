#include<stdio.h>
main()
{   char a[5];
	int i,asc;
	printf("enter the string a = ");
	gets(a);
	
	for(i=0;a[i]!='\0';i++)
	{
		asc = a[i];
		if(asc = 32)
		{
			continue;
		}
	}
	printf("Total word is = %d",i);
}
