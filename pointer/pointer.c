#include<stdio.h>
main()
{
	int n,i; 
	printf("enter n :");
	scanf("%d",&n);
	
	int a[n];

	for(i=0; i<n; i++)
	{
		printf("enter a[%d]:",i);
		scanf("%d",&a[i]);
	   
	}
    int  *ptr = &a[n-1];
		
	for(i=n-1; i>=0; i--)
	{
	printf("%d\n",*ptr);
	ptr--;

   }
	 
	
	
}