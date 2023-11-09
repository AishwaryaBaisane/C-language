//odd
#include<stdio.h>
main()
{
	int n;
    printf("enter number :");
    scanf("%d",&n);
	int i = 1;
	
	while(i<=n)
	{
		if(i%2==1)
		{
		printf("%d,",i);
	    }
		i++;
	}
}