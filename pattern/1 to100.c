#include<stdio.h>

int main()
{
	int i,j,k=1,y=1,l;
	for(i=1; i<=10; i++)
	{
		for(l=1; l<i; l++)
		{     
			printf(" - ");
		}     
		for(j=i ;j<=10 ;j++)
		{ 
			printf(" %d",k);
			if(k>=1&&k<=9)
			{
			  printf(" ");
			}
			k=k+j;
    	}
		for(j=9; j>=i; j--)
		{
			printf(" %d",k);
			k=k+j;
		}
        y+=i;
		k=i+y;
		printf("\n");     
    }
}
