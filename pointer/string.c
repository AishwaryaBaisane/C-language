#include<stdio.h>
main()
{	
	char a[100];
	printf("enter string:");
	scanf("%s",&a);
	int l=strlen(a);
    char  *ptr = &a[l-1];
		
	int i;	
	for(i=l; i>=0; i--)
	{
	printf("%c",*ptr);
	ptr--;

   }
	 
	
	
}