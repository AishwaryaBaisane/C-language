#include<stdio.h>
main()
{
	int i,j;
	int n;
	printf("enter n :");
	scanf("%d",&n);
	int a=0;
	for(i=1; i<=n; i++)
	{
		for(j=2; j<=i-1; j++)
		{
			if(i%j==0)
			{
				a=1;
			}
		}
	   if(a==0)
		{
	      printf("%d ",i);
		}
		a=0;
	}
	
}
