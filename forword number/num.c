#include<stdio.h>
main()
{
	int n;
	printf("enter n:");
	scanf("%d",&n);
	int i,a[n],x;
	for(i=0; i<n; i++)
	{
		printf("enter number a :");
		scanf("%d",&a[i]);
//		x=a;
	}
//	a=n-10;
	for(i=n-10; a[i]!=0; i--)
	{
		printf(" %d  %d ",i,a[i]);
		a[i]--;
	

	}
}