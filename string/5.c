//4. WAP to given string in reverse.
#include<stdio.h>
main()
{
	int n;
	int i,j;
    printf("enter n :");
    scanf("%d",&n);
	char a[n];
	printf("enter name :");	
	scanf("%s",&a);
	for(i=0; i<n; i++)
	{
		for(j=i+1; j<n; j++)
		{
		
		a[n]=a[i];
		a[i]=a[j];
		a[j]=a[n];
	  }
	}
	for(i=0; i<n; i++)
	{
	   	printf("%c",a[i]);	
	}

}