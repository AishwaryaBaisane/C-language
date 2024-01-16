//Q.1 Write a Program to write even & odd numbers from 50 to 70 into two separate files.
#include<stdio.h>
int main()
{
    FILE *even,*odd;
	even = fopen("even.txt","w");	
	odd = fopen("odd.txt","w");	
	
	int i;
	fprintf(even,"even :");
	fprintf(odd,"odd :");
	
	printf("even number :");
	for(i=50; i<=70; i++)
	{
		if(i%2==0)
		{
			printf("%d ",i);
		}
	}
	printf("\nodd number :");
	for(i=50; i<=70; i++)
	{
		if(i%2!=0)
		{
			printf("%d ",i);
		}
	}
	for(i=50; i<=70; i++)
	{
		if(i%2==0)
		{
			fprintf(even,"%d ",i);
		}
		else
		{
			fprintf(odd,"%d ",i);
		}
	}
}