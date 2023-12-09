//1. Write a C program to print all negative elements in an array.
#include<stdio.h>
main()
{
	int i,j,n;
	printf("enter first value :");
	scanf("%d",&n);
	int a[n];
    for(i=0; i<n; i++)
	{
	      printf("enter a[%d]",i);
          scanf("%d",&a[i]);   
	}
	printf("negativ numbers :");
	for(i=0; i<n; i++)
	{
		if(a[i]<0)
		{
			printf("%d,",a[i]);
		}
		else
		{
			printf(" ");
		}
		
	}
}