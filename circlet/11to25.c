//11
//1213
//141516
//17181920
//2122232425
#include<stdio.h>
main()
{
	int i,j;
	int a=11;
	for(i=1; i<=5; i++)
	{
		for(j=1; j<=i; j++)
		{
			printf("%d",a);
			a++;
		}
		printf("\n");
	}
}