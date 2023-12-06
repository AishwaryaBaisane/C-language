//Q.1 Write a Program to perform the merge operation of two 1D arrays & store it in another array. Keep in mind that both array sizes can be different.
//For example,
//Input:
//Enter array A's size: 5

#include<stdio.h>
main()
{
	int n;
    int a[n];
	int b[n];
	int i,y;
    int c[n+n];
    int x=n;
  
    printf("enter n :");
    scanf("%d",&n);
    
	for(i=0; i<=n; i++)
	{
	  printf("enter a[%d]",i);
	  scanf("%d",&a[i]);	
	}
	printf("enter y :");
    scanf("%d",&y);
    
	for(i=0; i<=y; i++)
	{
	  printf("enter b[%d]",i);
	  scanf("%d",&b[i]);	
	}
	for(i=0; i<=n; i++)
	{
		c[i]=a[i];
	
	}
	for(i=0; i<=y; i++)
	{
		c[x]=b[i];
		x++;
	
	}
	for(i=0; i=n+y; i++)
	{
		printf("%d",c[i]);
	}

	
	
	
}