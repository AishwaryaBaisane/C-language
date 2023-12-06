//Q.4 Wap to find maximum from the 1d array.
#include<stdio.h>
main()
{
	int n;
	printf("enter n:");
	scanf("%d",&n);
	int a[n];
	int i;
	for(i=0; i<=n; i++)
	{
		
		printf("enter a[%d]",i);
		scanf("%d",&a[i]);
	}
	int min=0;
	for(i=0; i<=n; i++)
	{
	if(a[i<min])
	{
	   	min=a[i];
	}
   }
	printf("%d",min);
}