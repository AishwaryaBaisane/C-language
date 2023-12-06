//6. Write a program in C to print all unique elements in an array.
//Print all unique elements of an array:
#include<stdio.h>
main()
{
	int i,j,n;
	printf("enter value of n :");
	scanf("%d",&n);
	int a[n];
	int count=0;
	for(i=0; i<=n; i++)
	{
	
      printf("enter a[%d]",i);
      scanf("%d",&a[i]);
        
	}
	for(i=0; i<=n; i++)
	{
	  if(a[i]!=a[j])
	  {
         count++;
     }
	            
	}
	if(count==0)
	{
		printf("%d",a[i]);
	}
}