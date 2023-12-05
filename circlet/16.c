//1
//21
//321
//4321
//54321
//4321
//321
//21
//1
#include<stdio.h>
main()
{
	int i,j,k;

	for(i=1; i<=5; i++)
	{
	
		for(j=i; j>=1; j--)
		{
			printf("%d",j);
		
		}
		printf("\n");
	}
	for(i=4; i>=1; i--)
	{
		for(j=i; j>=1; j--)
		{
			printf("%d",j);
		}
		printf("\n");
	}
}