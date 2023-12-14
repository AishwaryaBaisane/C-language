//6. WAP check string is numeric or not.
#include<stdio.h>
#include<string.h>

int main()
{

    char a[1000]; 
    int i,digit=0;
 
    printf("Enter  the string : ");
    gets(a);
    
    for(i=0; i<strlen(a); i++)
    {
    
        if(a[i]>=48 && a[i]<=57)
        {
        	digit++;
		}
		
	}
	   if(digit!=0)
         {
    	   printf("string is numeric");
	     }
	     else
	     {
	     	printf("string is  not numeric");
		 }
}