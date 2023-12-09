//insert
#include<stdio.h>
main()
{
	int i,n,x;
	printf("enter array size :");
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
	//incres in n
	n+=2;
	//shift all number forword
	for(i=n-1; i>=y; i--)
	{
		a[i]=a[i-1];
	}
	//put number in position
	a[y-1]=x;
	//print array
	for(i=0; i<n; i++)
	{
		printf("%d ",a[i]);
		
	}
	
}