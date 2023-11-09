#include<stdio.h>
main()
{
	int n;
    printf("enter number :");
    scanf("%d",&n);
	int i = 1;
	
	int sum=1;
	
	while(i<=n)
	{
		sum=sum*i;
		i++;
	}
	printf(" ans :%d",sum);
	
}