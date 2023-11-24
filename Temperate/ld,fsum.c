//sum of first & last
#include<stdio.h>
main()
{
	int n;
	printf("enter n ");
	scanf("%d",&n);
	
	int ld=n%10;

	while(n>9)
	{
		n=n/10;
	}
	printf("%d",n+ld);
	
}