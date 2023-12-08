//Q.4 Write a Program to print and find the sum of all boundary elements from a given 5x5 2D array.
#include<stdio.h>
main()
{
	int i,j,n,m;
	printf("enter n :");
	scanf("%d",&n);
	printf("enter m :");
	scanf("%d",&m);
	int a[n][m];
	
	for(i=0; i<n; i++)
	{
		for(j=0; j<m; j++)
		{
			printf("enter a[%d][%d]",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	
	for(i=0; i<n; i++)
	{
		for(j=0; j<m; j++)
		{
		  if(a[i][j]==1||a[i][j]==5)
		  {
		  	printf("%d",a[i][j]);
		  }
		  else
		  {
		  	
		  }
		}
	}
	
	
	
	
	
	
	
}