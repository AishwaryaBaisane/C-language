//even
#include<stdio.h>
main()
{
	int n;
	printf("enter number :");
	scanf("%d",&n);
	int i = 1;
	
	while(i<=n)
	{
		if(n%2==0)
		{
		printf("%d,",n);
		
	    }
	    n--;
	}
}