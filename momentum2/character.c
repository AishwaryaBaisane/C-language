//1. Write C program to input any character and check whether it is alphabet, digit or special character.
#include<stdio.h>
main()
{
	int number;
	printf("enter your number :");
	scanf("%d",&number);
	
	if(number>=65 && number<=90)
	{
		printf("it's a alphbet");
	}
	else if(number>=97 && number<=122)
	{
		printf("it's a small alphabet");
	}
	else if(number>=48 && number<=57)
	{
		printf("it's a special charector");
	}
	else
	{
		printf("enter valid number");
	}
}