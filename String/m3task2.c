#include<stdio.h>
main()
{   char a[5];
	int i=0;
	printf("enter the string a = ");
	gets(a);
	
	while(a[i]!= '\0')
		{
	
			printf("\n%c",a[i]);
			i++;
		}
		
	//	}
		/*else* if(i=1)
		{
			printf("\n%dnd character of string is = %c",i+1,a[i]);
			i++;
		
		}
		else if(i=2)
		{
			printf("\n%drd character of string is = %c",i+1,a[i]);
			i++;
		}
		else if(i>2)
		{
			printf("\n%dth character of string is = %c",i+1,a[i]);
			i++;
		}
	}*/
}
