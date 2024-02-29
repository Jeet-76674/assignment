#include<stdio.h>
main()
{
   int n,b=1,i,c,a=0;
   
   printf("enter the number : ");
   scanf("%d",&n);
   
   for(i=1;a<=n;i++)
   {
   	 printf("\n%d",a);
   	 
   	 c=a+b;
   	 a=b;//value of b is transfered to a
   	 b=c;//value of c is transfered to b
   }
}
