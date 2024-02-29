#include<stdio.h>
main()
{   char a[5],temp;
	int i,len,end;
	
	printf("enter the string a = ");
	gets(a);
	
	len=strlen(a);
	end=len-1;
	for(i=0;i<=end;i++)
	{
	  temp=a[i];
	  a[i]=a[end];
	  a[end]=temp;
	  end--;
	}
	printf("reverse of string a = %s",a);
}
