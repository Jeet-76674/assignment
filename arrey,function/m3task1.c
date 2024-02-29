#include<stdio.h>
high()
{
		int a[5],i,j,temp;
	
	for(i=0;i<5;i++)
	{
	
	printf("enter the value = ");
	scanf("%d",&a[i]);
	
	}
	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if (a[i]<a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	
	printf("highest number = %d\n",a[0]);


}
main()
{
	high();
}

