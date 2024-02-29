/*15.Write a C program to determine eligibility for admission to a professional
course based on the following criteria
Eligibility Criteria : Marks in Maths >=65 and Marks in Phy >=55 and Marks
in Chem>=50 and Total in all three subject >=190 or Total in Maths and
Physics >=140 -*/
#include<stdio.h>
void main()
{
	int m,p,c,t,tpm;
	printf("Enter your mathematics marks = ");
	scanf("%d",&m);
	printf("Enter your physics marks = ");
	scanf("%d",&p);
	printf("Enter your chemistry marks = ");
	scanf("%d",&c);
	
	t=m+p+c; //total of 3 subject
	tpm=p+m;  //total of maths and physics
	
	if(m<65 || c<50 || p<55 || t<190 || tpm<140)
	{
		printf("you are not eligible");
	}
	else
	{
		printf("you are eligible");
	}
}
