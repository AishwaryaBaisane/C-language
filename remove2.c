#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
	char a[100];
	printf("Enter string : ");
	gets(a);
	
	int l=strlen(a);
	int check=1,i,j;
	for(i=0; i<l; i++)
	{
	   for(j=i+1; j<l; j++)
	   {
	   	  if(a[i]==a[j])
	   	  {
	   	  
	   	  	a[j]=0;
		   }
	   }
	   
	   if(a[i]!=0)
	   {
		printf("%c",a[i]);
	   }
	   check=1;
	}

}
