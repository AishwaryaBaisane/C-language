//max&& min
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
	int max=a[0];
	int min=a[0];
	for(i=0; i<=n; i++)
	{
	if(a[i]>max)
	{
		max=a[i];
	}
	if(a[i<min])
	{
		min=a[i];
	}
   }
	printf("max :%d",max);
	printf("min :%d",min);
}