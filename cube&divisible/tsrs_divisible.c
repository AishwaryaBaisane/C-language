//Q.2 Write a Program to check if a given number is divisible by both 3 & and 5 or not by using UDF
//tsrs
#include<stdio.h>
int	divisible(int n,int a)
{

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
	int n;
	int a=0;
	printf("enter number :");
	scanf("%d",&n);
	divisible(n,a);
	
	if(	divisible(n,a)==1)
	{
		printf("number is divisible by 3 & 5");
	}
	else if(divisible(n,a)==2)
	{
		printf("number is divisible by 3 ");
	}
	else if(divisible(n,a)==3)
	{
		printf("number is divisible by 5");
	}
	else if(divisible(n,a)==4)
	{
	  printf("number is not divisible by 3 & 5");
	}
}