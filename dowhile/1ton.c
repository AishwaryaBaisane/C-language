#include<stdio.h>
main()
{
	int x=1;
	int n;
	printf("enter n :");
	scanf("%d",&n);
	
	do
	{
		printf("%d ",x);
		x++;
		
	}while(x<=n);
	
}