#include<stdio.h>
main()
{
	int x=1;
	int n;
	printf("enter n :");
	scanf("%d",&n);
	
	do
	{
		printf("%d ",n);
		n--;
		
	}while(n>=x);
	
}