//1. WAP to demonstrate the use of break keywords.

#include<stdio.h>
main()
{
	int y;
	printf("enter y :");
	scanf("%d",&y);
	
	int x;
	for(x=1; x<=10; x++)
	{
		printf("%d ",x);
		if(x==y)
		{
			break;
		}
		
	}
}