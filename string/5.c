//4. WAP to given string in reverse.
#include<stdio.h>
#include<string.h>
main()
{
	
	int i,j,tmp;
    
	char a[200];
	printf("enter name :");	
    gets(a);
	int l= strlen(a);
	
	for(i=0; i<l; i++)
	{
		for(j=i+1; j<l; j++)
		{
		
		tmp=a[i];
		a[i]=a[j];
		a[j]=tmp;
	  }
	}
	for(i=0; i<l; i++)
	{
	   	printf("%c",a[i]);	
	}

}
