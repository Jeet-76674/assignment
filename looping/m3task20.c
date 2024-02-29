#include<stdio.h>
main()
{
	int i,rn=0;
	for(i=01;i<51;i++)
	{
	  printf("%2.0d ",i);
	  rn++;
	  if(rn==10 || rn==20|| rn==30|| rn==40)
	  {
	  	printf("\n");
	  }
	}
}
