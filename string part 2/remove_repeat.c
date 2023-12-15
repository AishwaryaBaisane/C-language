#include<stdio.h>
#include<string.h>

int main()
{
	char a[100];
	printf("Enter Any Character frequency : ");
	gets(a);
	
	int l=strlen(a);
	int check=0,i,j;
	for(i=0; i!='\0'; i++)
	{
		if(a[i]==a[i+1])
		{
			for(j=0; j!='\0'; j++)
			{
		    	a[j]=a[j+1];
			}
			i--;
	    }  
	  
	}
	puts(a);
}
