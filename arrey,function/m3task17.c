#include<stdio.h>
struct j{
	int a,b;
};
union i{
	int c,d;
};
main()
{
struct j s1;
printf("enter the number = ");
scanf("%d",&s1.a);
printf("enter the number = ");
scanf("%d",&s1.b);

printf("\nsum with stucture = %d\n",s1.a+s1.b);
	
union i s3,s2;
printf("enter the number = ");
scanf("%d",&s3.c);
printf("enter the number = ");
scanf("%d",&s2.d);

printf("\nsum with union = %d",s3.c+s2.d);
	
}

