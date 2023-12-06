#include<stdio.h>
main()
{
	int i,n;
	printf("enter value of n :");
	scanf("%d",&n);
	int a[n];
	for(i=0; i<=n; i++)
	{
      printf("enter a[%d]",i);
      scanf("%d",&a[i]);
	}
	for(i=0; i<=n; i++)
	{
	   if(a[i]%2==0)
	  {
		printf("even no :%d\n",a[i]);
      }

   }
}