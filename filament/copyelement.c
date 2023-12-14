#include<stdio.h>
#include<string.h>

int main()
{

    char a[1000]; 
    printf("Enter  the string : ");
    gets(a);
    
    int i;
    
    char b[1000];
    for(i=0; i<sizeof(a); i++)
    {
    	b[i]=a[i];
	}
	printf("first string %s\n",a);
	printf("second string is: %s",b);
}