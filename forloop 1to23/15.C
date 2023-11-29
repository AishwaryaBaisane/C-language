//A B C D E
//  A B C D
//    A B C
//      A B
//        A
#include<stdio.h>
main()
{
	int i,j,k;
	for(i='E'; i>='A'; i--)
	{
		for(k=i; k<'E'; k++)
		{
			printf(" ");
		}
		for(j='A'; j<=i; j++)
		{
			printf("%c",j);
		}
		printf("\n");
	}
}