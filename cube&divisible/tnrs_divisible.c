//Q.2 Write a Program to check if a given number is divisible by both 3 & and 5 or not by using UDF
//tnrs
#include<stdio.h>
int	divisible()
{
	int n;
	printf("enter number :");
	scanf("%d",&n);
    int a=0;
    
	if(n%3==0 && n%5==0)
	{
	  a=1;	
	}
	else if(n%3==0)
	{
	   a=2;	
	}
	else if(n%5==0)
	{
	   a=3;	
	}
	else
	{
	   a=4;	
	}
	return a;

	
}


main()
{
	
	int b=divisible();
	
	if(b==1)
	{
		printf("number is divisible by 3 & 5");
	}
	else if(b==2)
	{
		printf("number is divisible by 3 ");
	}
	else if(b==3)
	{
		printf("number is divisible by 5");
	}
	else if(b==4)
	{
	  printf("number is not divisible by 3 & 5");
	}
}