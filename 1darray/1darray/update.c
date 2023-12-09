//update
#include<stdio.h>
main()
{
	int i,n,x;
	printf("enter n:");
	scanf("%d",&n);
	int a[n];

	for(i=0; i<=n; i++)
	{
		printf("enter a[%d]",i);
		scanf("%d",&a[i]);
		
	}
	printf("enter number:");
	scanf("%d",&x);
	int y;
	printf("enter  position :");
	scanf("%d",&y);
	a[y]=x;
	for(i=0; i<=n; i++)
	{
	  printf("%d ",a[i]);	
	}
	
}