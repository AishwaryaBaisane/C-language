//2. Write C program to print multiplication table of any number.

#include<stdio.h>
main()
{
	int n;
	printf("enter n :");
	scanf("%d",&n);
	
	int i;
	
	for(i=1; i<=10; i++)
	{
		printf("%d x %d = %d\n",n,i,n*i);
		
	}
	
}