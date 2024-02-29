#include<stdio.h>
#include<math.h>

main()
{
 int origin,n,c,rem,total=0,i,digit=0;
 
 printf("enter the number : ");
 scanf("%d",&n);
 
 origin=n;
 c=n;
 while(n!=0)
{
	n=n/10;
	digit++;
 } 
 for(i=1;origin!=0;i++)
 {
 	rem=origin%10;
 	origin=origin/10;
	 total=total + pow(rem,digit);
	 
 }
 if(total==c)
 {
 	printf("it's amsrong number.");
 }
 else
 {
 	printf("it's not amsrong number.");
 }
}
 
