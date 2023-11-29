//A B C D E
//  B C D E
//    C D E
//      D E
//        E
#include<stdio.h>
main()
{
	int i,j,k;
	for(i='A'; i<='E'; i++)
	{
		for(k=i; k>'A'; k--)
		{
			printf(" ");
		}
		for(j=i; j<='E'; j++)
		{
			printf("%c",j);
		}
		printf("\n");
	}
}