#include<stdio.h>

main()
{
	int i,j;
	int x = 1;
	
	for(i=1; i<=5; i++)
	{
		for(j=i; j<=5; j++)
		{
			if(x==9)
			{
				printf("1");
			}
			else if(x==1)
			{
				printf("9");
			}
			else
			{
				printf("%d",x);
			}
			x+=2;
		}
		x=1;
		printf("\n");
	}
	
	
	
}