//Q.2 Write a Program to check if a given number is divisible by both 3 & and 5 or not by using UDF
//tnrn
#include<stdio.h>
int	divisible()
{
	int n;
	printf("enter number :");
	scanf("%d",&n);
	
	if(n%3==0 && n%5==0)
	{
		printf("number is divisible by 3 & 5");
	}
	else if(n%3==0)
	{
		printf("number is divisible by 3 ");
	}
	else if(n%5==0)
	{
		printf("number is divisible by 5 ");	
	}
	else
	{
		printf("number is not divisible by 3 & 5");
	}
}


main()
{
	divisible();
}