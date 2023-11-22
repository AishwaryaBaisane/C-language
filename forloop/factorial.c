#include<stdio.h>
main()
{
	int x;
	int n;
	printf("enter n :");
	scanf("%d",&n);
	
	int sum=1;
	
    for(x=1; x<=n; x++)
    {
    	sum=sum*x;
    
	}
	printf("%d",sum);
}