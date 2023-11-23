//4. WAP to find the sum of n numbers using the goto statement.
#include<stdio.h>
main()
{
	int n;
	printf("enter n:");
	scanf("%d",&n);
	
    int sum=0;
	n:	
	sum=sum+n;
	n--;
	
	if(n>=1)
	{
		goto n;
	}
	printf("%d",sum);
}