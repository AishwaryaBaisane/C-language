#include<stdio.h>
#include<string.h>

int main()
{
	char a[100];
	printf("Enter string : ");
	gets(a);
	
	int i,x=0;
	int l=strlen(a);
	int j;
	for(i=0; i<l; i++)
	{
		for(j=i+1; j<l; j++)
		{	
		 if(a[i]==a[j])
		 {
			x++;
			a[j]=0;
		 }
		 
        }
        if(a[i]!=0)
     	{
		printf("%c",a[i]);
	    }
	    x=1;
	}
	
}