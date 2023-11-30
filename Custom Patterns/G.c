//G
#include<stdio.h>
main()
{
	int i,j,k;
	for(i=1; i<=7; i++)
	{
		for(j=1; j<=6; j++)
		{
			if((i==1&&j!=1&&j!=5&&j!=6) ||(j==1&&i!=1&&i!=7) ||(i==7&&j!=1&&j!=5&&j!=6)||(j==5&&i!=3&&i!=1&&i!=7)||(i==4&&j==3)||(i==4j==4))
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