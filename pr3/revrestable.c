// 1. wap to print reversed multplication table of given number. 

#include<stdio.h>
main()
{
	int n;
	printf("enter n:");
	scanf("%d",&n);
	
	int i=10;
	for(i; i>=1; i--)
	{
		printf("%d x %d = %d\n",n,i,n*i);
	}
}