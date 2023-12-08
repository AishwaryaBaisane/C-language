//Q.3 Write a Program to find the sum of diagonal elements from a given 2D array.
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
	int sum=0;
	for(i=0; i<n; i++)
	{
		for(j=0; j<m; j++)
		{
			if(i==j)
			{
				sum = sum + a[i][j];
			}
		}
	}
	printf("%d",sum);
	
}