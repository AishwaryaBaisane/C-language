//1. Write C program to input any character and check whether it is alphabet, digit or special character.
#include<stdio.h>
main()
{
    char ans;
	printf("enter your number :");
	scanf(" %c",&ans);
	
	if(ans>='A' && ans<='Z')
	{
		printf("it's a alphbet");
	}
	else if(ans>='a' && ans<='z')
	{
		printf("it's a small alphabet");
	}
	else 
	{
		printf("it's a special charector");
	}

}