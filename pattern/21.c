//A
//A B
//A B C
//A B C D
//A B C D E

#include<stdio.h>
main()
{
	int i,j;
	for(i='A'; i<='E'; i++)
	{
		for(j='A'; j<=i; j++)
		{
			printf(" %c ",j);
		}
		printf("\n");
	}
}