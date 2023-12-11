//Write a C program to find the largest number in array.[2D]
#include<stdio.h>
main()
{
	int n,m;
	printf("enter n :");
	scanf("%d",&n);
	int i,j;
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
	int max=0;
	for(i=0; i<n; i++)
	{
		for(j=0; j<m; j++)
		{
			if(a[i][j]>max)
			{
				max=a[i][j];
			}
		}
	}
	printf("%d",max);
}
