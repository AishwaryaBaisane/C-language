
//* * *
//* *
//*
//* * * *
//* *
//* *
//* * *
#include<stdio.h>
main()
{
	int i,j,k;
	for(i=1; i<=7; i++)
	{
		for(j=1; j<=3; j++)
		{
			if( i==1 || i==7 )
			{
				printf(" * ");
			}
		    else if(j==1 )
		    {
		    	printf(" * ");
			}
			else if(i==4)
		    {
		    	printf("* *");
			}
			else if(j==3)
		    {
		    	printf("     * ");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
}
