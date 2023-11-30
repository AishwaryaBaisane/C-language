//D
#include<stdio.h>
main()
{
	int i,j,k;
	for(i=1; i<=7; i++)
	{
		for(j=1; j<=6; j++)
		{
			if((i==1&&j!=4&&j!=5&&j!=3&&j!=6) || (i==7&&j!=3&&j!=4&&j!=5&&j!=6) || j==1 ||(i==2&&j==4) ||(i==3&&j==5)||(i==4&&j==6)||(i==5&&j==5)||(i==6&&j==4))
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