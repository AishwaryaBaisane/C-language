//1 to n
#include<stdio.h>
main()
{
	int x,n;
	printf("enter n :");
	scanf("%d",&n);
	
	for(x=1; x<=n; x++)
	{
		if(x%2==1)
		{
			printf("%d ",x);
		}
		x++;
	}
}