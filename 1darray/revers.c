#include<stdio.h>
main()
{
	int i,j,n;
	printf("enter value of n :");
	scanf("%d",&n);
	int a[n];
	for(i=0; i<=n; i++)
	{
      printf("enter a[%d]",i);
      scanf("%d",&a[i]);
	}
	for(i=n;i>=0;i--)
	{
		printf("%d ",a[i]);
	}
	 
}