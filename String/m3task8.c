#include <stdio.h>

main()
{
    char a[100];
    int alphabets,vovels,i;
    alphabets = vovels = i = 0;

    printf("Enter any string: ");
    gets(a);
    
    while(a[i] !='\0')
    {
    	if(a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u' || a[i]=='A' || a[i]=='E' || a[i]=='I' || a[i]=='O' || a[i]=='U')
    	{
    		vovels++;
		}
	/*	else if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
		 {
            alphabets++;
         }*/
         i++;
	}
	printf("Vovels = %d\n", vovels);
}
