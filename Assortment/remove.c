//1. WAP to get the array and count & remove all duplicate values in the 1darray.
#include<stdio.h>
main()
{
	int n;
	printf("enter n :");
	scanf("%d",&n);
	int i,j;
	int a[n];
	for(i=0; i<n; i++)
	{
		printf("enter a[%d]",i);
		scanf("%d",&a[i]);
	}
	int count=0;
	for(i=0; i<n; i++)
	{
	   for(j=i+1; j<n; j++)
	   {
		if(a[i]==a[j])
		{
		  a[i]=0;
		  count++;
			
		}
	
     }
		
	}
	for(i=0; i<n; i++)
	{
		if(a[i]!=0)
		{
			printf("%d ",a[i]);
		}
	}
	printf("\ncount %d",count);
}
