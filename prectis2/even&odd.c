//even & odd
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
	for(i=0; i<=n; i++)
	{
		if(a[i]%2==0)
		{
			printf("even :%d\n",a[i]);
		}
		else
		{
			printf("odd :%d\n",a[i]);
		}
	
	}
	
}