//Q.7 Write a Program to print the below pattern using nested for loop.
//*  *  *  *  *
//*           *
//*  *  *  *  *
//*           *
//*           *
#include<stdio.h>
main()
{
	int i,j;
	for(i=1; i<=5; i++)
	{
		for(j=1; j<=5; j++)
		{
			if(i==1||j==1||j==5||(j==2&&i==3)||(j==3&&i==3)||(j==4&&i==3))
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
}