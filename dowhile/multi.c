#include<stdio.h>
main()
{
	int n;
	printf("enter n :");
	scanf("%d",&n);
	
	int i=1;
	
	do
	{
	  	printf("%d * %d = %d\n",n,i,n*i);
	  	i++;
	  	
	}while(i<=10);
	
	

}