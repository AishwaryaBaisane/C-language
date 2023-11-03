//W0P to Find if a given no. is neutral or not using
//ladder if else.
#include<stdio.h>
main()
{
	int number;
	printf("enter number:");
	scanf("%d",&number);
	
	if(number==0)
	{
		printf("number is neutral");
	}
	else
	{
		if(number<0)
		{
			printf("number is nagetive");
		}
		else
		{
			printf("number is positive");
		}
	}
}