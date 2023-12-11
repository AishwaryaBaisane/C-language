 //Write a program to get two array and create addition of array position wise.
  // ex: A= 1,2,3 B=5,6,7 answer = 6,8,10
#include<stdio.h>
main()
{
	int n,m;
	printf("enter n :");
	scanf("%d",&n);
	int i,j;
	int a[n];
	int b[n];
	int sum[n];

	for(i=0; i<n; i++)
	{
		printf("enter a[%d]",i);
		scanf("%d",&a[i]);
		printf("enter b[%d]",i);
		scanf("%d",&b[i]);
	}

	for(i=0; i<n; i++)
	{
		sum[i]=a[i]+b[i];
		printf("sum :%d\n",sum[i]);
	}
	
}