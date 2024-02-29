//210.WAP to perform Palindrome number using for loop and function
#include<stdio.h>
func()
{
	long int n,i,rem,a=0,b;
	
	printf("enter the number = ");
	scanf("%d",&n);
	b=n;
	for(i=1;n!=0;i++)
	{
		rem=n%10;
		a=a*10+rem;
		n=n/10;
	}
	if(a==b)
	{
		printf("%d is palindrome.\n",b);
	}
	else
	{
		printf("%d is not palindrome.\n",b);
	}

}
main()
{
	func();
}


