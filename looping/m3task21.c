#include<stdio.h>
main()
{
	long int n,i=1,rem,a=0,b;
	while(i<4){
	
	printf("enter the number = ");
	scanf("%d",&n);
	b=n;
	while(n!=0)
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
	i++;
}
}
